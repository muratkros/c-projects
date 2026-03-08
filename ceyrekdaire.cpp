#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(int argc,char** argv){
    float yaricap,alan;
    cout<<"Lutfen ceyrek dairenin yaricapini giriniz: "<<endl;
    cin>>yaricap;
    alan=(3.14*pow(yaricap,2))/4;
    cout<<"Ceyrek dairenin alani: "<<alan<<endl;
    return 0;
    }