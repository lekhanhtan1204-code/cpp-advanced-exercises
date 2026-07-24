#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	double x;
	
	cout << "Nhap x: ";
	cin >> x;
	cout <<"Nhap n (n > = 1): ";
	cin >> n;
	
	if (n < 1) return 0;
	double S = 1.0;
	
	for (int i = 1; i <= n; i++){
		double luyThua = pow(x, i);
		
		double giaiThua = 1.0;
		for (int j = 1; j <= i; j++){
			giaiThua = giaiThua * j;
		}
		
		S += (luyThua / giaiThua);
	}
	
	cout << "Gia tri cua e^x la: " << S << endl;
	return 0;
}
