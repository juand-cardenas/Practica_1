
#include <iostream>
#include <vector> 
using namespace std;

int main()
{
vector <int>tam_os;

vector<int>numeros;//son los numeros que crean las diferentes listas.
int numero, auxili_1,num_lista,tamaños_1,posisiones_1;
int auxi_tamaño,a;
a=0;
cout<<"ingrese el numero: ";
cin >>numero ;
auxili_1=numero;
auxi_tamaño=0;

for(int i=1;i>0;i+=1){
    tamaños_1=0;
    auxili_1-=1;
    num_lista=auxili_1;
    numeros.push_back(num_lista);
    if (auxili_1!=1){
        while (num_lista!=1){
            if(num_lista%2==0){
                tamaños_1+=1;
                num_lista=num_lista/2;
                if (num_lista==1){
                    tam_os.push_back(tamaños_1);
                    auxi_tamaño+=1;
                }
            }
            if(num_lista%2!=0 and num_lista!=1){
                tamaños_1+=1;
                num_lista=(num_lista*3)+1;
                if (num_lista==1){
                    tam_os.push_back(tamaños_1);
                    auxi_tamaño+=1; 
                }
                
            }
            
        }
    }

    if(auxili_1==1){i=-123;}
}
//comparar tamaños_1
for(int i=0;i<=auxi_tamaño;i+=1){
    if (tam_os[a]<tam_os[i]){
        a=i;
        i=0;
    }
}
cout<<"la serie mas grande es obtenida por la semilla "<<numeros[a]<<" con un tamaño de: "<<tam_os[a]+1;

    return 0;
}
