#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<iostream>
#include<vector>
#include<algorithm>


template<typename T>
int easyfind(T& intContainer, int value) {
    typename T::iterator it = std::find(intContainer.begin(), intContainer.end(),value);

    if(it != intContainer.end()) {
        return(value);
    }
    throw(std::out_of_range("the value does not exist"));
}




#endif