
#include <iostream>
#include "person.h"
int main()
{
    using namespace std;

    Person* pArray[] = { new TurkishPerson("Huseyin"),new TurkishPerson("Baris"),
    new TurkishPerson("Dogukan"),new deutschPerson("Thomas"),new deutschPerson("Carl") };
    int numberOfPerson = sizeof(pArray) / sizeof(pArray[0]);
    for (size_t i = 0; i < numberOfPerson; i++)
    {
        for (size_t j = 0; j  < numberOfPerson; j ++)
        {
            if (i != j) {
                pArray[i]->sayHi(*pArray[j]);
            }
        }
        cout << "\n";
    }



}

