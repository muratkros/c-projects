#include <iostream>
#include <string>
using namespace std;
int main(int argc,char* argv[]){
   int sayac1,sayac2,secim,n,t;
   sayac1=0;
   cout<<"Merhaba sisteme hos geldiniz lutfen 0,1 ve 2 arasindan bir sayi giriniz: "<<endl;
   cin>>secim;
   switch(secim){
       case 0:
              cout<<"Lutfen bir sayi giriniz."<<endl;
                cin>>n;
                while(sayac1!=n){
                    for(sayac2=0;sayac2<(2*sayac1+1);sayac2++){
                        //burada cout<<(" * ")*2*sayac1+1 denedim python gibi değilmiş stringle sayı çarpılmıyormuş.
                        cout<<" * ";
                        
                    }
                    cout<<" \n "<<endl;
                    sayac1=sayac1+1;
                }
           break;
       case 1:
           cout<<"Lutfen bir sayi giriniz."<<endl;
           //Düsünce olarak buradaki sayacta bosluk bıraktırmam lazım yani t kadar boşluk bırakcaz ve sonra yıldızları yazdıracaz deniyelim.
                cin>>n;
                //t=n-1 dedim cünkü mantık kurduğum zaman 1 tane yıldızıda oraya yazdıracam geriye kalan bosluk olacak.
                //Burada da sıkıntı tek 1 tane yıldız olmucak ki.Boşluk bıraktıran bir döngü yazmayı deneyebilirim.(olmadı yıldızların başında 3 tane boşluk oldu sadece)
                //Boşluk sayısını da her seferinde azaltmam lazım ki sola doğru kayarak yıldızları yazdırayım.
                //ilk yıldızın soluna son satırdaki yıldızdan 1 eksik tane boşluk bıraktırmam lazım yoksa yıldızlar yapışıyor
                //toplam satır sayısı - o anki yıldız sayısını boşluk sayısı gibi düşündürüp döngü aldım bu sefer.
                //t=n-1(boşluk sayısı)-sayac1(şu anki yıldız sayısı) dedim ve boşluk bıraktıran döngüyü yazdım.

                while(sayac1!=n){
                    for(sayac2 = 0; sayac2 < (n - 1 - sayac1); sayac2++){
                        cout<<"  ";
                    }
                    for(sayac2=0;sayac2<=sayac1;sayac2++){
                        cout<<" * ";
                        
                    }
                    cout<<" \n "<<endl;
                    sayac1=sayac1+1;
                }
           break;
       case 2:
           cout<<"Lutfen bir sayi giriniz."<<endl;
           cin>>n;
           //Şimdi yıldızların bir noktaya kadar geldikten sonra simetrik bir şekilde gittiği bir formül düşüncem for içerisinde.
           //n'inci sayıya kadar yıldızları yazdırıcam sonra n'inci sayıdan sonra yıldızları azaltarak yazdırıcam.
           //if yapısı n'inci sayıya kadar yazdıran bir döngü ve n'inci sayıdan sonra yıldızlatarı azaltan döngü yazıcam
           //if yapısı kullanırsam sadece 1 yarısı olur diğer yarısı olmaz o yüzden 2 tane while döngüsü lazım.
            while(sayac1<n){
                 for(sayac2 = 0; sayac2 < (n - 1 - sayac1); sayac2++){
                        cout<<"  ";
                    }
                    for(sayac2=0;sayac2<(2*sayac1+1);sayac2++){
                        cout<<" * ";
                        
                    }
                    cout<<" \n "<<endl;
                    sayac1=sayac1+1;
                }
                sayac1 = n - 2;
                 //sayac1=n olduğu için azaltarak gidicem ve n-2 den başlıcam bir alt satıra geçmek istediğim için.
                while(sayac1>=0){
                 for(sayac2 = 0; sayac2 < (n - 1 - sayac1); sayac2++){
                        cout<<"  ";
                    }
                    for(sayac2=0;sayac2<(2*sayac1+1);sayac2++){
                        cout<<" * ";
                        
                    }
                    cout<<" \n "<<endl;
            
                    sayac1=sayac1-1;
                }
                break;
   }
   return 0;
}