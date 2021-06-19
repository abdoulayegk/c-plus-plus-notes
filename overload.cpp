#include <iostream>
using namespace std;
int add(int a, int b);
double add(double x, double y);

int add(int a, int b)
{
    std::cout << "Addition of integers" << std::endl;
    return a + b;
}

double add(double x, double y)
{
    std::cout << "Addition of doubles:" << std::endl;
    return x + y;
}

int main(int argc, char *argv[])
{
    int a, b;
    double x, y;
    std::cout << "Enter two integers: " << std::endl;
    std::cin >> a >> b;
    std::cout << add(a, b) << std::endl;
    std::cout << "\n\n" << std::endl;

    std::cout << "Enter two doubles: " << std::endl;
    std::cin >> x >> y;
    std::cout << add(x,y) << std::endl;

    return 0;
}
