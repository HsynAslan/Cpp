#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
	string personName, personSurname, personDepartment, personPosition, personID;
	int personSalary, personYear;
public:
	Person(string Name, string Surname, string Department, string Position, int Salary, int Year) {
		personName = Name; personSurname = Surname; personDepartment = Department; personPosition = Position;
		personSalary = Salary; personYear = Year;
	};
	void setName(string name) { personName = name; };
	void setsurname(string surname) { personSurname = surname; };
	void setDepartment(string department) { personDepartment = department; };
	void setPosition(string position) { personPosition = position; };
	void setSalary(int salary) { personSalary = salary; };
	void setYear(int year) { personYear = year; };
	void setID(string ID) { personID = ID; };
	string getName() { return personName; };
	string getSurname() { return personSurname; };
	string getDepartment() { return personDepartment; };
	string getPosition() { return personPosition; };
	string getID() { return personID; };
	int getSalary() { return personSalary; };
	int getYear() { return personYear; };
	void print() {
		cout << "-----------------------";
		cout << "Name: " << personName << " " << personSurname << endl;
		cout << "Department: " << personDepartment << endl;
		cout << "Position: " << personPosition<< endl;
		cout << "Years Worked: " << personYear<< endl;
		cout << "ID Nummber: " << personID << endl;
	}
};

class Employee :public Person {
private:
	int employeeBonus;
public:
	Employee(string Name, string Surname, string Department, string Position, int Salary, int Year) :Person(Name, Surname, Department, Position, Salary, Year) {
		employeeBonus = 85 * Year;			// burda employeebonus ve ID haric diger her seyi miras aldýk o yuzden bir daha yazmadik
		int randomID = rand() % 8999 + 1000; // 1000 - 8999 arasi random sayi olusturmus olduk	
		Employee::setID("EMP" + to_string(randomID));
	}
	void print() {
		Person::print();
		cout << "Bonus: " << employeeBonus << endl;
		cout << "--------------------";
	}
};

class Manager :public Employee {
	int managerBonus;
public:
	Manager(string Name, string Surname, string Department, string Position, int Salary, int Year) :Employee(Name, Surname, Department, Position, Salary, Year) {
		managerBonus = 150 * Year;
		int randomID = rand() % 8999 + 1000;
		Manager::setID("MNG" + to_string(randomID));
	}
	void print() {
		Person::print();
		cout << "Bonus: " << managerBonus << endl;
		cout << "---------------------";
	}
	void extractEmployees(Employee employeesArray[]) {

		cout << "Manger Name: " << Manager::getName()<< Manager::getSurname() << endl;
		cout << "Mananger ID: " << Manager::getID() << endl;
		cout << "\n" << getDepartment() << "Department Employee List" << endl;


		for (size_t i = 0; i < sizeof(employeesArray); i++)
		{
			if (getDepartment() == employeesArray[i].getDepartment()) {
				employeesArray[i].print();
			}
		}
	}
};