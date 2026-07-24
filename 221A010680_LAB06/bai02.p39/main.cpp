#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	ifstream file("D:\\array.txt");
	
	if(!file) {
		cout <<"Khong the mo file!" << endl;
		return 1;
	}
	
	cout << "---DANH SACH DOC CAC SO NGUYEN TU FILE--- " << endl;
	string array;
	
		while (getline(file, array)) {
			cout << array << endl;
		}
		file.close();
	return 0;
} 
