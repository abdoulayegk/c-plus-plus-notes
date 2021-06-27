#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main(int argc, char *argv[])
{
    std::vector<char> v(10); // create a vector of length 10
    unsigned int i;
    // display the size of the original vector v
    std::cout << "Size =  " << v.size() << std::endl;
    // assign the elements of the vector some values
    for (i = 0; i < 10; i++)
    {
        v[i] = i + 'a';
    }
    // display the contents of vector
    for (i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " " << std::endl;
    }
    std::cout << "Expanding vector \n " << std::endl;
    for (i = 0; i < 10; i++)
    {
        v.push_back(i + 10 + 'a');
    }
    std::cout << "Size now =  " << v.size() << std::endl;
    std::cout << "current contents:\n " << std::endl;
    for (i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << std::endl;
    }
    std::cout << "\n\n " << std::endl;
    // change contents of vector
    for (i = 0; i < v.size(); i++)
    {
        v[i] = toupper(v[i]);
    }
    std::cout << "Modiffied content:\n " << std::endl;
    for (i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " " << std::endl;
    }

    return 0;
}
