#include <iostream>
using namespace std;

void bolum_kontrol(int sayi) {
    if (sayi % 5 == 0) {
        cout << "tam bolunur" << endl;
    } else {
        cout << "Kalan: " << sayi % 5 << endl;
    }
}

int main() {
    bolum_kontrol(12);  
    bolum_kontrol(20);  
    return 0;
}

