/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int c,d,a,b;
    d=1;
    b=0;
    for (c=1; d!=0 ;c +=1) {
        cout<<"ingrese un numero:  ";
        cin >> a ;
        b=b+a;
        if (a==0){
            d=0;
            c=c-1;
            b=b/c;
            cout<<"el promedio es: "<<b<<endl;
        }
        

        
        
        
        
    }
    
    return 0;
}
