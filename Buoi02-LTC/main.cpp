#include <iostream>
#include<cmath>
using namespace std;

int main(){
	float a, b, c, delta;
	cout << " Nhap a: ";
	cin >> a;
	cout << " Nhap b: ";
	cin >> b;
	cout << " Nhap c: ";
	cin >> c;
	
	if(a==0){
		cout << " Khong phai phuong trinh bac 2.";
		}else {
			delta = b * b - 4 * a * c;
			
			if(delta > 0) {
				float x1 = (-b + sqrt(delta)) / (2 * a);
				float x2 = (-b - sqrt(delta)) / (2 * a);
				cout << "Phuong trinh co 2 nghiem phan biet: x1 = " << x1 << ", x2 = " << x2;
			}else if (delta == 0) {
				cout << "Phuong trinh co nghiem kep: x= " << -b / (2*a);
			}else{
				cout << " Phuong trinh vo nghiem." << endl;
			}
		}
		return 0;
	}

