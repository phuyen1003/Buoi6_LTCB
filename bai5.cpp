#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Nhap chuoi bat ky: ";
    getline(cin, s);

    char ch;
    cout << "Nhap ky tu can dem: ";
    cin >> ch;

    int count = 0;

    // dem so lan xuat hien cua ky tu 'ch' trong chuoi 's'
    for (char c : s) {
        if (c == ch)
            count++;
    }

    if (count > 0) {
        cout << "Ky tu " << ch << " xuat hien " << count << " lan trong chuoi '" << s << "'" << endl;
    } else {
        cout << "Ky tu " << ch << " khong co mat trong chuoi '" << s << "'" << endl;
    }

    return 0;
}
