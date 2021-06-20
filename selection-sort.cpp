/**
 *Selection sort algorithm implementation
 * arr: the array to be sort
 * */

#include <iostream>
using namespace std;
#define SIZE 50

int main(int argc, char *argv[])
{

    int arr[SIZE], n;
    std::cout << "Enter the number of elements you want for your array: " << std::endl;
    std::cin >> n;
    std::cout << "Enter the elements in your array: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::cout << "Your inputed array is:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << std::endl;
    }

    // sorting the array
    for (int j = 0; j < n-1; j++) {
        int smallest = j;
        for (int i = j+1; i < n; i++) {
            if (arr[i] < arr[smallest]) {
                smallest = i;
            }
        }

        int temp = arr[j];
        arr[j] = arr[smallest];
        arr[smallest] = temp;
    }
    std::cout << "The result after sorting the array: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}
