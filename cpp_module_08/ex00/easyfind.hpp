#ifndef EASYFIND_HPP
 #define EASYFIND_HPP

 #include <iostream>
 #include <string>

 #include <algorithm>
 #include <vector>
 #include <list>
 #include <deque>
 #include <set>
 #include <map>

template<typename T>
 //On veut retourner la premiere occurence du premier param dans le deuxieme
 //On cherche dans une "collection"
 //Il existe un algorithme qui fait ca pour nous et qui retourne une adresse
std::vector<int>::iterator easyfind(T &a, int n)
{
 //la fonction find fait partie de la librairie algorithm
 //Arguments classique de l'algorithme
 //https://www.youtube.com/watch?v=FUNs1pRJOso
   std::vector<int>::iterator it = std::find(a.begin(), a.end(), n);
   if (it == a.end())
   {
     throw std::runtime_error(std::string("Error. The element is not present"));
   }
   std::cout << "Element found." << std::endl;
   std::cout << "The value is " << *it << std::endl;
   return (it);
}

#endif
