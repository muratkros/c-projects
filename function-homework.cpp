//Ögrenci ve not analiz sistemi-Murat Karaosmanoğlu
#include <iostream>
#include <string>
using namespace std;

string ad[100];
int numara[100];
float vize_not[100];
float final_not[100];
float ogrenci_ortalama[100];
int ogrenci_sayisi = 0;

void menu_goster(){  
    cout<<"========YOK OGRENCI SISTEMI========"<<endl;
    cout<<"Yapmak istediginiz islemi seciniz:"<<endl;
    cout<<"{0}cikis-{1}Bilgi girisi-{2}Listeleme yap-{3}Sinif ortalamasi al-{4}En basarili ogrenciyi bul-"<<endl;
}

void ogrenci_bilgisi(){
    int eklenecek_sayi;
    cout<<"Eklenecek ogrenci sayisini giriniz;"<<endl;
    cin>>eklenecek_sayi;
    
    if(ogrenci_sayisi + eklenecek_sayi > 100){
        cout<<"Hata: Kapasite asildi! En fazla"<< 100 - ogrenci_sayisi<<"ogrenci daha girebilirsiniz."<<endl;
        return;
    }
    
	for(int i = ogrenci_sayisi; i < ogrenci_sayisi + eklenecek_sayi; i++){
        cout<<"Ogrenci adini giriniz;"<<endl;
        cin>>ad[i];
        cout<<"Ogrenci numarasini giriniz;"<<endl;
        cin>>numara[i];
        cout<<"Ogrenci vize notunu giriniz;"<<endl;
        cin>>vize_not[i];
        cout<<"Ogrenci final notunu giriniz;"<<endl;
        cin>>final_not[i];
    }
    ogrenci_sayisi += eklenecek_sayi;
}

void ortalama(){ 
   for(int i=0;i<ogrenci_sayisi;i++){
        ogrenci_ortalama[i]=(vize_not[i]*0.3) + (final_not[i]*0.7);
   }
}

string harf_notu_hesapla(float ort){
    string harf_notu;
    if(ort>=90){
        harf_notu="A";
    }
    else if(ort>=80){
        harf_notu="B";
    }
    else if(ort >=70){
        harf_notu="C";
    }
    else if(ort >=60){
        harf_notu="D";
    }
    else{
        harf_notu="F";
    }
    return harf_notu;
}

void ogrencileriListele(){
    ortalama();
    for(int i=0;i<ogrenci_sayisi;i++) {
        cout<<"Ogrenci: "<<ad[i]<<" <<||numarasi: "<<numara[i]<<" ||Ortalama: "<<ogrenci_ortalama[i]<<" ||Harf Notu: "<<harf_notu_hesapla(ogrenci_ortalama[i])<<endl;
    }
}

void en_basarili_ogrenci(){
    ortalama();
    int en_iyi_deger = 0;
    float max_ort = 0;
    
    for(int i=0; i<ogrenci_sayisi; i++) {
        if(ogrenci_ortalama[i] > max_ort){
            max_ort = ogrenci_ortalama[i];
            en_iyi_deger = i;
        }
    }
    if(ogrenci_sayisi > 0){
        cout<<"En basarili ogrenci: "<<ad[en_iyi_deger]<<" - Ortalama: "<<max_ort<<endl;
    }
}

void sinifOrtalamasi(){
    ortalama();
    float toplam = 0;
    for(int i=0; i<ogrenci_sayisi; i++){
        toplam += ogrenci_ortalama[i];
    }
    if(ogrenci_sayisi > 0){
        cout<<"Sinif Ortalamasi: "<<toplam/ogrenci_sayisi<<endl;
    }
}

int main(int argc,char* argv[]){
    int secim = -1;
    while(secim != 0)
    {
        menu_goster();
        cin>>secim;
        switch(secim){
            case 0:
                return 0;
                break;
            case 1:
                ogrenci_bilgisi();
                break;
            case 2:
                ogrencileriListele();
                break;
            case 3:
                sinifOrtalamasi();
                break;
            case 4:
                en_basarili_ogrenci();
                break;
            default:
                cout<<"Lutfen belirtilen degerlerden birini tuslayiniz"<<endl;
        }
    }
}