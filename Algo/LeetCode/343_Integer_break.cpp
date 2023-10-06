/**
 * @file 343_Integer_break.cpp
 * @author ML
 * @brief 
 * @version 0.1
 * @date 2023-10-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief
 *  Given an integer n, break it into the sum of k positive integers, where k >= 2, and maximize the product of those integers.
 *  Return the maximum product you can get.
 *  Constraints: 2 <= n <= 58
 * @param 2 <= n <= 58
 * @return int
 */

#include<iostream>
#include<cmath>

int integerBreak(int n)
{
    // Base cases
    if (n < 4)
        return n - 1;
    // Calculate the number of times 3 can be multiplied
    int MultiCube = n / 3, remainder = n % 3;
    // No remainder, it is divisible by 3
    if (remainder == 0)
        return pow(3, MultiCube);
    // If remainder is 1, breaks it into as many 3s and leaves one 3 as 4
    if (remainder == 1)
        return pow(3, MultiCube - 1) * 4;
    // If remainder is 2, breaks it into as many 3s and add 2
    return pow(3, MultiCube) * 2;
}

int main(int argc, char const *argv[])
{
    /* code */
    std::cout << integerBreak(2) << "\n";
    std::cout << integerBreak(2) << "\n";
    std::cout << integerBreak(10) << "\n";
    std::cout << integerBreak(58) << "\n";

    return 0;
}
