/* Implementaion of function overloading for addition of two numbers */
#include <iostream>
using namespace std;
int add(int a, int b){
    return (a+b);
}

float add(float a, float b){
    return (a+b);
}

int main(int argc, char *argv[])
{
    // adding two integer
    int x, y;
    float m, n;
    std::cout << "Enter the first integer: " << std::endl;
    std::cin >> x;
    std::cout << "Enter the second integer: " << std::endl;
    std::cin >> y;
    std::cout << " Addition of " <<x <<" and "<<y <<"= "<<add(x, y) << std::endl;

    //Addition of two flating point numbers
    std::cout << "Enter the first the float: " << std::endl;
    std::cin >> m;
    std::cout << "Enter the second float: " << std::endl;
    std::cin >> n;

    std::cout << " Addition of two float "<<x <<" and "<<y <<" = "<<add(x, y) << std::endl;
    return 0;
}
