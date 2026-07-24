#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Diem {
	float Toan;
	float Ly;
	float Hoa;
};

struct HocSinh {
	string hoTen;
	string ngaySinh;
	string truong;
	string sbd;
	Diem diemThi;	
};

int main() {
	int n = 10;
	HocSinh ds[10];
	for(int i = 0; i < n; i++) {
		cout << "Nhap thi sinh thu " << i + 1 << ":" << endl;
		cout << "- Ho Ten:";
		getline(cin, ds[i].hoTen);
		cout << "- Ngay sinh:";
		getline(cin, ds[i].ngaySinh);
		cout << "- Truong hoc:";
		getline(cin, ds[i].truong);
		cout << "- So bao danh:";
		getline(cin, ds[i].sbd);
		
		cout << " - Diem Toan: "; cin >> ds[i].diemThi.Toan;
		cout << " - Diem Ly: "; cin >> ds[i].diemThi.Ly;
		cout << " - Diem Hoa: "; cin >> ds[i].diemThi.Hoa;
		cin.ignore();
	}
	cout << "Danh sach co tong diem >= 15" << endl;
	bool coThiSinh = false;
	for (int i = 0; i < n; i++) {
		float tongDiem = ds[i].diemThi.Toan + ds[i].diemThi.Ly + ds[i].diemThi.Hoa;
		
		if (tongDiem >= 15) {
			cout <<"SBD: " << ds[i].sbd << "|" << endl;
			coThiSinh = true;
		}
	}
	
	if (coThiSinh) {
		cout << "Khong co hoc sinh nao co tong diem >= 15." << endl;
	}
	return 0;
}
