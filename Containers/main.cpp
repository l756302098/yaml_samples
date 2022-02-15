/*
 * main.cpp
 *
 *  Created on: 12 01, 2021
 *      Author: liyanlong
 */

#include <iostream>
#include <set>

int main ()
{
    std::set<int> myset;
    std::set<int>::iterator it;

    // insert some values:
    for (int i=1; i<10; i++) myset.insert(i*10);  // 10 20 30 40 50 60 70 80 90

    it = myset.begin();
    ++it;                                         // "it" points now to 20

    myset.erase (it);

    int dSize = myset.erase (40);
    std::cout << "del size:" << dSize << std::endl;

    it = myset.find (60);
    myset.erase (it, myset.end());

    std::cout << "myset contains:";
    for (it=myset.begin(); it!=myset.end(); ++it)
    std::cout << ' ' << *it;
    std::cout << '\n';

    dSize = myset.erase (40);
    std::cout << "del size:" << dSize << std::endl;

    return 0;
}


