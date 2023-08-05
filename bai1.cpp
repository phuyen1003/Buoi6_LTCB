#include <iostream>
using namespace std;
void input_array(int array[], int length){
   
    for (short i = 0; i < length; i++) cin >> array[i];
}

void show_array(int array[], int length){
 
    for(short i = 0; i < length; i++)  cout << array[i]<<' ';  
    cout << endl;
}

int main(){
  
    int n;
    cout << ">>Nhap so phan tu: ";
    cin >> n;
 
    int array[n-1];
    cout << ">>Nhap phan tu:\n";
    input_array(array, n);
    
    /*xuất mảng 1 chiều trong C++*/ 
    cout << ">>Mang vua nhap:\n"; 
    show_array(array, n);
}
