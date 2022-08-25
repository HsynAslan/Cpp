#include <iostream>
#include "vehicle.h"

int main()
{
    using namespace std;
    
    vehicle* vPtr[] = { new Car(125.800,"BMW"),new MotorCycle(35.000,"Honda") };
    int which_vehicle;
    char inputVehicle;
    do
    {
        fflush(stdin); // sonsuz döngüye girmesin buffer temizlemek için
        cout << "Enter vehicle and input: " ;
        cin >> which_vehicle >> inputVehicle;
        switch (inputVehicle){
        case 'U':
            vPtr[which_vehicle]->increaseSpeed();
            vPtr[which_vehicle]->displayInformation();
            break;
        case 'D':
            vPtr[which_vehicle]->decreaseSpeed();
            vPtr[which_vehicle]->displayInformation();
            break;
        case 'C':
            vPtr[which_vehicle]->stopEngine();
            vPtr[which_vehicle]->displayInformation();
            break;
        case 'S':
            vPtr[which_vehicle]->startEngine();
            vPtr[which_vehicle]->displayInformation();
            break;
        default:
            cout << "Enter Valid Input" << endl;
            break;
        }




    } while (which_vehicle != -1);




}


