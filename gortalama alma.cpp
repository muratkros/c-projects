#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(int argc,char** argv){
    int sayi1,sayi2,sayi3,sayi4,sayi5;
    cout<<"Lutfen 5 adet sayi giriniz: "<<endl;
    cin>>sayi1>>sayi2>>sayi3>>sayi4>>sayi5;
    double geometrikortalama=pow(sayi1*sayi2*sayi3*sayi4*sayi5,1.0/5);
    cout<<"Girdiginiz sayilarin geometrik ortalamasi: "<<geometrikortalama<<endl;
    return 0;
}