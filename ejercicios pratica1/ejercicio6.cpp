/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int c,b,d,a;
    cout<< "esciba a que potencia se elebara el numero :";
    cin>>b;
    
    d=1;
    
    for (c=0;c!= b ;c +=1) {
        
        if (c == 0) {
            cout<<"ingrese la base de la potencia: ";
            cin>> a;
    
        }
        d= d*a;
        
    }
    cout<< a <<"^"<<b<< "= "<<d;
    
    return 0;
}

