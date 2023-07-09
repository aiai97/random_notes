//
// Created by aiai97 on 2023/7/9.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

//int main() {
//    // 示例容器
//    std::vector<int> numbers = {5, 3, 1, 7, 2, 6, 4};
//
//    // 使用 std::sort() 对容器进行排序
//    std::sort(numbers.begin(), numbers.end());
//    for (int num : numbers) {
//        std::cout << num << " ";  // 输出：1 2 3 4 5 6 7
//    }
//    std::cout << std::endl;
//
//    // 使用 std::find() 在容器中查找指定元素的第一个匹配项
//    auto it = std::find(numbers.begin(), numbers.end(), 4);
//    if (it != numbers.end()) {
//        std::cout << "Found element 4 at position: " << std::distance(numbers.begin(), it) << std::endl;  // 输出：Found element 4 at position: 3
//    }
//
//    // 使用 std::count() 统计容器中与指定值相等的元素的个数
//    int count = std::count(numbers.begin(), numbers.end(), 2);
//    std::cout << "Number of occurrences of 2: " << count << std::endl;  // 输出：Number of occurrences of 2: 1
//
//    // 使用 std::transform() 对容器中的元素进行转换操作，生成一个新的容器
//    std::vector<int> squaredNumbers;
//    std::transform(numbers.begin(), numbers.end(), std::back_inserter(squaredNumbers), [](int num) {
//        return num * num;
//    });
//    for (int num : squaredNumbers) {
//        std::cout << num << " ";  // 输出：1 4 9 16 25 36 49
//    }
//    std::cout << std::endl;
//
//    // 使用 std::reverse() 反转容器中元素的顺序
//    std::reverse(numbers.begin(), numbers.end());
//    for (int num : numbers) {
//        std::cout << num << " ";  // 输出：7 6 5 4 3 2 1
//    }
//    std::cout << std::endl;
//
//    return 0;
//}

//int main(){
//    // 示例容器
//    std::vector<int> numbers = {5, 3, 1, 7, 2, 6, 4};
//
//    // 使用 std::max_element() 在容器中查找最大元素的迭代器
//    auto maxIt = std::max_element(numbers.begin(), numbers.end());
//    if (maxIt != numbers.end()) {
//        std::cout << "Max element: " << *maxIt << std::endl;  // 输出：Max element: 7
//    }
//
//    // 使用 std::min_element() 在容器中查找最小元素的迭代器
//    auto minIt = std::min_element(numbers.begin(), numbers.end());
//    if (minIt != numbers.end()) {
//        std::cout << "Min element: " << *minIt << std::endl;  // 输出：Min element: 1
//    }
//
//    // 使用 std::accumulate() 计算容器中元素的累加值
//    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
//    std::cout << "Sum of elements: " << sum << std::endl;  // 输出：Sum of elements: 28
//
//    // 使用 std::copy() 将一个容器中的元素复制到另一个容器中
//    std::vector<int> copiedNumbers;
//    std::copy(numbers.begin(), numbers.end(), std::back_inserter(copiedNumbers));
//    for (int num : copiedNumbers) {
//        std::cout << num << " ";  // 输出：5 3 1 7 2 6 4
//    }
//    std::cout << std::endl;
//
//    // 使用 std::unique() 移除容器中的连续重复元素，仅保留一个副本
//    std::vector<int> uniqueNumbers = {1, 2, 2, 3, 3, 3, 4, 4, 5};
//    auto newEnd = std::unique(uniqueNumbers.begin(), uniqueNumbers.end());
//    uniqueNumbers.erase(newEnd, uniqueNumbers.end());
//    for (int num : uniqueNumbers) {
//        std::cout << num << " ";  // 输出：1 2 3 4 5
//    }
//    std::cout << std::endl;
//
//    return 0;
//}