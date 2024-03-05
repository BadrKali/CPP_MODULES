#include"Span.hpp"




Span::Span(unsigned int n) {
    // std::cout << "Span Constructor" << std::endl;
    this->n = n;
    this->elements.reserve(n);
}

Span::Span(const Span& other) {
    this->n = other.n;
    this->elements.reserve(n);
    (*this) = other;
}

Span& Span::operator=(const Span& other) { 
    this->elements.clear();
    this->addRange(other.elements.begin(), other.elements.end());
    return(*this);
}

Span::Span() { }

Span::~Span() { }

void Span::addNumber(int value) {
    if(this->elements.size() >= n)
        throw(std::out_of_range("The Span Is Full"));
    this->elements.push_back(value);
}


unsigned int Span::shortestSpan() {
    if(this->elements.size() < 2)
        throw(std::runtime_error("very short sequence"));
    
    std::sort(this->elements.begin(), this->elements.end());
    unsigned int distance = std::numeric_limits<int>::max();
    for(std::vector<int>::iterator it = this->elements.begin(); it != this->elements.end() - 1; it++) {
        unsigned int span = *(it + 1) - *(it);
        if(span < distance) 
            distance = span;
    }
    return(distance);
}


unsigned int Span::longestSpan() {

    if (this->elements.size() < 2)
        throw std::runtime_error("Very short sequence");
    unsigned int distance = 0;
    std::sort(this->elements.begin(), this->elements.end());
    std::vector<int>::iterator it_begin = this->elements.begin();
    std::vector<int>::iterator it_end = this->elements.end() - 1;

    distance = *(it_end) - *(it_begin); 
    return distance;
}