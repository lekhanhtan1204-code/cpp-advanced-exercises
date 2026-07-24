#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int soNgay;
	char loaiPhong;
	double giaPhong, tongTien, giamGia = 0;
	
	cout << "Nhap loai phong thue: ";
	cin >> loaiPhong;
	cout << "Nhap so ngay thue: ";
	cin >> soNgay;
	
	if(loaiPhong == 'A' || loaiPhong == 'a'){
		giaPhong = 250000;
		if(soNgay > 12) giamGia = 0.1;
	}else if(loaiPhong == 'B' || loaiPhong == 'b'){
		giaPhong = 200000;
		if(soNgay > 12) giamGia = 0.08;
	}else if(loaiPhong == 'C' || loaiPhong == 'c'){
		giaPhong = 150000;
		if(soNgay > 12) giamGia = 0.08;
	}else {
		cout << "Loai phong khong hop le: ";
	}
	
	tongTien = soNgay * giaPhong * (1 - giamGia);
	cout << fixed << setprecision(0);
	cout << "Tong tien thue phong la: " << tongTien << " VND" << endl;
	return 0;
}
