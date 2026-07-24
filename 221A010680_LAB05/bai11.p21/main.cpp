#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double F_Sang_C(double F) {
	return 5 * (F - 32) / 9;  
} 

int main() {
	double F, C;
	cout << "Nhap nhiet do F muon doi: ";
	cin >> F;
	
	 cout << "Nhiet do C = " << F_Sang_C(F) << endl; 
	return 0;
}
