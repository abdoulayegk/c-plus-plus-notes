/* Programme to chech wether a given number is prime or not */
#include <iostream>
using namespace std;
void prime()
{
    int num, flag=0;
    std::cout << "Enter the number you want check if prime or not: " << std::endl;
    std::cin >> num;
    for (int i = 2; i < num/2; i++) {
        if (num % 2 ==0) {
            flag = 1;
            break;
        }

    }
    if (flag ==1) {
        std::cout << num<< " is not a prime number" << std::endl;
    }
    else {
        std::cout << num << " is a prime number" << std::endl;
    }
}

int main(int argc, char *argv[])
{
    prime();
    return 0;
}
