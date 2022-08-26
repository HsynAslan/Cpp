#include <iostream>
#include "shape.h"
int main()
{
	using namespace std;

	Shape* sArr[] = {new Rectangle(4.0,5.0),new Rectangle(3.5,2.5),new Rectangle(8.5,4.3), new Circle(3.2), new Circle(3.8) };
	int numberShape = sizeof(sArr) / sizeof(sArr[0]);
	for (size_t i = 0; i < numberShape; i++)
	{
		sArr[i]->calculateArea();
		sArr[i]->calculatePerimater();
		sArr[i]->display();
	}
}

