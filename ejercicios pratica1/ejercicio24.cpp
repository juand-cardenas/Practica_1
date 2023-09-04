

#include <iostream>

using namespace std;

int main()
{   int a,b,c,h,m,j;
    cout<<"esciba un numero entero: ";
    cin >>a ;
    b=a-2;
    h=0;
    m=0;
    for (c=0;m!=2;c+=0.1){
        h+=1;
        if (h<=a){
            cout<<"*";
            if (h==a){
                m+=1;
                cout<<endl; }
        }
        if (h==a and m!=2){
            for (c=1;c<=b;c+=1){
                cout<<"*";
                for(j=1;j<=b;j+=1){
                    cout<<" ";
                    if (j==b){
                        cout<<"*"<<endl;
                        h=0;
                        
                    }
                }
                
            }
        }
            
        
        }
        
        
  return 0;  }
    
