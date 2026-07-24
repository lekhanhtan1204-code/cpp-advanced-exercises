#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void nhiPhan(int n) {
    if (n == 0) return;
    nhiPhan(n / 2);
    cout << n % 2;
}

int main() {
    int n;
    cin >> n;

    if (n == 0) cout << 0;
    else nhiPhan(n);

    return 0;
}
