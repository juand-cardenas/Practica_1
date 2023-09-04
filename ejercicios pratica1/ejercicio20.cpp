
#include <iostream>

using namespace std;

int main()
{int a,c,edi,b,d,inver;
    cout<<"ingrese el numero de interes: ";
    cin>>a;
    edi=a;
    inver=0;
    d=0;
    for(c=0;c!=-1;c+=1){
        d=edi%10;
        inver=inver*10+d;
        edi=edi/10;
        if(inver==a){
            cout<<a<<" es un numero palidromo";
            c=-2;
        }
        if(edi==0 and a!=inver){
            cout<<a<<" no es palindromo";
            c=-2;
        } 
        

        
        
        
    }
    
    return 0;
}
