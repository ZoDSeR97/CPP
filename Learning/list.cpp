/**
 * @file list.cpp
 * @author ML
 * @brief 
 *  Learn about standard data structure vector
 *  Aka Dynamic Array
 * @version 0.1
 * @date 2023-10-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <vector>

void print1DList(std::vector<int> list)
{
    // ranged loop
    for (int i : list)
    {
        std::cout << i << "  ";
    }
    /* Another range-base loop form */
    // for (const int &i : list)
    // {
    //     std::cout << i << "  ";
    // }
}

void List()
{
    // Standard vector list initialization
    std::vector<int> vector1 = {1, 2, 3, 4, 5};

    // Uniform vector initialization
    std::vector<int> vector2{6, 7, 8, 9, 10};

    // Quick vector initialization
    std::vector<int> vector3(5, 12);

    std::cout << "vector1 = ";

    print1DList(vector1);

    std::cout << "\nvector2 = ";

    print1DList(vector2);

    std::cout << "\nvector3 = ";

    print1DList(vector3);
}

int main(int argc, char const *argv[])
{
    /* code */
    List();
    return 0;
}
