#include <iostream>
#include <vector> 
using namespace std;

int main()
{vector <int> multiplos;
int multi_mayor,numero_1, numero_2, rsulta, auxli_1,conta;
int salva_c, auxli_2,auxli_3;
auxli_3=0;
cout<< "ingrese el numero mayor de multiplo que desea: ";
cin>>multi_mayor;
cout<<"ingrese el numero del que quiere obtener los multiplos: ";
cin>>numero_1;
cout<<"ingrese el numero del que quiere obtener los multiplos: ";
cin>>numero_2;
auxli_1=numero_1;
auxli_2=0;
conta=0;
for(int c=1;c>0;c+=1){
    rsulta=auxli_1*c;
    if (rsulta<multi_mayor and conta==0){
        multiplos.push_back(rsulta);
        
    }
    if (rsulta>=multi_mayor){
        auxli_3=salva_c;
        salva_c=c;
        salva_c=salva_c-2;
        c=0;
        auxli_1=numero_2;
        conta+=1;
        if (conta>1){
            c=-2000;
        }
    }
    if (c>=1 and conta>=1){
    for(int d=0;d<=salva_c;d+=1){
        if (multiplos[d] ==rsulta){
            auxli_2+=1;
        }
        if(d==salva_c and auxli_2==0){
            multiplos.push_back(rsulta);
            
            salva_c+=1;
            auxli_2=0;
            break;
        }
    }
    }
    
}
auxli_1=0;
for (int c=0;c<=auxli_3;c+=1){
    cout<<multiplos[c];
    auxli_1=auxli_1+multiplos[c];
    if (c!=auxli_3){
        cout<<"+";
    }
    
}
cout<<"="<<auxli_1<<endl;
    return 0;
}