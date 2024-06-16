#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a, b, c;
	cout << "To find the roots of the equation ax^2 + bx + c = 0 " << endl;
	cout << "enter a: "; cin >> a;
	cout << "enter b: "; cin >> b;
	cout << "enter c: "; cin >> c;

	double dis = b * b - (4 * a * c);

	if (dis > 0) {
		double root1 = (-b + sqrt(dis)) / (2 * a);
		double root2 = (-b - sqrt(dis)) / (2 * a);

		cout << "first root: " << root1 << endl;
		cout << "second root: " << root2 << endl;

	}
	else if (dis == 0) {  
		double root = -b / (2 * a);
		cout << "Single root: " << root << endl;
	}
	else{
		cout << "You don't have real roots!" << endl;
	}


	return 0;
}