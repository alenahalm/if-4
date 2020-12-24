#include <iostream>

using namespace std;

int main()
{
	double v1, p1;
	cout << "Enter velocity and price of a taxi" << endl;
	cin >> v1 >> p1;
	double v2;
	cout << "Enter person's velocity" << endl;
	cin >> v2;
	double s, t;
	cout << "Enter needed distance and time" << endl;
	cin >> s >> t;
	if (s / v2 <= t) {
		cout << "Go by foot" << endl;
	}
	else if (s / v1 <= t) {
		cout << "Take a taxi for " << s * p1 << endl;
	}
	else {
		cout << "It's impossible" << endl;
	}
	system("pause");
}