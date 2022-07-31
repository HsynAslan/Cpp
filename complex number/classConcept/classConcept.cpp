#include "complexNumber.h"

int main()
{
    using namespace std;

    complexNumber number1(3, 6);
    complexNumber number2(3,10);

    number1.displayComplex();
    number2.displayComplex();
    cout << "------------------------------" << endl;
    complexNumber number3(number2);
    number3.displayComplex();
    number3.setValue(-5, -7);
    number3.displayComplex();
    cout << "------------------------------" << endl;

    complexNumber resultMain;
    resultMain = number1.addComplex(number2);
    resultMain.displayComplex();
    cout << "------------------------------" << endl;
    complexNumber returnSubstract;
    returnSubstract = number1.subtractComplex(number2);
    returnSubstract.displayComplex();

    cout << "------------------------------" << endl;
    complexNumber resultMultiplyConstant;
    resultMultiplyConstant = number1.multiplyConstant(5);
    resultMultiplyConstant.displayComplex();
    cout << "------------------------------" << endl;
    complexNumber resultMultiplyComplex;
    resultMultiplyComplex = number1.multiplyComplex(number2);
    resultMultiplyComplex.displayComplex();

}


