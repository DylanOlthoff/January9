//Dylan Olthoff
//This is my work
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	float side;
	float area; 

	cout << "Please enter a value for the side of the hexagon" << endl;
	cin >> side; 

	area = (3 * sqrt(3)) * (pow(side, 2));

	cout << area << endl;

	return 0;
}












//int main() {
//
//	float pounds;
//	float kilo;
//	kilo = 0.454;
//	
//	cout << "Please enter a number in pounds" << endl;
//	cin >> pounds;
//
//	kilo = pounds * kilo;
//
//	cout << kilo;
//
//	return 0;
//}