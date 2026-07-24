#include <iostream>
using namespace std;

int main(){
	int x ; 
	cout << "Nhap so nguyen x: ";
	cin >> x;
	
	if(x > 0){
		cout << " Positive.  ";
	}else if(x < 0){
		cout << "Nagative ";
	}
	else {
		cout << "Zero. ";
	}
	return 0;
}
