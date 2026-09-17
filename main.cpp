#include <iostream>
#include "math.h"

using namespace std;

int add(int a, int b);   // function declaration

int main()
{
    cout << "Hello, CMake!" << endl;
    cout << "Durga" << endl;

    int result = add(10, 20);

    cout << "Addition = " << result << endl;

    return 0;
}
