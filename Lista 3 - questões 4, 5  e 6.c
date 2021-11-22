#include <stdio.h>
#include <stdlib.h>

int vector(int n, int *vetor){
    int max = vetor[0], min = vetor[0];

    for(int i=0; i<n; i++){
        if(max<vetor[i])
            max = vetor[i];
        else if(min>vetor[i])
            min = vetor[i];
        
    }
    printf("maximo = %d, minimo = %d", max, min);

}   // questão 4

int prod_escalar(int *vetor1, int *vetor2, int n){
    int produto = 0;

    for(int i = 0; i < n; i++){
        produto = produto + vetor1[i] * vetor2[i];

    }
    return produto;

}   //questão 5

int num_vezes_vetor(float *vetor, int n){
    int contador = 0, aux;
    
    for(int i=0; i<n; i++){
        aux = 0;
        while(vetor[i] != vetor[aux] && aux<i){
            aux++;
        }
        if(aux == i){
            contador = 1;
            for(aux=i + 1; aux<n; aux++){
                if(vetor[i] == vetor[aux])
                    contador++;
            }
            if(contador == 1)
                printf("%f aparece 1 vez\n", vetor[i]);
            else
                printf("%f aparece %d vezes\n", vetor[i], contador);
        }
    }
}   //questão 6



int main(){
    int n, vetor[] = {3, 5, 6, 2};
    int vetor1[] = {3, 5, 6, 2};
    int vetor2[] = {1, 4, 3, 2};

    float VETOR[] = {-1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1.7};
    printf("-------QUESTAO 4--------\n");
    vector(n = 4, vetor);
    printf("\n\n-------QUESTAO 5--------");
    printf("\nO produto dos vetores 1 e 2 eh = %d\n\n", prod_escalar(vetor1, vetor2, 4));
    printf("-------QUESTAO 6--------\n");
    num_vezes_vetor(VETOR, 8);
    return 0;


}