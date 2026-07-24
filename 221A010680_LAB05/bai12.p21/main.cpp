#include <iostream>
using namespace std;

string docSo(int n) {
    string donvi[] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    string chuc[] = {"", "", "hai muoi", "ba muoi", "bon muoi", "nam muoi", "sau muoi", "bay muoi", "tam muoi", "chin muoi"};

    int tram = n / 100;
    int du = n % 100;
    int dv = du % 10;
    int ch = du / 10;

    string kq = "";

    if (tram > 0) {
        kq += donvi[tram] + " tram";
        if (ch == 0 && dv != 0) kq += " le ";
        else if (du != 0) kq += " ";
    }

    if (ch > 1) {
        kq += chuc[ch];
        if (dv > 0) kq += " " + donvi[dv];
    } else if (ch == 1) {
        kq += "muoi";
        if (dv > 0) kq += " " + donvi[dv];
    } else if (dv > 0) {
        kq += donvi[dv];
    }

    return kq;
}

int main() {
    int n;
    cin >> n;
    cout << docSo(n);
}
