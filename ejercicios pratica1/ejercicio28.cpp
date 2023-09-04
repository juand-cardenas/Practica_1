/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{int numero, divisor, divi_signo;
float pi, auxiliar_1;
bool signo=true;
cout<<"ingrese el numero de aprximaciones: ";
cin>>numero;
pi=0.0;
for(int d=1;d<=numero;d+=1){
divisor=(2*d)-1;
if(signo==true){
    divi_signo=(1)*divisor;
    auxiliar_1=(float)1/divi_signo;
    pi=(float)pi+auxiliar_1;
    signo=false;
}
if(d%2==0){
    signo=true;
    divi_signo=divisor*(-1);
    auxiliar_1=(float)1/divi_signo;
    pi=pi+auxiliar_1;
}
}
pi=4*(float)pi;
cout<<"pi es aproximadamente: "<<pi;
    return 0;
}
