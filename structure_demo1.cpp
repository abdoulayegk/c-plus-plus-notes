#include <iostream>
using namespace std;

/*! struct Smartphone
 *  brief To make a phone structure so that we can use it for multiple phones
 *
 *  we will be using the following varibale
 *  name:string -> name of the phone
 *  space: int -> the space of storage of the phone
 *  price:float -> the price of that particular phon
 */
struct Smartphone
{
    string name;
    int space;
    string color;
    float price;
};

int main(int argc, char *argv[])
{
    Smartphone smartphone;
    smartphone.name = "iphone";
    smartphone.space = 32;
    smartphone.color = "balck";
    smartphone.price = 1099.99;
    // displaying the information
    cout << "name: " << smartphone.name << endl;
    cout << "space: " << smartphone.space << endl;
    cout << "color: " << smartphone.color << endl;
    cout << "price: " << smartphone.price << endl;

    return 0;
}
