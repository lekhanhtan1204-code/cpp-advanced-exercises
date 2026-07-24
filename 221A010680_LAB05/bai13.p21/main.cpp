#include <iostream>
#include <cmath> 
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double giaiThua(int n) {
	 if(n == 0 || n == 1) return 1; 
	 	return  n * giaiThua(n-1); 
	 
}
int main() {
	int n;
	cout << "Nhap n: "; cin >> n;
	
	cout << "Giai thua cua " << n << " la: " << giaiThua(n); 
	return 0;
}
