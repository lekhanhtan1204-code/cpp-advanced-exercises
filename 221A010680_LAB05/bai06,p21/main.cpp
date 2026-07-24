#include <iostream>
using namespace std;

// Hàm tính x^n
double HamMu(double x, int n) {
    double kq = 1;
    for (int i = 1; i <= n; i++) {
        kq *= x;
    }
    return kq;
}

// Hàm tính S
double TinhS(double x, int n) {
    if (n <= 0) {
    	cout << "(Nhap lai n > 0) " ;
		return 0; 
	}

    double S = HamMu(1.5, 8);

    for (int i = 1; i <= n; i++) {
        double dau = (i % 2 == 0) ? 1 : -1;
        S += dau * (HamMu(x + i, i) / (i * i));
    }

    return S;
}

int main() {
    double x;
    int n;

    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Gia tri S = " << TinhS(x, n) << endl;

    return 0;
}
