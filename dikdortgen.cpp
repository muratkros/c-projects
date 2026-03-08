#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double sayi1,sayi2,cevre,alan;
    cout<<"Lutfen kisa kenari giriniz:"<<endl;
    cin>>sayi1;
    cout<<"Lutfen uzun kenari giriniz:"<<endl;
    cin>>sayi2;
    alan=sayi1*sayi2;
    cevre=2*(sayi1+sayi2);
    cout<<"dikdortgenin alani:"<<alan<<" dikdortgenin cevresi:"<<cevre<<endl;
    return 0;
}
