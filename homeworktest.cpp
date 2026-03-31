#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double sayi1,sayi2;
    double sayi3;
    cout<<"Lütfen sayiyi giriniz:"<<endl;
    cin>>sayi3;
    if (sayi3 > 10){
         cout<<"Sayi 10'dan büyük"<<endl;
    }
    else if (sayi3 == 10){
         cout<<"sayi 10'a esitmis"<<endl;
    }
    else{
         cout<<"Sayi 10'dan küçüktür"<<endl;
    }
    return 0;
}