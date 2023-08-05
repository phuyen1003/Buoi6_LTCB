#include <iostream>
#include <string>
using namespace std;

bool kiemTraChuoiDoiXung(const string &s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string s;
    cout << "Nhap chuoi bat ky: ";
    getline(cin, s);

    if (kiemTraChuoiDoiXung(s)) {
        cout << "Chuoi la chuoi doi xung" << endl;
    } else {
        cout << "Chuoi khong la chuoi doi xung" << endl;
    }

    return 0;
}
