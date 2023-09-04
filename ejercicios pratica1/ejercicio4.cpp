
#include <QCoreApplication>
#include <iostream>
using namespace std;
int a,b;
int main() {
    cout<< "escriba un numero: ";
    cin>>a;
    cout<< "escriba otro numero: ";
    cin>> b;

    if(a<b){
        cout<<"el numero "<< b << " es mayor que " << a;
    } else {
        cout <<"el numero "<< a << " es mayor que: "<<b ;
    }
    return 0;
}
