#include <iostream>
#include <string>
using namespace std;

class Drone {
private:
    int yuk;
    int hiz;
    int yukseklik;
    int pil;

public:
    // Yapici fonksiyon
    Drone(int y, int h, int ys, int p) {
        yuk = y;
        hiz = h;
        yukseklik = ys;
        pil = p;
        cout << "Drone olusturuldu." << endl;
    }

    // Ucus guvenligi kontrol metodu
    string ucusGuvenligiKontrol() {
        pil -= (hiz / 10) * 5;

        if (yuk > 500) {
            return "Agir yuk, ucamaz!";
        } else if (pil < 30) {
            return "Pil seviyesi dusuk, ucus guvensiz!";
        } else if (yukseklik < 20) {
            return "Yukseklik guvensiz, ucus guvensiz!";
        } else if (yukseklik > 200) {
            return "Radar disi, ucus guvensiz!";
        } else {
            return "Ucus guvenli! Kalan pil: %" + to_string(pil);
        }
    }

    // Yuk degerini guncelleyen bir ornek metot
    void setYuk(int yeniYuk) {
        yuk = yeniYuk;
    }

    // Yikici fonksiyon
    ~Drone() {
        cout << "Drone testi tamamlandi ve bellekten silindi." << endl;
    }
};

// Ana program
int main() {
    cout << "=== Arda Alp'in Drone Ucus Test Programi ===" << endl;

    Drone d1(350, 40, 50, 100);
    Drone d2(600, 30, 70, 100);
    Drone d3(100, 160, 180, 100);

    cout << "Drone 1: " << d1.ucusGuvenligiKontrol() << endl;
    cout << "Drone 2: " << d2.ucusGuvenligiKontrol() << endl;
    cout << "Drone 3: " << d3.ucusGuvenligiKontrol() << endl;

    cout << "=== Testler tamamlandi ===" << endl;

    return 0;
}
