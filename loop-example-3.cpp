#include <iostream>
using namespace std;
int main(int argc,char* argv[]){ 
	int satir, sutun, secim, n;
 do {
   	satir=0;
   cout<<"Merhaba sisteme hos geldiniz lutfen 0,1 veya 2 yi tuslayiniz"<<endl;
   cout<<"Cikmak icin 9'u tuslayiniz"<<endl;
   cin>>secim;                                                                             
   switch(secim){   
       case 0://piramit
       		cout<<"Lutfen bir sayi giriniz"<<endl;
       		cin>>n;
			while(satir<n) {
        	for(sutun=0;sutun<(n-1-satir);sutun++) {
            cout<< "   "; 
       	 }                   
       	 	for(sutun=0;sutun<(2*satir + 1);sutun++) {
        	    cout<<" * ";
       	 }                                   
        	cout<<endl; 
        	satir=satir+1;
    	}
           break;
       case 1://sağa yaslı dik üçgen
           cout<<"Lutfen bir sayi giriniz."<<endl;
                cin>>n;
                while(satir<n){
                    for(sutun = 0; sutun < (n - 1 - satir); sutun++){
                        cout<<"  ";
                    }
                    for(sutun=0;sutun<=satir;sutun++){
                        cout<<"* ";
                    }
                    cout<<""<<endl;
                    satir=satir+1;
                }
           break;
       case 2://baklava
           cout<<"Lutfen bir sayi giriniz."<<endl;
           cin>>n;
            while(satir<n){
                 for(sutun = 0; sutun < (n - 1 - satir); sutun++){
                        cout<<"   ";
                    }
                    for(sutun=0;sutun<(2*satir+1);sutun++){
                        cout<<" * ";
                    }
                    cout<<endl;
                    satir=satir+1;
                }
                satir = n - 2;
                while(satir>=0){
                 for(sutun = 0; sutun < (n - 1 - satir); sutun++){
                        cout <<"   ";
                    }
                    for(sutun=0;sutun<(2*satir+1);sutun++){
                        cout<<" * ";
                    }
                    cout<<endl;
                    satir=satir-1;
                }
                break;
   }
   } while (secim != 9);
   return 0;
}         