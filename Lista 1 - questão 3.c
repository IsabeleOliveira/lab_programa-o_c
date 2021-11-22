#include<stdio.h>

int main() {
    
    /*
    int x = 0, y = 0, par = 0;
    printf("Insira o primeiro numero: ");
    scanf("%d", &x);
    printf("Insira o segundo numero: ");
    scanf("%d", &y);
    if (y <= x) {
        printf("O segundo não pode ser maior que primeiro numero\n");
        return 0;
    }
    for (int cont = x; cont <= y; cont++) {
        if (cont % 2 == 0) par += cont;
    
    }
    printf("A soma dos numeros pares nesse intervalo eh %d\n", par); //item a - questão 3

    int a, b, soma=0, somatotal=0;
    printf("Insira o primeiro numero: ");
    scanf("%d", &a);
    printf("Insira o segundo numero: ");
    scanf("%d", &b);
        for (a = x; a <= y; a++){
        soma = 0;
        for(b = 1; b < a; b++){
            if(a%b == 0){
                soma = soma + b;
            }
        }
        if(soma == a){
            somatotal = somatotal + a;
        }
    }  
    
    printf("A soma dos numeros perfeitos nesse intervalor eh %d\n", somatotal); //item b - questão 3

    int num1, num2, count=1, i=0, X=0;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um segundo numero: ");
    scanf("%d", &num2);

    while(num1 <= num2){
        while (count <= num1){
            if(num1 % count == 0){
                if(count != 1 && count != num1){
                    i = i + 1;
                }
            }
            count += 1;
        }
        if(i == 0){
            X = X + num1;
        }
        num1 = num1 + 1;
        i = 0;
        count = 1;
    }
    printf("A soma dos numeros primos nesse intervalor eh %d\n", X); //item c - questão 3
    


    int i, n = 0, s = 0, cont = 1;


    printf("Digite n: ");
    scanf("%d", &n);

    for (i = 2; cont<=n; i++){
        s = 0;
        for(int j = 2; j<i; j++){
            if (i%j == 0){
                s = s + i;
            }
        }
        if (s == 0){
            for (int j = 2; j < i+2; j++){
                if ((i + 2)%j == 0){
                    s = s + i+2;
                }
            }
            if(s == 0){
                printf("%d %d\n", i, i+2);
                cont++;
            }
        }
    }   // questao 4

    */
    
    int num; 
    float s = 0;
    
    printf("Digite n: ");
    scanf("%d", &num);

    for (int k = 1; k<=num; k++){
        printf(" 1/%d +\n", k);
        s = s + 1.0/(float)k;
    }

    printf("\nH%d = %.3f", num, s);

    return 0;
}
