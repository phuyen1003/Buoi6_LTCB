#include <iostream>
#include <string>
using namespace std;

int main() {
    string chuoi;
    cout << "Nhap chuoi: ";
    getline(cin, chuoi);

    string tu_can_xoa;
    cout << "Nhap tu can xoa: ";
    cin >> tu_can_xoa;

    size_t pos = chuoi.find(tu_can_xoa);
    while (pos != string::npos) {
        chuoi.erase(pos, tu_can_xoa.length());
        pos = chuoi.find(tu_can_xoa, pos);
    }

    cout << "Chuoi sau khi xoa tu: " << chuoi << endl;

    return 0;
}
