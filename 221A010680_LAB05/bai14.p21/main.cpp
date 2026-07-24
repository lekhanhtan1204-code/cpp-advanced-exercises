#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long luyThua(int a, int n) {
	if(n == 0) return 1;
	return  a * luyThua(a, n - 1); 
} 
int main() {
	int a, n;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap luy thua: "; cin >> n;
	
	cout << a << " luy thua " << n << " la " << luyThua(a, n); 
	return 0;
}
