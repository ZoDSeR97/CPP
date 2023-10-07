/**
 * @file array.cpp
 * @author ML
 * @brief 
 *  Learn about basic array and standard array
 * @version 0.1
 * @date 2023-10-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<iostream>
#include<array>

/**
 * @brief
 *  Normally passing a static array (aka arr[]) to a function
 *  Will decompose into a pointer point to 1st element
 *  So now we basically dealing with singly linked list
 *  We need to pass the length as 2nd parameter
 *  As C/C++ doesn't know what is illegal until your computer broke
 * @param arr
 * @param n
 */
void print1DArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << *(arr+i) << "  "; // a[i] == *(arr+i)
    }
}

/**
 * @brief
 *  If we define a function template where N is
 *  A template parameter representing the size of the array
 *  Taking a reference to an array of integers (arr) with size N
 *  We avoid manually declare the size of the array
 * @tparam N
 * @param arr
 */
template <size_t N>
void printArray(int (&arr)[N])
{
    // ranged loop
    for (const int &i : arr)
    {
        std::cout << i << "  ";
    }
    /* Another range-base loop form (shorter) */
    // for (int i : arr)
    // {
    //     std::cout << i << " ";
    // }
}

/**
 * @brief 
 *  Main difference between std::array and basic array
 *  std::array is more in line with modern array
 *      std::array has size() method for its size
 *      debug mode does catch invalid access to std::array
 *      std::array is a container and it does benefit from std::algorithm library
 */
void Array()
{
    std::array<int, 5> arr1 = {1, 2, 3, 4, 5};
    // showcase another 2 variations of for loop
    // they all work, pick one style
    std::cout << "\nstd::arr1 = ";
    for (int i = 0; i < arr1.size(); i++)
    {
        std::cout << arr1[i] << "  ";
    }
    std::array<int, 5> arr2; // Still same behavior as basic array
    std::cout << "\nstd::arr2 = ";
    for (std::array<int,5>::iterator i = arr2.begin(); i!=arr2.end();++i)
    {
        std::cout << *i << "  ";
    }
}

int main(int argc, char const *argv[])
{
    /* code */

    // Basic array declaration
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5]; // Note elements are not auto initialize to 0
    std::cout << "arr1 = ";
    print1DArray(arr1, sizeof(arr1) / sizeof(int));
    std::cout << "\narr2 = ";
    printArray(arr2);
    
    Array();

    return 0;
}

template <typename T, size_t N>
void printArray(const T (&arr)[N])
{
    // ranged loop
    for (const int &i : arr)
    {
        std::cout << i << "  ";
    }
    /* Another range-base loop form */
    // for (int i : arr)
    // {
    //     std::cout << i << " ";
    // }
}