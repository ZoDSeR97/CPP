/**
 * @file templateFun.cpp
 * @author ML
 * @brief
 *  Learn about template:
 *      This feature blur the line between
 *          strongly typed language vs loosely typed language
 *      Also bring a lot of fun when overloading feature join in
 * @version 0.1
 * @date 2023-10-07
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
#include <vector>
#include <array>
#include <string>

/**
 * @brief
 *  Using template to write 
 *  A print array function work regardless of data type
 * @tparam T
 * @param arr
 */
template <typename T>
void printArray(const T &arr)
{
    // ranged loop
    for (const auto &i : arr)
    {
        std::cout << i << "  ";
    }
}

void testPrinting()
{
    int intArr[] = {1, 2, 3, 4, 5};
    char charArr[] = {'h', 'e', 'l', 'l', 'o'};
    double doubleArr[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    std::string str = "realstring";
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    std::vector<int> list = {1, 2, 3, 4, 5};
    std::cout << "intArr = ";
    printArray(intArr);
    std::cout << "\ncharArr = ";
    printArray(charArr);
    std::cout << "\ndoubleArr = ";
    printArray(doubleArr);
    std::cout << "\nstr = ";
    printArray(str);
    std::cout << "\nstd::array = ";
    printArray(arr);
    std::cout << "\nlist = ";
    printArray(list);
}

int main(int argc, char const *argv[])
{
    /* code */
    testPrinting();
    return 0;
}
