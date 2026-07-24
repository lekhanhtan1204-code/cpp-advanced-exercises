#include <iostream>
using namespace std;

int main() {
	float diem;
	cout << "Nhap diem: ";
	cin >> diem;
	
	if(diem < 0){
		cout << "Diem khong hop le.";
	}else if(diem >= 0 ){
		cout << "Loai Yeu.";
	}else if(diem > 6 ){
		cout << "Loai TB.";
	}else if(diem > 7){
		cout << "Loai TB Kha.";
	}else if(diem > 8){
		cout << "Loai Kha.";
	}else if(diem > 9){
		cout << "Loai Gioi.";
	}else {
		cout <<"Loai Xuat sac.";
	}
	
	return 0;
}
