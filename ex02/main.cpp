#include <cstdlib>
#include <iostream>
#include "Array.hpp"
#include <ctime>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    std::srand(std::time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = std::rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = std::rand();
    }
    delete [] mirror;
    std::cerr << "------------------------------" << std::endl;
    Array<int> nbr(2);
    try
    {
        std::cout << "hier print trash value" << std::endl;
        std::cout << nbr[0] << std::endl;
        std::cout << nbr[1] << std::endl;
        std::cout << nbr[2] << std::endl;
    }
    catch (const std::exception &e)
    {
        e.what();
    }
    std::cerr << "------------------------------" << std::endl;
    Array<int> aa(10);
    Array<int> bb(aa);
    for (int i = 0; i < 10; i++)
    {
        aa[i] = i;
    }
    for(int i = 0; i < 10; i++)
    {
        if (aa[i] == bb[i])
            std::cout << "At i = " << aa[i] << ", aa[i] = bb[i]" << std::endl;
    }
    // delete [] nbr;
    return 0;
}