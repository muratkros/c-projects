#include <iostream>
#include <string>
using namespace std;
int main(int argc,char* argv[]){
   int sayac1,sayac2,secim,n;
   sayac1=0;
   sayac2=0;
   cout<<"Merhaba sisteme hos geldiniz lütfen 0,1 ve 2 arasindan bir sayi giriniz: ";
   cin>>secim;
   switch(secim){
       case 0:
              cout<<"Lutfen bir sayi giriniz."<<endl;
                cin>>n;
                while(sayac1!=n){
                    for(sayac2=1;sayac2<sayac1;sayac2=sayac2+1){
                        cout<<" * "<<endl;
                        break;
                    }
                    cout<<" \n* "<<endl;
                }
           break;
       case 1:
           cout<<"1 sayisini girdiniz.";
           break;
       case 2:
           cout<<"2 sayisini girdiniz.";
           break;
       default:
           cout<<"Lütfen 0,1 veya 2 arasindan bir sayi giriniz.";
   }
}