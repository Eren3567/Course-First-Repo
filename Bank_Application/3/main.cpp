#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Banka {
private:
    string Müsteri, Hesap;
    int Bakiye;

public:
    string getmüsteri() {
        return Müsteri;
    }
    string gethesap() {
        return Hesap;
    }

    int getbakiye() {
        return Bakiye;
    }

    void setmüsteri(string deger) {
        this->Müsteri = deger;
    }

    void sethesap(string deger) {
        this->Hesap = deger;
    }
    void setbakiye(int deger) {
        this->Bakiye = deger;
    }

    Banka(string Müsteri, string Hesap, int Bakiye) {
        this->Müsteri = Müsteri;
        this->Hesap = Hesap;
        this->Bakiye = Bakiye;
    }
// para çekme foksiyonu yaptım

    void paraCek() {
        int Tutar;
        cout << Müsteri << " Bey, çekmek istediğiniz tutarı girin: ";
        cin >> Tutar;

        if (Tutar > 0 && Bakiye >= Tutar) {
            Bakiye -= Tutar;
            cout << "--Güncel Bakiyeniz: " << Bakiye << " TL'dir" << endl;
        } else {
            cout << Müsteri << " Bey, bakiyeniz yetersiz veya geçersiz tutar!" << endl;
        }
    }
    // para yatırma foksiyonu yaptım
    void paraYatir() {
        int Tutar;
        cout << Müsteri << " Bey, yatırmak istediğiniz tutarı girin: ";
        cin >> Tutar;

        if (Tutar > 0 && Bakiye >= Tutar) {
            Bakiye += Tutar;
            cout << "--Güncel Bakiyeniz: " << Bakiye << " TL'dir" << endl;
        } else {
            cout << "Geçersiz tutar!" << endl;
        }
    }
 
    // bigileri gösteren foksiyonu yaptım
    void bilgileriGoster() {
        cout << "Müşteri: " << Müsteri << ", Hesap: " << Hesap << ", Bakiye: " << Bakiye << " TL" << endl;
    }
};

int main() {
    // banka hesapları oluşturdum
    Banka müsteri1("Ahmet_Dolu", "Hesap1", 300);
    Banka müsteri2("Engin_Bos", "Hesap2", 450);
    Banka müsteri3("Fahrı_Buyuk", "Hesap3", 300);

   // menü döngüsü yaptım
    int secim;
    do {
        cout << "\nBanka uygulaması menüsü:" << endl;
        cout << "1. Tüm müşteri ve hesap bilgilerini görüntüle" << endl;
        cout << "2. Para çek" << endl;
        cout << "3. Para yatır" << endl;
        cout << "4. Verileri dosyaya kaydet" << endl;
        cout << "0. Çıkış" << endl;

        cout << "Seçiminizi yapın: ";
        cin >> secim;

        switch (secim) {
            case 1:
                müsteri1.bilgileriGoster();
                müsteri2.bilgileriGoster();
                müsteri3.bilgileriGoster();
                break;
            case 2:
                müsteri1.paraCek();
                müsteri2.paraCek();
                müsteri3.paraCek();
                break;
            case 3:
                müsteri1.paraYatir();
                müsteri2.paraYatir();
                müsteri3.paraYatir();
                break;
          
                
            case 4:
                {
                    string dosyaAdi = "/Users/erencetintas/Desktop/musteri_bilgileri.txt";
                    
                    
                    ofstream dosya(dosyaAdi);


                    if (dosya.is_open()) {
                     
                        dosya << "Müşteri 1: " << müsteri1.getmüsteri() << ", Hesap: " << müsteri1.gethesap() << ", Bakiye: " << müsteri1.getbakiye() << endl;
                        dosya << "Müşteri 2: " << müsteri2.getmüsteri() << ", Hesap: " << müsteri2.gethesap() << ", Bakiye: " << müsteri2.getbakiye() << endl;
                        dosya << "Müşteri 3: " << müsteri3.getmüsteri() << ", Hesap: " << müsteri3.gethesap() << ", Bakiye: " << müsteri3.getbakiye() << endl;

                      
                        dosya.close();
                        cout << "Veriler başarıyla dosyaya yazıldı." << endl;
                    }
                }
                break;
                
            case 0:
                cout << "Çıkış yapılıyor..." << endl;
                break;
            default:
           
                cout << "Geçersiz seçim. Lütfen tekrar deneyin." << endl;
        }

    } while (secim != 0);

    return 0;
}

