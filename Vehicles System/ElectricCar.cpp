#include "FourWheelerVehicle.cpp";
class ElectricCar : public FourWheelerVehicle {
private:
	int maxRangeKm;
	int kmTraveledSincleLastCharge;
public:
	ElectricCar(int maxRange, int kmTraveled, string _name, int _serialNum) : FourWheelerVehicle(_name, _serialNum) {
		maxRange = maxRange;
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
	void PrintInfo() {
		cout << "Max Range: " << maxRangeKm << "km\nKilometers Traveled since last charge: " << kmTraveledSincleLastCharge;
		
	}
	~ElectricCar() {};
};