#include <iostream>
#include <fstream>
using namespace std;

class Drone {
private:
    int yuk, hiz, yukseklik, pil;

public:
    Drone(int y, int h, int ys, int p) {
        yuk = y;
        hiz = h;
        yukseklik = ys;
        pil = p;
    }

    string ucusGuvenligiKontrol() {
        if (yuk > 500)
            return "Aðýr yük - Uçuþ reddedildi!";
        else if (pil < 30)
            return "Pil yetersiz - Uçuþ ertelendi!";
        else if (yukseklik > 200)
            return "Yükseklik sýnýrý aþýldý!";
        else
            return "Drone uçuþa hazýr.";
    }

    void verileriKaydet(ofstream &dosya) {
        dosya << yuk << " " << hiz << " " << yukseklik << " " << pil << endl;
    }
};

int main() {
    Drone d(300, 50, 150, 80);

    cout << d.ucusGuvenligiKontrol() << endl;

    ofstream dosya("veri.txt");
    if (!dosya) {
        cout << "Dosya açýlamadý!" << endl;
        return 1;
    }

    d.verileriKaydet(dosya);
    dosya.close();

    cout << "Veriler dosyaya yazýldý." << endl;
    return 0;
}
