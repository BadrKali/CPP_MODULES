#ifndef ITER_HPP
#define ITER_HPP

#include<iostream>


template<typename T, typename U>

void iter(T *arrayAdress,size_t size, U function) {
    size_t i = 0;

    while(i < size) {
        function(arrayAdress[i]);
        i++;
    }
}


template<typename T> 

void print(T &ele) {
    std::cout << ele << std::endl;
}




#endif