#include <iostream>

using namespace std;

int automaticCounter(){
int counter = 0;
++counter;
return counter;
}

int staticCounter(){
static int counter = 0;
++ counter;
return counter;
}

int main()
{
    for (int n = 0; n < 5 ; ++n){
        cout << automaticCounter()<< "  " << staticCounter()<< '/n';
    }
    return 0;
}
