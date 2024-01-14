#include "FourWheelerVehicle.cpp";
#include <iomanip> 
class ElectricCar : public FourWheelerVehicle {
private:
	int maxRangeKm;
	int kmTraveledSincleLastCharge;
public:
	ElectricCar(int maxRange, int kmTraveled, string _name, int _serialNum) : FourWheelerVehicle(_name, _serialNum) {
		maxRangeKm = maxRange;
		kmTraveledSincleLastCharge = kmTraveled;
	}
	int GetMaxRange() {
		return maxRangeKm;
	}
	int GetKmTraveled() {
		return kmTraveledSincleLastCharge;
	}
	int SetMaxRange(int range) {
		maxRangeKm = range;
	}
	int SetKmTraveled(int km) {
		kmTraveledSincleLastCharge = km;
	}
	void CheckBattery() {
		int battery = (kmTraveledSincleLastCharge / float (maxRangeKm))*100;
		if (battery < 15)
		{
			DisplayAlert(15);
		}
		else if (battery < 8) {
			DisplayAlert(8);
		}
		cout << "\nBattery is on " << battery << '%';
	}
	void DisplayAlert(int battery) override {
		switch (battery)
		{
		case 15:
			cout << "\nBATTERY LOW!";
			break;
		case 8:
			for (int i = 0; i < 3; i++)
			{
				cout << "\nBATTERY LOW!";
			}
		default:
			break;
		}
	}
	void PrintInfo() {
		FourWheelerVehicle::PrintInfo();
		cout << "\nMax range: " << maxRangeKm << "km\nKilometers traveled since last charge: " << kmTraveledSincleLastCharge;
	}
	~ElectricCar() {};
};