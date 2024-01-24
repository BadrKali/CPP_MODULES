#ifndef ARRAY_HPP
#define ARRAY_HPP



template<typename T>
class Array {
    public:
        Array();
        Array(unsigned int size);
        ~Array();
        Array(const Array& other);

        // T& operator=(const Array& other);
        T &operator[](unsigned int position);
        const T &operator[](unsigned int position) const;

        unsigned int size();
    private:
        T *values;
        unsigned int arraySize;

};

template<typename T>
unsigned int Array<T>::size() {
    return(this->arraySize);
}

template<typename T>
Array<T>::Array(const Array& other) {
    std::cout << "Array copy constructor called" << std::endl;
    (*this) = other;
}

template<typename T>
Array<T>::Array() {
    values = new T[0];
    this->arraySize = 0;
}

template<typename T>
Array<T>::Array(unsigned int arraySize) {
    values = new T[arraySize];
    this->arraySize = arraySize;
}

template<typename T>
Array<T>::~Array() {
    delete[] values;
}


// template<typename T>
// T& Array<T>::operator=(const Array& other) {
//     if(&other == this)
//         return *this;
//     this->size = other->size;
//     for(int i = 0; i < this->arraySize; i++) {
//         this->values[i] = other->values[i];
//     }
//     return((*this));
// }

template<typename T> 
T& Array<T>::operator[](unsigned int position) {
    if(position >= arraySize || position < 0)
        throw(std::invalid_argument("position invalid"));
    return(values[position]);
}

template<typename T> 
const T& Array<T>::operator[](unsigned int position) const {
    if(position >= arraySize || position < 0)
        throw(std::invalid_argument("position invalid"));
    return(values[position]);
}
#endif