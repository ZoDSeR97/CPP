/**
 * @file centuryFromYear.cpp
 * @author ML
 * @brief 
 * @version 0.1
 * @date 2023-10-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<iostream>

/**
 * @brief
 *  Given a year, return the century it is in.
 *  The first century spans from the year 1 up to and including the year 100.
 *  The second - from the year 101 up to and including the year 200, etc.
 * @param year
 * @return int
 */
int solution(int year)
{
    return year / 100 + (year % 100 != 0 ? 1 : 0);
}

int main(int argc, char const *argv[])
{
    /* code */
    int year;
    std::cin >> year;
    std::cout << solution(year) << std::endl;
    return 0;
}
