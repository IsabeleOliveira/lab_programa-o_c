#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fibonacci(int valor){
    if (valor  == 0)
        return 0;
    if (valor == 1)
        return 1;
    return fibonacci(valor - 1) + fibonacci(valor - 2);
}   //item a - questão 2

int fibonacci_iterativo(int num){
    int val_a=0, val_b=1;
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    if (num > 1){
        for (int i = 2; i < num; i++){
            val_b = val_a + val_b; 
            val_a = val_b - val_a;
        }
    }
    return val_a + val_b;
}   //item b - questão 2

int tam_valor(int a){
    int tam = 0;
    if (a == 0)
        return 1;
    while (a != 0){
        a = a/10;
        tam++;
    }
    return tam;

}   //item a - questão 3

int quanti_num(int val1, int val2){
    int count = 0;
    if(val1 == 0 && val2 == 0)
        return 1;
    while (val1 != 0){
        if (val2 == val1%10)
            count ++;
        val1 = val1/10;
    }
    return count;
} //item b - questão 3

int permutacao(int x, int y){
    for (int i = 0; i <= 9; i++){
        if (quanti_num(x, i) != (quanti_num(y, i)))
            return 0;
    }
    return 1;
} //item c - questão 3

int sufixo(int n1, int n2){
    if (n1 > n2)
        return 0;
    while (n1 != 0){
        if (n1 % 10 != n2 %10)
            return 0;
        n1 = n1/10;
        n2 = n2/10;

    }
    return 1;

} //item d - questão 3

int seg_numero(int val01, int val02){
    int seg;
    
    if(val01 > val02){
        seg = val01;
        val01 = val02;
        val02 = seg;
    }

    while(val01 <= val02){
        if(sufixo(val01, val02) == 1)
            return 1;
        val02 = val02/10;
    }
    return 0;
} //item e - questão 3





int main(){
    int val;
    printf("Digite um valor n: ");
    scanf("%d", &val);
    printf("Fibonacci(%d) = %d", val, fibonacci(val));
    
    int n;
    printf("\nDigite um valor n: ");
    scanf("%d", &n);
    printf("Fibonacci(%d) = %d", n, fibonacci_iterativo(n));


    //"Item C - questão 2"
    int numero; 
    clock_t tempo_inicial, tempo_final;

    printf ("\nDigite n: ");
    scanf("\n%d", &numero);

    for (int i =0; i <= numero; i ++){
        tempo_inicial = clock();
        printf("Fibonacci(%d) = %d", i, fibonacci(i));
        tempo_final = clock();
        printf("O tempo de execucao da funcao eh: %f ms\n", 
            1000*(double)(tempo_final - tempo_inicial)/(double)(CLOCKS_PER_SEC));

        tempo_inicial = clock();
        printf("Fibonacci(%d) = %d", i, fibonacci_iterativo(i));
        tempo_final = clock();
        printf("O tempo de execucao da funcao iterativa eh: %f ms\n\n",
            1000*(double)(tempo_final - tempo_inicial)/(double)(CLOCKS_PER_SEC));
    
    
    }  // item c

    printf("A quantidade de digitos foi: %d", tam_valor(234));

    printf("\nQuandidade de certo valor: %d\n", quanti_num(45647, 4));

    printf("\n%d", permutacao(45647, 44756));

    printf("\n\n%d", sufixo(654, 789654));

    printf("\n\n%d", seg_numero(7561, 98756145));
    return 0;
}



