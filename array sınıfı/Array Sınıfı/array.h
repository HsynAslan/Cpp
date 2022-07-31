#include <iostream>
using namespace std;

class Array {
	int* data, size, capacity;
	int findIndex(int number, int b = 0);
public:
	Array(int user_capacity = 5);
	~Array();
	Array(const Array& copyArray);
	int getSize() const {
		return size;
	}
	int getCapacity() const {
		return capacity;
	}
	void addItem(int number);
	void printItems();
	void removeIndexItem(int index);
	void removeItem(int number);
	void findElement(int number, int b = 0);
};

Array::Array(int user_capacity) {
	capacity = user_capacity;
	size = 0;
	data = new int[capacity];  // bu durumlarda dectructorlarda silmek lazm
	cout << "Array is created with capacity " << capacity << endl;
}

Array::~Array() {
	delete[] data;
	cout << "Array destroyed" << endl;
}

Array::Array(const Array& copyArray) {
	capacity = copyArray.capacity;
	size = copyArray.size;
	data = new int[capacity];
	for (int i = 0; i < copyArray.size; i++) {
		data[i] = copyArray.data[i];
	}
	cout << "Array copied to target." << endl;
}

void Array::addItem(int number) {
	if (size == capacity) {
		int* temp_data = new int[capacity * 2];
		for (int i = 0; i < size; i++) {
			temp_data[i] = data[i];
		}
		delete[] data;
		data = temp_data;
		capacity *= 2;
	}
	data[size++] = number;
	size++;

}

void Array::printItems() {
	if (size != 0) {
		for (int i = 0; i < size; i++) {
			cout << data[i] << "-";
		}
	}
	cout << "\n" << "capacity: " << capacity << "\n size: " << size << endl;;
}

