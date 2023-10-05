/**
 * @file mathFun.cpp
 * @author ML
 * @brief 
 * @version 0.1
 * @date 2023-10-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <string>

/**
 * @brief
 *  Write a function that returns the sum of two integer.
 * @param param1
 * @param param2
 * @return int
 */
int add(int param1, int param2)
{
    return param1 + param2;
}

/**
 * @brief
 *  Write a function take in an integer
 *  return the square root of that integer round down
 * @param x
 * @return int
 */
int sqrt(int x)
{
    if (x <= 1)
        return x;
    int low = 0;
    int high = x;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (x / mid == mid)
            return mid;
        if (x / mid < mid)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return high;
}

/**
 * @brief
 *  Write a function that check 
 *  if an integer is a perfect square
 * @param num
 * @return true
 * @return false
 */
bool isPerfectSquare(int num)
{
    unsigned int curr = 1;
    for (int i = 1; curr <= num; i++)
    {
        if (curr == num)
            return true;
        curr = curr + 2 * i + 1;
    }
    return false;
}

/**
 * @brief
 *  Write a function that take in a number
 *  and raise it to power of n
 * @param x
 * @param n
 * @return double
 */
double power(double x, long long n)
{
    double ans = 1.0;
    while (n)
    {
        if (n % 2)
        {
            ans *= x;
            n--;
            if (n > 0)
            {
                x = x * x;
                n /= 2;
            }
        }
        else
        {
            x = x * x;
            n /= 2;
        }
    }
    return ans;
}

/**
 * @brief 
 *  Write a custom power function that
 *  able to raise number to n power
 *  able to raise number to inverse n power
 * @param x 
 * @param n 
 * @return double 
 */
double myPow(double x, int n)
{
    if (x == 1)
        return 1;
    int sign = 1;
    if (n < 0)
        sign = -1;
    n = n * sign;
    double ans = power(x, n);
    if (sign == -1)
        return 1.0 / ans;
    return ans;
}

int main(int argc, char const *argv[])
{
    /* code */
    if (argc == 1)
    {
        std::cout << "Need number to work with..." << std::endl;
        return 0;
    }
    for (int i = 1; i < argc; i++)
    {
        double num = std::stod(argv[i]);
        std::cout << "square root of the number is: " << sqrt(num) << std::endl;
        std::cout << "the number is " << (isPerfectSquare(num) ? "" : "not ") << "perfect square" << std::endl;
        std::cout << "the number raise to power of 4 is: " << power(num, 4) << std::endl;
        std::cout << "testing custom power function:" << std::endl;
        std::cout << "the number raise to power of 4 is: " << power(num, 4) << std::endl;
        std::cout << "the number raise to power of -4 is: " << myPow(num, -4) << std::endl;
    }

    return 0;
}