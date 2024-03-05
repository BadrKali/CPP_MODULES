#ifndef ITER_HPP
#define ITER_HPP
#include<iostream>


template<typename T, typename U>
void iter(T *array, size_t length, U function) {
    for(size_t i = 0; i < length; i++)
        function(array[i]);
}


template<typename T>
void printElement(T elem) {
    std::cout << elem << std::endl;
}


#endif