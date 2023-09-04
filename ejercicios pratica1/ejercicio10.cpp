#include <iostream>

using namespace std;

int main() {
    int c,b,d,a;
    cout<< "esciba el numero del que obtendra los multiplos :";
    cin>>b;
    a=1;
    d=0;
    cout<<"los multiplos de "<< b <<" menores que 100 son : "<<endl;
    for (c=1; d<100 ;c +=1) {

        d= b*c;
        if (d<100){
            
        cout<<d<<endl;}
        
        
    }
    
    return 0;
}



