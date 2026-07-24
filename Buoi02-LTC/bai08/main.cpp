#include <iostream>
using namespace std;

int main() {
	int n, tien;
	cout << "Nhap so km da di duoc: ";
	cin >> n;
	
	if( n < 0){
		cout << "Nhap lai! Khong hop le";
	}else if(n <= 1){
		tien = n * 5000;
	}else if(n <= 5){
		tien = n * 4500;
	}else if(n < 120){
		tien = n * 3500;
	}else {
		tien = (n * 3500) * 0.9;
	}			
			cout << "So tien phai tra la: " << tien ;
	return 0;
}
