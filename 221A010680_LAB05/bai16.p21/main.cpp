#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}

int main() {
    int a, b;
    cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b; 
    cout << UCLN(a, b);
}
