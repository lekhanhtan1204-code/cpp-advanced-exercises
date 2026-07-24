#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
long long Fibonaci(int n) {
	if(n <= 0) return 0;
	if(n == 1 || n == 2) return 1;
	
	long long f1 = 1;
	long long f2 = 1;
	long long fn;
	
	for(int i = 3; i <= n; i++) {
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
	}
	return fn;
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if(n < 0 ) {
		cout <<"Vui long nhap n >= 0 " << endl;
	}else {
		cout << "So Fibonaci thu " << n << " la: " << Fibonaci(n) << endl;
	}
	return 0;
}
