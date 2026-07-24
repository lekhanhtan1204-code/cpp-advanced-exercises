#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Person {
	string ten;
	string diaChi;
};

bool soSanhTen(Person a, Person b) {
	return a.ten < b.ten;
}

int main() {
	int n;
	cout << "Nhap so luong nguoi: ";
	cin >> n;
	cin.ignore();
	
	Person ds[100];
	
	for (int i = 0; i < n; i++) {
		cout << "Nhap nguoi thu " << i + 1 << ":" << endl;
		cout << " - Ten: ";
		getline(cin, ds[i].ten);
		cout << "- Dia chi: ";
		getline(cin, ds[i].diaChi);
	}
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ds[i].ten > ds[j].ten) {
				Person temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << i + 1<< ", " << ds[i].ten << " |" << ds[i].diaChi << endl;
	}
	
	return 0;
}


