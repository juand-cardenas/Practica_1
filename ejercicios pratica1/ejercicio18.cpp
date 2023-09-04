#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int c,b,a;
    float d;
    cout<< "esciba un numero :";
    
    cin>>b;
    d=sqrt(b);
    float f = round(d * 100) / 100;
    if (f*f==b){
        cout<<b<<" es un cuadrado perfecto";}
        
    else{cout<<b<<" No ues un cuadrado perfecto";
    }
    
    
    
    return 0;
}





