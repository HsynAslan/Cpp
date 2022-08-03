// kisiSinifi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include "sinif.h"
#include <time.h>
int main()
{
	using namespace std;

	srand(time(NULL));
	Student studentArray[] = { {"Huseyin","Aslan",394788},{"Ali","Aslan",394789} };
	Teacher teacher1("Huseyin", "Aslan", "Web-developer");


 	for (size_t i = 0; i < 2; i++)
	{
		studentArray[i].setStudentGrade(rand() % 100 + 1);
		studentArray[i].print();
	}


	teacher1.passFailStatus(studentArray);
	teacher1.printStudentInformation(studentArray);







}

