#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	ifstream file("D:\\hoten.txt");
	
	if(!file) {
		cout <<"Khong the mo file!" << endl;
		return 1;
	}
	
	cout << " DANH SACH HO VA TEN TU FILE " << endl;
	string hoten;
	
		while (getline(file, hoten)) {
			cout << hoten << endl;
		}
		file.close();
	return 0;
}
