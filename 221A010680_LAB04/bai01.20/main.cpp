#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

long long tinhGiaiThua(int n) {
	long long ketQua = 1;
	for (int i = 1; i <= n; i++ ){
		ketQua *= i;
	}
	return ketQua;
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	if(n < 0) {
		cout << "Khong tinh duoc.";
	}else {
		cout << n << "! = " << tinhGiaiThua(n) << endl;
	}
	
	return 0;
}
