
#include <iostream>
using namespace std;
#include "banka-hesabi.h"
#include <string>
int main()
{
    bankAccount acc1("Huseyin", "Aslan", 3500, "05071234567");
    cout << acc1;
    acc1 + 1500;
    cout << acc1;

}

