

#include <iostream>

using namespace std;

int main()
{
    int cantidad,bille_50=0,bille_20=0,bille_10=0,bille_5=0;
    int bille_2, bille_1,mone_500,mone_200,mone_100,mone_50;
    cout<<"ingrese la cantidad: ";
    cin>>cantidad;
    if (cantidad>=50000){
        bille_50=cantidad/50000;
        cantidad=cantidad%50000;
    }
    cout<<"50.000: "<<bille_50<< endl;
    
    if (cantidad>=20000){
        bille_20=cantidad/20000;
        cantidad=cantidad%20000;
    }
    cout<<"20000: "<<bille_20<< endl;
    
    if (cantidad>=10000){
        bille_10=cantidad/10000;
        cantidad=cantidad%10000;
    }
    cout<<"10.000: "<<bille_10<<endl;
    
    if (cantidad>=5000){
        bille_5=cantidad/5000;
        cantidad=cantidad%5000;
    }   
    cout<<"5.000: "<<bille_5<<endl;
    
    if (cantidad>=2000){
        bille_2=cantidad/2000;
        cantidad=cantidad%2000;
    }   
    cout<<"2.000: "<<bille_2<<endl;
    
    if (cantidad>=1000){
        bille_1=cantidad/1000;
        cantidad=cantidad%1000;
    }   
    cout<<"1.000: "<<bille_1<<endl;

    if (cantidad>=500){
        mone_500=cantidad/500;
        cantidad=cantidad%500;
    }   
    cout<<"500: "<<mone_500<<endl;
    
    if (cantidad>=200){
        mone_200=cantidad/200;
        cantidad=cantidad%200;
    }   
    cout<<"200: "<<mone_200<<endl;
    
    if (cantidad>=100){
        mone_100=cantidad/100;
        cantidad=cantidad%100;
    }   
    cout<<"100: "<<mone_100<<endl;
    
    if (cantidad>=50){
        mone_50=cantidad/50;
        cantidad=cantidad%50;
    }   
    cout<<"50: "<<mone_50<<endl;
    
    cout<<"faltante: "<< cantidad;

    return 0;
}
