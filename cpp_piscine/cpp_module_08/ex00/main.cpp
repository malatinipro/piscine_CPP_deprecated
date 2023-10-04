#include "easyfind.hpp"
//#include <bits/stdc++.h>

int main(void)
{
    std::cout << "Testing with a vector of type int" << std::endl;

    int arr[5] = {1, 2, 4, 6, 7};
    //https://www.geeksforgeeks.org/initialize-a-vector-in-cpp-different-ways/
    int n = sizeof(arr) / sizeof(arr[0]);
    std::vector<int> my_vector(arr, arr + n);
    std::cout << "The vector stores the collection {1, 2, 4, 6, 7}" << std::endl;
    std::cout << "We'll be looking for the 6 value" << std::endl;
    try
    {
      easyfind(my_vector, 6);
    }
    catch (std::exception &e)
    {
      std::cout << e.what() << std::endl;
    }
    std::cout << "We'll be looking for the 10 value" << std::endl;
    try
    {
      easyfind(my_vector, 10);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
