

#include <iostream>

using namespace std;

int main()
{   int a,b,c,h,m;
    cout<<"esciba una cantida entera de segundos: ";
    cin >>a ;
    h=a/3600;
    b=a%3600;
    m=b/60;
    c=b%60;
    cout<<h<<":"<<m<<":"<<c;
    return 0;
}
