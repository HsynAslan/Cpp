
#include "array.h"


int main()
{
    using namespace std;


    Array mainArray(10);
    Array mainArray2(mainArray);

    cout << "Capacity:" << mainArray.getCapacity() << endl;
    cout << "Size:" << mainArray.getSize() << endl;

    cout << "Capacity:" << mainArray2.getCapacity() << endl;
    cout << "Size:" << mainArray2.getSize() << endl;

    mainArray.addItem(3);
    mainArray.addItem(4);
    mainArray.addItem(5);
    mainArray.addItem(6);
    mainArray.addItem(7);

    mainArray.printItems();


}


