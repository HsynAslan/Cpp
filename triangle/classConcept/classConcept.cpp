


#include "triangle.h"



int main()
{
	using namespace std;

	float a, b, c;
	cout << "Please enter the sides(a-b-c)!\n" << endl;
	cin >> a >> b >> c;
	Triangle triangle1(a,b,c); // constructor -- default constructor belirlemediğimizden girdi vermek zorundayız
	// Triangle triangle4 = { a, b, c }; // constructor
	Triangle triangle2 = triangle1; // copy constructor -- triangle2(triangle1)  ile aynı 
	// Triangle triangle3(triangle1);  // copy constructor

	cout << "\nTriangle-1" << endl;
	cout << "Side-A: " << triangle1.getSideA() << endl;
	cout << "Side-B: " << triangle1.getSideB() << endl;
	cout << "Side-C: " << triangle1.getSideC() << endl;
	cout << "Area: " << triangle1.calculateArea() << endl;

	cout << "\nsTriangle-2" << endl;
	triangle2.setValue(6, 8, 10);
	cout << "Side-A: " << triangle2.getSideA() << endl;
	cout << "Side-B: " << triangle2.getSideB() << endl;
	cout << "Side-C: " << triangle2.getSideC() << endl;
	cout << "Area: " << triangle2.calculateArea() << endl;

	triangle1.triangleType();
	triangle2.triangleType();

}


