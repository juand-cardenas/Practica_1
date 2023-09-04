

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
int main()
{int a,b,c;
    srand(time(NULL));
   int rand = std :: rand()%101;
   a=rand;
   for (c=1;b!=a;c+=1){
       cout<<"ingrese un numero entero: ";
       cin >>b ;
       if (a==b){cout<<"el numero de intentos fue de: "<<c;}
   }
    

    return 0;
}
