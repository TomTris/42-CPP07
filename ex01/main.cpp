
#include "Iter.hpp"
#include <iostream>
#include <cctype>

// void ft_tolower(char &arr)
// {
// 	arr = std::tolower(static_cast<unsigned char>(arr));
// }

// void ft_toupper(char &arr)
// {
// 	arr = std::toupper(static_cast<unsigned char>(arr));
// }

// int main()
// {
// 	char a[] = {'A', 'B', 'C'};

// 	std::cout << "Original:" <<
// 	"\n\ta[0]: " << a[0] <<
// 	"\n\ta[1]: " << a[1] <<
// 	"\n\ta[2]: " << a[2] <<
// 	std::endl << std::endl;

// 	::iter(a, sizeof(a) / sizeof(char), ft_tolower);

// 	std::cout << "Changed:" <<
// 	"\n\ta[0]: " << a[0] <<
// 	"\n\ta[1]: " << a[1] <<
// 	"\n\ta[2]: " << a[2] <<
// 	std::endl << std::endl;

// 	::iter(a, 2, ft_toupper);

// 	std::cout << "Changed:" <<
// 	"\n\ta[0]: " << a[0] <<
// 	"\n\ta[1]: " << a[1] <<
// 	"\n\ta[2]: " << a[2] <<
// 	std::endl << std::endl;

// 	std::cout << "------" << std::endl;
// }

template < typename T>
void    square(T &a)
{
    (void)a;
    std::cout << "a" << std::endl;
}
template < typename T>
void    add_3(T &a)
{
    a += 3.0;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    iter(arr, 5, square<int>);
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    double arr1[3] = {1.2, 2.3, 3.1};
    iter(arr1, 3, square<double>);
    for (int i = 0; i < 3; i++)
    {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    iter(arr1, 3, add_3< double>);
    for (int i = 0; i < 3; i++)
    {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    int arr2[5] = {1, 2, 3, 4, 5};
    iter(arr2, 5, add_3<int>);
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;
}
