/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{int numero,sum_factorial;
long double factorial;
cout<<"ingrese el numero de aprximaciones: ";
cin>>numero;
double e=0;
factorial=1;
sum_factorial=0;
for(int d=0;d<numero;d+=1){
    for(int i=1;i<=sum_factorial;i+=1){
        factorial = factorial * i;
    }
    e+=1/factorial;
    sum_factorial+=1;
}
cout<<"e es aproximadamente: "<<e;
    return 0;
}
