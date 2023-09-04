#include <iostream>

using namespace std;

int main() {
    int c,b,d,a;
    cout<< "esciba el numero del que obtendra la potencia :";
    cin>>b;

    d=1;
    for (c=1; c<=5 ;c +=1) {

        d= d*b;

        cout<<b<<"^"<<c<<"="<<d<<endl ;
        
        
    }
    
    return 0;
}





