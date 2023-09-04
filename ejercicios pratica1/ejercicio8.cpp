#include <iostream>

using namespace std;

int main() {
    int c,b,d;
    cout<< "esciba el numero del que obtendra el factorial :";
    cin>>b;
    
    d=1;
    
    for (c=1;c<= b ;c +=1) {

        d= d*c;
        
    }
    cout<< b<<"!="<<d;
    
    return 0;
}


