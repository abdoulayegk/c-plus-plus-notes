/* Program to find factorial of a number using recursion */

#include <iostream>
using namespace std;

int fact(int n){
    if (n<1) {
        std::cout << "Enter a positive number:\n" << std::endl;
        return 1;
    }
    else {
        return n*fact(n-1);
    }
}

int main(int argc, char *argv[])
{
    int x, fc;
    std::cout << "Enter the number you want to find the factorial for: " << std::endl;
    std::cin >> x;
    fc = fact(x);
    std::cout << "Factorial of " << x<< " = "<< fc << std::endl;
    return 0;
}
