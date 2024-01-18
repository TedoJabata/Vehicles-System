#include <iostream>
#include "ElectricCar.cpp"
using namespace std;

int main()
{
    ElectricCar* cars[6];
	string name;
	string serialNum;
	int maxRange;
	int kmTraveled;
	for (int i = 0; i < 6; i++)
	{
		cout << "\nEnter car name: ";
		cin >> name;
		cout << "Enter car serial number: ";
		cin >> serialNum;
		do
		{
			cout << "Enter car max range: ";
			cin >> maxRange;
		} while (maxRange < 0);
		do
		{
			cout << "Enter traveled kilometers: ";
			cin >> kmTraveled;
		} while (kmTraveled > maxRange || kmTraveled < 0);

		cars[i] = new ElectricCar(maxRange, kmTraveled, name, serialNum);
	}
	for (int i = 0; i < 6; i++)
	{
		cout << "\n\nCar " << i + 1;
		cars[i]->PrintInfo();
	}
	for (int i = 0; i < 6; i++)
	{
		cout << "\n\nCar " << i + 1;
		cars[i]->CheckBattery();
	}
	cout << '\n';
}