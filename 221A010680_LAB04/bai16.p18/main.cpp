#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	cout << "Nhap 1 so nguyen: ";
	cin >> n;
	 
	if(n < 2){
	 	cout << "Khong phai so nguyen to.";
	 	return n;
	} else {
		bool soNT = true;
		for ( int i = 2; i <= sqrt(n); i++) {
			if(n % i == 0) {
				soNT = false;
				break;
			}
		}
		
		if(soNT){
			cout << n << "la so nguyen to.";
		}else
			cout << n << "khong la so nguyen to.";
	 
	 }
	return 0;
}
