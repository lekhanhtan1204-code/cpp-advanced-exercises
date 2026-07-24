#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool ktSoNguyen(int n){
	if(n < 2){
	 	cout << "Khong phai so nguyen to.";
	 	return false;
	} else {
		bool soNT = true;
		for ( int i = 2; i <= sqrt(n); i++) {
			if(n % i == 0) {
				soNT = false;
				break;
			}
		}
	}
	return true;
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	if(ktSoNguyen){
		cout << n << " la so nguyen to." << endl;
	}else {
		cout <<n << " khong la so nguyen to." << endl;
	}
	return 0;
}
