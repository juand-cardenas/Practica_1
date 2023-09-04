/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main()
{vector <int> primos;
int enesimo, numero, auxiliar_1,auxiliar_2,prim_guardados;
cout<<"ingrese el enesimo primo que es de su interes: ";
cin>>enesimo;
numero=2;
primos.push_back(numero);
prim_guardados=1;
for(int c=1;c>0;c+=1){
    auxiliar_1=numero/c;
    auxiliar_2=numero%c;
        if (auxiliar_2==0 and (c!=1 or c!=numero) ){
        numero=numero+1;
        c=1;
    }
    if (prim_guardados==enesimo){
        c=-444;
        }
    if (auxiliar_1<c){
        primos.push_back(numero);
        numero=numero+1;
        prim_guardados=prim_guardados+1;
        c=1;
        if (prim_guardados==enesimo){
            c=-444;
        }
    }

}
cout<<"el primo numero "<<enesimo<<" es "<<primos[enesimo-1]<<endl;
    return 0;
}
