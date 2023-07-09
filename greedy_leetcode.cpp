#include <vector>
#include <algorithm> // 添加这一行以使用 sort 函数
#include <iostream>
using namespace std;

//You are given an integer array asteroids and an integer mass representing the mass of a planet. The planet will collide with the asteroids one by one - you can choose the order. If the mass of the planet is less than the mass of an asteroid, the planet is destroyed. Otherwise, the planet gains the mass of the asteroid. Can you destroy all the asteroids?
class Solution {
public:
    bool asteroidDestroyed(int mass, std::vector<int> &asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long currMass = mass;
        for(int asteroid:asteroids){
            if(asteroid < currMass){
                return false;
            }
            currMass += asteroid;
        }
        return true;
    }
};


//int main(){
//    int mass = 10;
//    std::vector<int> asteroids = {5,10,15,10,20};
//    Solution solution;
//    bool result = solution.asteroidDestroyed(mass,asteroids);
//    cout << boolalpha << result << endl;
//}
//Example 2: 2294. Partition Array Such That Maximum Difference Is K
//
//Given an integer array nums and an integer k, split nums into subsequences, where each subsequences' maximum and minimum element is within k of each other. What is the minimum number of subsequences needed?
//
//For example, given nums = [3, 6, 1, 2, 5] and k = 2, the answer is 2. The subsequences are [3, 1, 2] and [6, 5].
class Solution1{
public:
    int partitionArray(std::vector<int>& nums,int k){
        sort(nums.begin(),nums.end());
        int ans = 1;
        int x = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]-x>k){
                x = nums[i];
                ans++;
            }
        }
        return ans;
    }
};

int main(){
    std::vector<int> nums = {1,2,4,6,5};
    int k = 2;
    Solution1 solution;
    int minSubsequences = solution.partitionArray(nums, k);
    cout << "Minimum number of subsequences needed: " << minSubsequences << endl;

    return 0;
}