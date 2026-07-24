#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

long long tinhGiaiThua(int n) {
	long long gt = 1;
	for (int i = 1; i <= n; i++ ){
		gt *= i;
	}
	return gt;
}

long long tinhToHop(int n, int k){
	if (k < 0 || k > n) return 0;
	return tinhGiaiThua(n) / (tinhGiaiThua(k) * tinhGiaiThua(n - k));
}

int main() {
	int n, k;
	cout << "Nhap n: ";cin >> n;
	cout << "Nhap k: ";cin >> k;
	
	if(n < k) {
		cout << "Loi n phai lon hon hoac bang k.";
	}else{
		cout << "To hop chap " << k << " cua " << n << " la: " << tinhToHop(n, k) << endl;
	}
	return 0;
}
