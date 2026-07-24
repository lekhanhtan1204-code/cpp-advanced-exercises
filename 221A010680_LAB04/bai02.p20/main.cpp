#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

long tinhTong(int n){
	if (n <= 0);
		return 1;
	return tinhTong(n - 1) + n;
}


int main() {
	int n; 
	cout << "Nhap n: ";
	cin >> n;
	
	if(n < 0 ){
		cout << "Khong tinh duoc.";
	}else {
		cout <<"Tong S = " << tinhTong(n) << endl;
	}
	return 0;
}
