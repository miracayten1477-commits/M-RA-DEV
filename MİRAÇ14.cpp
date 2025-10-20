#include <iostream>
using namespace std;

int kucugu_dondur(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x = 7;
    int y = 4;
    int kucuk = kucugu_dondur(x, y);

    cout << "Kucuk olan sayı: " << kucuk << endl;
    return 0;
}
