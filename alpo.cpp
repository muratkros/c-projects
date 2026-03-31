#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    double sayi1, sayi2;
    char sembol;

    cout << "Yapmak istediginiz islemi secin (+, -, *, /): " << endl;
    cin >> sembol;

    cout << "birinci sayiyi giriniz: " << endl;
    cin >> sayi1;
    cout << "ikinci sayiyi giriniz: " << endl;
    cin >> sayi2;

    switch(sembol)
    {
        case '+':
            cout << "Sonuc: " << sayi1 + sayi2 << endl;
            break;
        case '-':
            cout << "Sonuc: " << sayi1 - sayi2 << endl;
            break;
        case '*':
            cout << "Sonuc: " << sayi1 * sayi2 << endl;
            break;
        case '/':
            if (sayi2 != 0)
                cout << "Sonuc: " << sayi1 / sayi2 << endl;
            else
                cout << "Hata: Bir sayi sifira bolunemez!" << endl;
            break;
        default:
            cout << "Gecersiz islem secimi!" << endl;
    }

    return 0;
}