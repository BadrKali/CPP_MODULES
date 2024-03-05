#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>


template<typename T>
class Array {
    public:
        Array();
        ~Array();
        Array(unsigned int n);
        Array(const Array& other);

        Array<T>& operator=(const Array<T>& other);
        T &operator[](unsigned int position);
        const T &operator[](unsigned int position) const;

        unsigned int size() const;
    private:
        T* values;
        unsigned int arraySize;

};

template<typename T>
Array<T>::Array() {
    this->values = new T[0];
    this->arraySize = 0;
}


template<typename T>
Array<T>::~Array() {
    delete[] values;
}

template<typename T>
Array<T>::Array(unsigned int size) {
    this->values = new T[size];
    this->arraySize = size;
}


template<typename T>
Array<T>::Array(const Array& other) {
    this->values = new T[0];
    (*this) = other;
}

template<typename T>
unsigned int Array<T>::size() const {
    return(this->arraySize);
}

template<typename T> 
T& Array<T>::operator[](unsigned int position) {
    if(position >= arraySize || position < 0)
        throw(std::out_of_range("position invalid"));
    return(values[position]);
}

template<typename T> 
const T& Array<T>::operator[](unsigned int position) const {
    if(position >= arraySize || position < 0)
        throw(std::out_of_range("position invalid"));
    return(values[position]);
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other) {

    if(this == &other)
        return(*this);
    delete[] this->values;
    this->values = new T[other.size()];
    this->arraySize = other.size();
    for(unsigned int i = 0; i < this->arraySize; i++) {
        this->values[i] = other.values[i];
    }
    return((*this));
}

#endif