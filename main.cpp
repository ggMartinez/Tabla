#include<stdio.h>
#define TAMANIO 17


int hash[TAMANIO];


void inicializar(){
    for(int a=0;a < TAMANIO; a++){
        hash[a] = 0;
    }
}

int calcularDispersion(int valor){
    return valor % TAMANIO;
}
void insertar(int valor){
    hash[calcularDispersion(valor)] = valor;
}


void mostrar(){
    for(int a=0;a < TAMANIO; a++){
        printf("%i - %i\n",a,hash[a]);
    }
}

void mostrarUno(int valor){
    printf("%i",hash[calcularDispersion(valor)]);
}

int main(){

    int numeroPedido;
    inicializar();

    insertar(20);
    insertar(17);

    //mostrar();
    printf("Dame un numero: ");
    scanf("%i",&numeroPedido);
    mostrarUno(numeroPedido);

    printf("Contenido de la tabla hash: \n");
    mostrar();
    return 0;
}

