#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	cout << "Nhap n (n > 0): ";
	cin >> n;
	
	if(n <= 0) {
		cout << "Khong phai so nguyen duong! Nhap lai." << endl;
		return 0;
	}
	
	if(n == 1 || n == 2) {
		cout << "So hang thu " << n << " cua day Fibonaci la: 1" << endl;
	}else {
		long long a = 1;
		long long b = 1;
		long long next;
		
		for (int i = 3; i <= n; i++) {
			next = a + b;
			a = b;
			b = next;
		}
		
		cout << "So hang thu " << n << " cua day Fibonaci la:" << b << endl;
	}
	return 0;
}
