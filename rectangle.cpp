#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(int argc,char** argv){
 double sayi1,sayi2,alan,cevre;
 cout<<"Kisa kenari giriniz:"<<endl;
 cin>>sayi1;
 cout<<"uzun kenari giriniz:"<<endl;
 cin>>sayi2;
alan=sayi1*sayi2;
cevre=2*(sayi1+sayi2);
cout<<"Dikdortgenin alani: "<<alan<<"Dikdortgenin cevresi: "<<cevre<<endl;
return 0;
}