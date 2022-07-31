#include <iostream>
using namespace std;
class Triangle {
public:
	Triangle(float a, float b, float c);
	~Triangle();
	Triangle(const Triangle& oth);
	bool isTriangle(float a, float b, float c);
	float getSideA() const; // inputtan baðýmsýz çalýþýr ve sürekli sideA döndürür
	float getSideB() const; // genelde get fonklarý const tanýmlanýr
	float getSideC() const;
	void setValue(float a, float b, float c);
	bool isEquilateral();
	bool isScalene();
	bool isIsosceles();
	void triangleType();
	float calculateArea();
private:
	float sideA, sideB, sideC;
};

Triangle::Triangle(float a, float b, float c) {
	while (!isTriangle(a, b, c)) {
		cout << "Please enter the sides(a-b-c)!\n\a" << endl;
		cin >> a >> b >> c;
	}
	sideA = a;
	sideB = b;
	sideC = c;
	cout << "Triangle created." << endl;
}

Triangle::~Triangle() {
	cout << "Triangle destroyed." << endl;
}

Triangle::Triangle(const Triangle& oth) {
	sideA = oth.sideA;
	sideB = oth.sideB;
	sideC = oth.sideC;
	cout << "Triangle copied to target." << endl;
}

float Triangle::getSideA() const {
	return sideA;
}
float Triangle::getSideB() const {
	return sideB;
}
float Triangle::getSideC() const {
	return sideC;
}


void Triangle::setValue(float a, float b, float c) {
	while (!isTriangle(a, b, c)) {
		cout << "Please enter the sides(a-b-c)!\n\a" << endl;
		cin >> a >> b >> c;
	}
	sideA = a;
	sideB = b;
	sideC = c;
}






bool Triangle::isTriangle(float a, float b, float c) {
	if (!((abs(b - c) < a && (a < b + c)))) {
		cout << "Invalid A" << endl;
		return false;
	}

	if (!((abs(a - c) < b && (b < a + c)))) {
		cout << "Invalid B" << endl;
		return false;
	}

	if (!((abs(b - a) < c && (c < b + a)))) {
		cout << "Invalid C" << endl;
		return false;
	}
	return true;
}


bool Triangle::isEquilateral() {
	return sideA == sideB && sideC == sideB;
}

bool Triangle::isIsosceles() {
	if (isEquilateral()) {
		return true;
	}
	else {
		return sideA == sideB || sideA == sideC || sideB == sideC;
	}
}

bool Triangle::isScalene() {
	return !isEquilateral();
}

void Triangle::triangleType() {
	if (isEquilateral())
		cout << "Equilateral Triangle" << endl;
	else if (isIsosceles())
		cout << "Isosceles Triangle" << endl;
	else
		cout << "Scalene Triangle" << endl;
}

float Triangle::calculateArea() {
	float area;
	if (isEquilateral()) {
		area = (pow(sideA, 2) * sqrt(3) / 4 );
		return area;	
	}
	
	float s = (sideA + sideB + sideC) / 2;
	area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
	return area;
}