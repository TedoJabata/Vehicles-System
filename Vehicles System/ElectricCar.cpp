#include "FourWheelerVehicle.cpp";
#include <iomanip> 
class ElectricCar : public FourWheelerVehicle {
private:
	int maxRangeKm;
	int kmTraveledSincleLastCharge;
public:
	ElectricCar(int maxRange, int kmTraveled, string _name, string _serialNum) : FourWheelerVehicle(_name, _serialNum) {
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
		int battery = 100 - (kmTraveledSincleLastCharge / float (maxRangeKm))*100;
		if (battery < 8)
		{
			DisplayAlert(8);
		}
		else if (battery < 15) {
			DisplayAlert(15);
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
			break;
		default:
			break;
		}
	}
	void PrintInfo() {
		FourWheelerVehicle::PrintInfo();
		cout << "\nMax range: " << maxRangeKm << "km\nKilometers traveled since last charge: " << kmTraveledSincleLastCharge << "km";
	}
	~ElectricCar() {};
};