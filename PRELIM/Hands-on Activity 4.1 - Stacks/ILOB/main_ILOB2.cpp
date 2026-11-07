#include <iostream>
#include "listStack.h"

int main(){

    std::cout << "\n===== Pushing 'I' 'E' 'E' 'E' ===== " << std::endl;

    // pushing
    push('I');
    push('E');
    push('E');
    push('E');

    // display top
    Top<char>();

    // displaying all elements
    displayAll<char>();

    // pop and print each element
    std::cout << "\n===== Popping 'E' 'E' 'E' 'I' =====" << std::endl;

    while(!isEmpty<char>()){
        std::cout << "\nPopping: " << pop<char>() << "..." << std::endl;
    }

    // test stack underflow
    std::cout << "\n----------------------------------" << std::endl;
    std::cout << pop<char>() << std::endl;

    return 0;
}