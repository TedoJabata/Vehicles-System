#include <string>;
#include <iostream>
using namespace std;
class FourWheelerVehicle {
private:
	string name;
	int serialNum;

public:
	FourWheelerVehicle(string name, int serialNum) {
		this->name = name;
		this->serialNum = serialNum;
	}
	string GetName(){
		return name;
	}
	int GetSerialNum() {
		return serialNum;
	}
	string SetName(string name) {
		this->name = name;
	}
	int SetSerialNum(int num) {
		this->serialNum = num;
	}
	void PrintInfo() {
		cout << "Name: " << name << "\nSerial Number: " << serialNum;

	}

	virtual void DisplayAlert() {};

	~FourWheelerVehicle() {};
};