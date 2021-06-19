/* Program to add two numbers using funcion in c++ */
#include <iostream>
using namespace std;
int add(int a, int b){
    return (a + b);
}

int main(int argc, char *argv[])
{
    int sum, a , b;
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> a;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> b;
    sum = add(a, b);
    std::cout << "The addition of"<<a<<"and"<< b <<"is: " << sum << std::endl;
    return 0;
}
