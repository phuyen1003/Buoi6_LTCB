#include <iostream>
#include <cstring>
#include <cctype> 
using namespace std;

int main() {
    char string[100];

    cout << "Nhap chuoi bat ky: ";
    cin.getline(string, 100);

    for (int i = 0; i < strlen(string); i++) {
        string[i] = toupper(string[i]); // Chuyển thành chữ hoa
    }

    cout << "Chuoi chu hoa la: " << string << endl;

    return 0;
}
