#include <iostream>
using namespace std;

/* int abs(int a); */
/* double abs(double b); */
/* long abs(long); */
static int a = 1;
static int b = 2;

int main(int argc, char *argv[])
{
    if (a > 5) {
        b = 10;
    } else {
        a = 5;
    }
    std::cout << a << std::endl;
    std::cin.get();
    return 0;
}
