#include <iostream>
#include <vector>
using namespace std;

int main()
{ vector <int> primos;
int numero,numero2,i,cont,mayor;
cout<<"ingrese el numero del que quiere conocer el maximo factor primo: ";
cin>>numero2;
numero=numero2;
cont=0;
mayor=0;
for ( i=2;numero>1;i+=1){
    while(numero%i==0){
        numero=numero/i;
        primos.push_back(i);
        cont+=1;
    }

    
}
for(i=0;i<=cont;i+=1){
    if(primos[mayor]<primos[i]){
        mayor=i;
        i=0;
    }
}
cout<<"El mayor factor primo de "<<numero2<<" es "<<primos[mayor];
    return 0;
}
