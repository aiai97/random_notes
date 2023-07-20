Bitwise AND (&): This operation is used to extract specific bits or flags' values and check if specific bits are set to 1.

LeetCode 136. Single Number: Finding the element that appears only once in an array. Bitwise AND can be used to check whether a specific bit is set to 1, allowing us to determine the unique element.
Bitwise OR (|): This operation is used to set specific bits or flags' values.

LeetCode 268. Missing Number: Finding the missing number in an array. Bitwise OR can be used to set all the bits representing the numbers in the array and those representing 0 to n, then find the missing number.
Bitwise XOR (^): This operation is used to check whether two numbers are equal and find the unique elements.

LeetCode 136. Single Number: As explained earlier, Bitwise XOR can help find the unique element in an array.

LeetCode 268. Missing Number: Bitwise XOR can be used to find the missing number by XORing all the elements in the array and the elements from 0 to n.

LeetCode 260. Single Number III: Finding the two unique numbers in an array where all other numbers appear twice. Bitwise XOR can be used to separate the two unique numbers by XORing all the elements in the array.

LeetCode 190. Reverse Bits: Reversing the bits of a 32-bit unsigned integer. Bitwise XOR can be used to reverse the bits by XORing the original number with the bit position of the reversed bit.

LeetCode 461. Hamming Distance: Calculating the Hamming distance between two integers. Bitwise XOR can be used to calculate the XOR of two numbers and then count the number of set bits in the result to find the Hamming distance.
按位与（AND）：将两个操作数的二进制表示按位进行与运算，只有当两个对应位都为1时，结果为1，否则为0。
python
Copy code
a = 5  # 二进制表示为 101
b = 3  # 二进制表示为 011
result = a & b  # 二进制表示为 001，即十进制的 1
print(result)
按位或（OR）：将两个操作数的二进制表示按位进行或运算，只要两个对应位中有一个为1时，结果为1，否则为0。
python
Copy code
a = 5  # 二进制表示为 101
b = 3  # 二进制表示为 011
result = a | b  # 二进制表示为 111，即十进制的 7
print(result)
按位异或（XOR）：将两个操作数的二进制表示按位进行异或运算，只有当两个对应位不相同时，结果为1，否则为0。
python
Copy code
a = 5  # 二进制表示为 101
b = 3  # 二进制表示为 011
result = a ^ b  # 二进制表示为 110，即十进制的 6
print(result)
按位取反（NOT）：将操作数的二进制表示按位取反，即0变为1，1变为0。
python
Copy code
a = 5  # 二进制表示为 00000000 00000000 00000000 00000101
result = ~a  # 二进制表示为 11111111 11111111 11111111 11111010，即十进制的 -6
print(result)
左移（<<）：将一个数的二进制表示向左移动指定的位数，相当于将其乘以 2 的幂。
python
Copy code
a = 5  # 二进制表示为 00000000 00000000 00000000 00000101
result = a << 1  # 二进制表示为 00000000 00000000 00000000 00001010，即十进制的 10
print(result)
右移（>>）：将一个数的二进制表示向右移动指定的位数，相当于将其除以 2 的幂。
python
Copy code
a = 5  # 二进制表示为 00000000 00000000 00000000 00000101
result = a >> 1  # 二进制表示为 00000000 00000000 00000000 00000010，即十进制的 2
print(result)
这些是常见的位运算操作及其对应的 Python 代码示例。位运算在编程中有很多用途，特别是在位操作、优化算法和数据压缩方面具有重要的作用。
