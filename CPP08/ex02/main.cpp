#include"MutantStack.hpp"


int main()
{
    MutantStack<int> myStack;
    MutantStack<int> myStack_two;

    if(myStack.empty())
        std::cout << "MutantStack is empty" << std::endl;
    
    std::cout << "Pushing elements into the MutantStack" << std::endl << std::endl;
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    std::cout << "myStack elements" << std::endl;
    for(MutantStack<int>::iterator it = myStack.begin(); it != myStack.end(); it++)
        std::cout << (*it) << " ";
    std::cout << std::endl << std::endl;
    myStack_two = myStack;
    std::cout << "printing MyStack_two elements" << std::endl;
    for(MutantStack<int>::iterator it = myStack_two.begin(); it != myStack_two.end(); it++)
        std::cout << (*it) << " ";
    std::cout << std::endl;
    std::stack<int> s(myStack);
    while(!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }

    
}