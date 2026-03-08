#include <iostream>
#include <string>
using namespace std;
int main(int argc,char** argv){
    string isim ="Murat";
    string isim_2="kros";
    cout<<isim.compare(isim_2)<<"ve"<<isim_2.compare(isim)<<endl;
    cout<<isim.append(" ").append(isim_2)<<endl;
    return 0;
}
