#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include<stack>
#include<iostream>
#include<vector>
#include<list>

template<typename T>
class MutantStack : public std::stack<T> {
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack();
        MutantStack(const MutantStack& other);
        MutantStack& operator=(const MutantStack& other);
        ~MutantStack();

        iterator begin();
        iterator end();

    private:

};


template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {
    // std::cout << "MutantStack Default Constructor called" << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& other) {
    (*this) = other;
}

template<typename T>
MutantStack<T>::~MutantStack() {

}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return (this->c.end());
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other) {
    this->c = other.c;
    return(*this);
}

#endif
