#include <iostream>
#include "lib.h"
using namespace std;

int main()
{
    int i = 1;
    while(i <= 6)
    {
        cout << Fibanachy(i) << endl;
        i++;
    }
    return 0;
}