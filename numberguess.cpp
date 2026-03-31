#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int argc, char** argv) {
  	srand(time(0));
	int tahmin1,tahmin2,tahmin3,tahmin4,tahmin5,tahmin6,tahmin7,tahmin8,tahmin9,tahmin10;
	int tahminsayisi = rand() % 100 + 1;
	cout<<"Sayi oyununa hosgeldiniz"<<endl;
	cout<<"0 - 100 arasindaki sayiyi 10 denemede bulunuz"<<endl;
	cout<<"ilk tahmininizi giriniz"<<endl;
	cin>>tahmin1;
	if(tahmin1!=tahminsayisi){ //sayı 1
		cout<<"ilk tahmin yanlis,ikinci tahmininizi giriniz"<<endl;
        if(tahmin1<tahminsayisi) {
            cout<<"Daha buyuk bir sayi tahmin edin."<<endl;
      } else {
            cout<<"Daha kucuk bir sayi tahmin edin."<<endl;
        }
		cin>>tahmin2;
		}
	else {
    	cout<<"Akil okuyucu"<<endl;
    	return 0;
	}
					
	if(tahmin2!=tahminsayisi){  //sayı 2
		cout<<"ikinci tahmin yanlis,ucuncu tahmininizi giriniz"<<endl;
        if(tahmin2<tahminsayisi) {
            cout<<"Daha buyuk bir sayi tahmin edin."<<endl;
      } else {
            cout<<"Daha kucuk bir sayi tahmin edin."<<endl;
        }
		cin>>tahmin3;
		}
	else {
    cout<<"Akil okuyucu"<<endl;
    return 0;
	}
	if(tahmin3!=tahminsayisi){ //sayı 3
		cout<<"ucuncu tahmin yanlis,dorduncu tahmininizi giriniz"<<endl;
        if(tahmin3<tahminsayisi) {
            cout<<"Daha buyuk bir sayi tahmin edin."<<endl;
       }else {
            cout<<"Daha kucuk bir sayi tahmin edin."<<endl;
        }
		cin>>tahmin4;
	}
	else {
    cout<<"Akil okuyucu"<<endl;
    return 0;
	}
	if(tahmin4!=tahminsayisi){ //sayı 4
		cout<<"dorduncu tahmin yanlis,besinci tahmininizi giriniz"<<endl;
        if(tahmin4<tahminsayisi) {
            cout<<"Daha buyuk bir sayi tahmin edin."<<endl;
      } else {
            cout<<"Daha kucuk bir sayi tahmin edin."<<endl;
        }
		cin>>tahmin5;
	}
	else {
    cout<<"Ortalama Zeka"<<endl;
    return 0;
	}
	if(tahmin5!=tahminsayisi){  //sayı 5
		cout<<"besinci tahmin yanlis,altinci tahmininizi giriniz"<<endl;
        if (tahmin5<tahminsayisi) {
            cout<<"Daha buyuk bir sayi tahmin edin."<<endl;
      } else {
            cout<<"Daha kucuk bir sayi tahmin edin."<<endl;
        }
		cin>>tahmin6;
	}
	else {
    cout<<"Ortalama Zeka"<<endl;
    return 0;
	}
	if(tahmin6!=tahminsayisi){ //sayı 6
		cout<<"altinci tahmin yanlis,yedinci tahmininizi giriniz"<<endl;
        if(tahmin6<tahminsayisi) {
            cout<<"Daha buyuk bir sayi tahmin edin."<<endl;
      } else {
            cout<<"Daha kucuk bir sayi tahmin edin."<<endl;
        }
		cin>>tahmin7;
	}
	else {
    cout<<"Ortalama Zeka"<<endl;
    return 0;
	}
	if(tahmin7!=tahminsayisi){ //sayı 7
		cout<<"yedinci tahmin yanlis,sekizinci tahmininizi giriniz"<<endl;
        if(tahmin7<tahminsayisi) {
            cout<<"Daha buyuk bir sayi tahmin edin."<<endl;
      } else {
            cout<<"Daha kucuk bir sayi tahmin edin."<<endl;
        }
		cin>>tahmin8;
	}
	else {
    cout<<"Ortalama zeka"<<endl;
    return 0;
	}
	if(tahmin8!=tahminsayisi){ //sayı8
		cout<<"sekizinci tahmin yanlis,dokuzuncu tahmininizi giriniz"<<endl;
        if(tahmin8<tahminsayisi) {
            cout<<"Daha buyuk bir sayi tahmin edin."<<endl;
      } else {
            cout<<"Daha kucuk bir sayi tahmin edin."<<endl;
        }
		cin>>tahmin9;
	}
	else {
    cout <<"Kendini gelistirmen gerek"<< endl;
    return 0;
	}
	if(tahmin9!=tahminsayisi){  //sayı9
		cout<<"dokuzuncu tahmin yanlis,onuncu tahmininizi giriniz"<<endl;
        if(tahmin9<tahminsayisi){
            cout<<"Daha buyuk bir sayi tahmin edin."<<endl;
      } else {
            cout<<"Daha kucuk bir sayi tahmin edin."<< endl;
        }
		cin>>tahmin10;
	}
	else {
    cout<<"Kendini gelistirmen gerek"<<endl;
    return 0;
	}
	if(tahmin10!=tahminsayisi){ //sayı10
		cout<<"Tahmininiz sona erdi"<<" "<<"sayi:"<<tahminsayisi<<" "<<"Tekrar deneyiniz"<<endl;
		}
	else {
    cout<<"Kendini gelistirmen gerek"<<endl;
    return 0;
	}
}