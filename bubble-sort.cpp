#include <iostream>
using namespace std;
#define SIZE 50
int main(int argc, char *argv[])
{
    int A[SIZE], n;
    std::cout << "Enter the number of elements for your array: " << std::endl;
    std::cin >> n;
    std::cout << "Enter the elements into your array: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    // sorting algorithm
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n-i-1); j++) {
            if (A[j] > A[j+1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j+1] = temp;
            }
        }
        }
    std::cout << "The resultant array is: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << A[i] << std::endl;
    }



    return 0;
}
