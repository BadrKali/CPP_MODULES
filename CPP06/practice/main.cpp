#include<iostream>





class Base {
    public:
        void test() {
            std::cout << "hello base" << std::endl;
        }
        void too() {
            std::cout << "hello Too" << std::endl;
        }
    private:
};

class Derived : public Base {
    public:
        void test() {
            std::cout << "hello derived" << std::endl;
        }
        void nani() {
            std::cout << "nani" << std::endl;
        }
    private:
};


int main() {
    int* ptr = new int(42);
    std::cout << ptr << std::endl;
    uintptr_t intptr = reinterpret_cast<uintptr_t>(ptr);
    std::cout << intptr << std::endl;
}