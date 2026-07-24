#include <iostream>
using namespace std;

int main() {
	int n; 
	int tong = 0;
	cout << "Nhap n: ";
	cin >> n;
	
	if(n <= 0){
		cout << "Nhap lai.";
		return 0;
	}
	
	for (int i = 1; i <= (2 * n + 1) * 2; i++){
		if( i % 2 != 0){
			double binhphuong = i * i;
		}
		tong += i;
	}
	
	cout << "Tong la: " << tong;
	return 0;
}
