#include <string>;
#include <iostream>
using namespace std;
class FourWheelerVehicle {
private:
	string name;
	string serialNum;

public:
	FourWheelerVehicle(string name, string serialNum) {
		this->name = name;
		this->serialNum = serialNum;
	}
	string GetName(){
		return name;
	}
	string GetSerialNum() {
		return serialNum;
	}
	string SetName(string name) {
		this->name = name;
	}
	int SetSerialNum(int num) {
		this->serialNum = num;
	}
	void PrintInfo() {
		cout << "\nName: " << name << "\nSerial number: " << serialNum;
	}

	virtual void DisplayAlert(int battery) {};

	~FourWheelerVehicle() {};
};