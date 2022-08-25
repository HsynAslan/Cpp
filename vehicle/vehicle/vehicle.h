#include <iostream>
using namespace std;

class vehicle {
private:
	int speed;
	int gearNumber;
	bool isWork;
	double price;
	string brand;
public:
	vehicle(double vehicle_price = 0.0, string vehicle_brand = "") {
		speed = 0;
		gearNumber = 0;
		isWork = false;
		price = vehicle_price;
		brand = vehicle_brand;
		cout << "Vehicle Constructor Worked" << endl;
	}
	bool getIsWork()const { return isWork; };
	int getSpeed()const { return speed; };
	int getGearNumber()const { return gearNumber; };
	double getPrice()const { return price; };
	string getBrand()const { return brand; };

	void setIsWork(bool is_work) { isWork = is_work; };
	void setGearNumber(int gear_number) { gearNumber = gear_number; };
	void setSpeed(int speed_) { speed = speed_; };
	void setPrice(double price_) { price = price_; };
	void setBrand(string brand_) { brand = brand_; };
	void startEngine() {
		isWork = true;
		gearNumber = 1;
	}
	void stopEngine() {
		speed = 0;
		isWork = false;
		gearNumber = 0;
	}
	virtual void displayInformation() {
		cout<<"Brand: " << brand<< endl;
		cout<< "Price: "<< price<< endl;
		cout << "Speed: " << speed << " and gear: " << gearNumber << endl;
		getIsWork() ? cout << "Engine on" << endl : cout << "Engine off" << endl;
	}
	virtual void increaseSpeed() = 0; // pure virtual
	virtual void decreaseSpeed() = 0; // pure virtual
};

class Car :public vehicle {
public:
	Car(double car_price, string car_brand) :vehicle(car_price, car_brand) {
		cout << "Car Constructor Worked" << endl;
	}

	void increaseSpeed() {
		if (getIsWork()) {
			int speed_temp = getSpeed();
			if (speed_temp <= 120) {
				int gear_temp = getGearNumber();
				setSpeed(speed_temp + 30);
				if (gear_temp < 6) {
					setGearNumber(gear_temp + 1);
				}
			}
		}
		else
		{
			cout << "You should start the engine first.\a\n" << endl;
		}
	}

	void decreaseSpeed() {
		if (getIsWork()) {
			int speed_temp = getSpeed();
			if (speed_temp > 30) {
				int gear_temp = getGearNumber();
				setSpeed(speed_temp - 30);
				if (gear_temp >= 2) {
					setGearNumber(gear_temp - 1);
				}
			}
		}
		else
		{
			cout << "You should start the engine first.\a\n" << endl;
		}
	}

	void displayInformation() {
		cout << "------ Car Information --------" << endl;
		vehicle::displayInformation();

	}
};

class MotorCycle :public vehicle {
public:
	MotorCycle(double motor_price, string motor_brand) :vehicle(motor_price, motor_brand) {
		cout << "Motor Constructor Worked" << endl;
	}

	void increaseSpeed() {
		if (getIsWork()) {
			int speed_temp = getSpeed();
			if (speed_temp <= 90) {
				int gear_temp = getGearNumber();
				setSpeed(speed_temp + 20);
				if (gear_temp < 6) {
					setGearNumber(gear_temp + 1);
				}
			}
		}
		else
		{
			cout << "You should start the engine first.\a\n" << endl;
		}
	}

	void decreaseSpeed() {
		if (getIsWork()) {
			int speed_temp = getSpeed();
			if (speed_temp > 20) {
				int gear_temp = getGearNumber();
				setSpeed(speed_temp - 20);
				if (gear_temp >= 2) {
					setGearNumber(gear_temp - 1);
				}
			}
		}
		else
		{
			cout << "You should start the engine first.\a\n" << endl;
		}
	}

	void displayInformation() {
		cout << "----- MotorCycle Information -----" << endl;
		vehicle::displayInformation();
	}
};