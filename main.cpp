#include<iostream>
#include<string>
using namespace std;

void inicializar(float array[],string telas[],string prendas[]){
    float Precio;
    for (int i=0; i<cantidad_telas;i++){
        cin>>telas[i];
        for (int e=0;e<columnas;e++){
            cin>>prendas[e];
            cin>>Precio;
            array[i][e]=prendas[e]*Precio;
        }
    }
}

float calculo_tiempos(){
    
}

float calculo_materiaprima(){
    
}

float calculo_costos(){
    
}

int const cantidad_telas=3;
int const cantidad_prendas=3;

main(){
    float array[cantidad_telas][cantidad_prendas]={0};
    string telas[cantidad_telas];
    string polos, camisas, cuellos;
    string prendas[cantidad_prendas]={polos, camisas, cuellos};
    inicializar(array,telas,prendas);
    
    
}
