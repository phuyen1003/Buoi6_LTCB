#include <iostream>
#include <string>
using namespace std;

char timKyTuXuatHienNhieuNhat(const string &s) {
    int freq[256] = {0}; // Mảng đếm tần số xuất hiện của từng ký tự

    // Tính tần số xuất hiện của từng ký tự trong chuỗi
    for (char c : s) {
        freq[c]++;
    }

    char mostFrequentChar = '\0';
    int maxFreq = 0; 

    // Tìm ký tự xuất hiện nhiều nhất
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentChar = char(i);
        }
    }

    return mostFrequentChar;
}

int main() {
    string s;
    cout << "Nhap chuoi bat ky: ";
    getline(cin, s);

    char mostFrequentChar = timKyTuXuatHienNhieuNhat(s);

    if (mostFrequentChar != '\0') {
        cout << "Ky tu xuat hien nhieu nhat trong chuoi la: " << mostFrequentChar << endl;
    } else {
        cout << "Khong co ky tu nao xuat hien trong chuoi" << endl;
    }

    return 0;
}
