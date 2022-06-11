#include <iostream>
#include " ArrayTemplate.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    ArrayTemplate<> int_array(2);

    int_array.setElement(1, 3.7);
    int_array.setElement(2, 7.7);

    cout << int_array(1) << "  " << int_array(2);

    return 0;
}
