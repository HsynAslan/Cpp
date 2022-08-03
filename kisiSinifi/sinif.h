#include <iostream>
using namespace std;

class Person {
protected:
	string personName, personSurname;
public:
	Person(string name = "", string surname = "") {
		personName = name;
		personSurname = surname;
		cout << "Person Constructor Worked" << endl;
	}
	string getPersonName()const { return personName; };
	string getPersonSurname()const { return personSurname; };
	void setPersonName(string name) { personName = name; };
	void setPersonSurname(string surname) { personSurname = surname; };
	void print() {
		cout << "Name: " << personName << endl;
		cout << "Surname: " << personSurname << endl;
	}
};

class Student : public Person {
private:
	int studentID, studentGrade;
	bool passOrFail;
public:
	Student(string name, string surname, int ID) :Person(name, surname) {
		studentID = ID;
		cout << "Student Constructor Worked" << endl;
	}
	int getStudentID()const { return studentID; };
	void setStudentID(int ID) { studentID = ID; };
	int getStudentGrade()const { return studentGrade; };
	void setStudentGrade(int grade) { studentGrade = grade; };
	int getPassOrFail()const { return passOrFail; };
	void setPassOrFail(bool passFail) { passOrFail = passFail; };
	void print() {
		Person::print();
		cout << "ID: " << studentID << endl;
		cout << "Grade: " << studentGrade<< endl;
	}
};

class Teacher :public Person {
private:
	string department;
public:
	Teacher(string name, string surname, string dep) :Person(name, surname) {
		department = dep;
		cout << "Teacher Constructor Worked" << endl;
	}
	string getDepartment()const { return department; };
	void setDepartment(string dep) { department = dep; };
	void print() {
		Person::print();
		cout << "Department: " << department << endl;
	}
	void passFailStatus(Student* studentArray);
	void printStudentInformation(Student* studentArray);
};

void Teacher::passFailStatus(Student* studentArray) { 
	float average = 0.0;
	for (int a = 0; a < sizeof(studentArray); a++)
	{
		average += studentArray[a].getStudentGrade(); // <-- hata var average da !
	}
	average =  average / sizeof(studentArray);
	cout << "Class Average: " << average << endl;
	cout << "--------------------" << endl;
	for (size_t i = 0; i < sizeof(studentArray); i++)
	{
		if (studentArray[i].getStudentGrade() >= average)
			studentArray[i].setPassOrFail(true);
		else
			studentArray[i].setPassOrFail(false);
	}
}

void Teacher::printStudentInformation(Student* studentArray) {
	for (size_t i = 0; i < sizeof(studentArray); i++)
	{
		studentArray[i].print(); // student classýndaki print
		if (studentArray[i].getPassOrFail() == true)
			cout << "Status: Pass" << endl;
		else
			cout << "Status: Fail" << endl;

		cout << "********************" << endl;
	}
	
}
