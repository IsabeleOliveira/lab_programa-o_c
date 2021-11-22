#include <stdio.h>
#include <stdlib.h>

int vetores_ordem(float *x, float *y, int n){
    int a = 0, b = 0;
    float *z;
    
    z = (float*)(malloc(2*n*sizeof(float)));

    for(int i = 0; i < 2*n; i++){
        if(a == n){
            z[i] = y[b];
            b++;
        }
        else if(b == n){
            z[b] = x[a];
            a++;
        }

        if(a<n && b<n){
            if(x[a] < y[b]){
                z[i] = x[a];
                a++;
            }
            else{
                z[a] = y[b];
                b++;
            }
        }

}

    return z;

} //questão 7

int seg_consecutivos(int *x, int k){
    int m, i;
    for (int I = 0; I < k; I++){
        m = 1;
        while(I + 2*m-1 < k){
            i = 0;
            while(i<m){
                if(x[I+i] != x[I+i+m])
                    i = m + 1;
                i++;
            }
            if(i == m){
                printf("i = %d m = %d\n", I, m);
            }
            m++;
        }
    }
}   //questão 8


int k_altenate(int *vetor, int numero){
    int paridade = vetor[0] % 2, valor;

    for(int i = 1; i<=numero; i++){
        paridade = vetor[0]%2;
        valor = 0;
        while (valor<numero){
            if(paridade != vetor[valor]%2)
                valor = numero + 1;
            
            
            if(valor%i == 0)
                paridade = (paridade+1)%2;
            valor++;

        }
        if(valor == numero)
            return i;
            
    }
    return 0;
    
}   // questão 9 




int main(){
    int n, Vetor[] = {7, 8, 15, 3, 1, 0};
    float x[] = {1, 3, 4};
    float y[] = {2, 5, 6};
    float *z;

    z = vetores_ordem(x, y, 3);
    for (int i = 0; i < 6; i++){
        printf("%.1f ", z[i]);
    }

    printf("\n");
    int x1[] = {7, 9, 8, 5, 4, 5, 4, 5, 5};

    seg_consecutivos(x1, 9);
    
    
    int vetor[] = {1, 3, 6, 8, 9, 11, 2, 4, 1, 7, 6, 8};

    printf("k = %d \n", k_alternate(vetor, 12));

    return 0;
}

