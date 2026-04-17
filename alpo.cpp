#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(int argc, char*argv) {
    double a, b;
    string alperen;
    cin >> alperen;
    alperen.append("Furkan");
    cout << alperen << endl;
    cin >> a >> b;  
    cout << abs(sqrt(pow(a + b,2))) << endl;
    return 0;
}