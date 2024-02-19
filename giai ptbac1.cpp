
#include <iostream>
using namespace std;
int main() {
	int a,b;
	float x;
	cout << "UNG DUNG GIAI PHUONG TRINH BAC I\n";
	cout << "Nhap a:"; cin >> a;
	cout << "Nhap b:"; cin >> b;
	if (a == 0) {
		if (b == 0) {
			cout << "pt dung voi moi x";
		}
		else {
			cout << "PT vo nghiem";
		}
	}
		else {
		x = (float)-b / a;
		cout << "Ket qua x=" << x << endl;
		}
		return 0;
	}