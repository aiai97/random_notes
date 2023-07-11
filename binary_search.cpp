//
// Created by aiai97 on 2023/7/10.
//
#include "algorithm"
//If you have a sorted array arr and an element x, then in space, binary search can:
//Find the index of x if it is in arr
//Find the first or the last index in which x can be inserted to maintain being sorted otherwise
#include <vector>
using namespace std;
int binarySearch(vector<int>& arr,int target){
    int left = 0;
    int right = int(arr.size()) - 1;
    while (left <= right){
        int mid = left + (right - left) /2;
        if (arr[mid] == target){
            //do something
            return mid;
        }
        if (arr[mid] > target){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return left;
}
//arr = [2, 4, 6, 8, 10]  5
//   left 0 right 4 mid  2   arr[2]=6 > 5 right = 1
//   left 0 right 1 mid 1    arr[1] = 4 < 6 left = 2
// return left 2
//the left-most index
int binarySearch1(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= target) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}
// right-most insertion point (the index of the right-most element plus one)
int binarySearch2(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] > target) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

//Example 1: 704. Binary Search
//
//You are given an array of integers nums which is sorted in ascending order, and an integer target. If target exists in nums, return its index. Otherwise, return -1.
