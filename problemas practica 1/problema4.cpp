/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num, hora, minu, minu_2,tiempo_Pasa,num_2,c;
    
   cout<<"escriba la hora en numeros validos: ";
    cin>>num;
    hora=num/100;
    minu=num%100;
    cout<<"esciba el tiempo transcurrido: ";
    cin>>num_2;
    minu_2=num_2%100;
    tiempo_Pasa=num_2/100;
    if (minu_2<=60 and minu<=60 and hora<=23){
        minu=minu+minu_2;
        minu_2=minu/60;
        minu=minu%60;
        tiempo_Pasa=tiempo_Pasa+minu_2;
    
        for(c=0;c>=0;c+=1){
            
            hora+=1;
            tiempo_Pasa=tiempo_Pasa-1;
            if (hora==24){
                hora=00;
            }
            if (tiempo_Pasa==0){
                c=-4;
            }
        
        }

    cout<<"la hora es: "<<hora<<minu;
    }

    return 0;
}
