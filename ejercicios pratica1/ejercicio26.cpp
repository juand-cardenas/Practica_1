#include <iostream>
using namespace std;
int main()
{int a,b,d,e,f,g;
    cout<<"ingrese el numero: ";
    cin>>a;
    cout<<"ingrese el numero: ";
    cin>>b;
    cout<<"ingrese el numero: ";
    cin>>d;
if (a+b!=d and a+d!=b and d+b!=a) {
    
        if (a!=0 and b!=0 and d!=0){
        if(a==b==d){
            cout<<"es un trangulo equilatero";
            a=-1000;
        }
            if(a==b or d==a or b==d and a!=0){
            cout<<"es un trangulo isoseles";
            a=-1000;
        }
        if (a!=0 and b!=0 and d!=0){
            cout<<"es un triangulo escaleno";
            a=-1000;
        }
    }
}
if(a!=-1000){ cout<<"no es un triangulo";}
return 0;    }