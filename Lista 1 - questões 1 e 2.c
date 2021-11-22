#include <stdio.h>


    int main(){

    int N, SOMA=0;
    printf("Digite um numero: " );
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        printf("%d ", i);
        SOMA = SOMA + i;
    };

    printf("\n%d", SOMA);

    //item a - questão 1

    
  
    int n, s = 0;
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    for(int i=0; i < n; i++){
        printf("%d ", 2 * i);
        s = s + 2*i;
    }
    printf("\nSoma = %d", s);
    // item b - questão 1

    
    int val, soma=0;
    printf("\nDigite um numero: ");
    scanf("%d", &val);
    for (int i = 0; i < 2*val; i++){
    	if (i % 2 == 1){
    		printf("%d ", i);
            soma = soma + i;
    	}
    }printf("\nSoma = %d", soma);
    // item c - questão 1

   

    int num, m;
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num);
    printf("Digite o segundo numero: ");
    scanf("%d", &m);
    if (num % m == 0){
        printf("%d eh divisivel por %d \n", num, m); 
    }else{
        printf("%d nao eh divisivel por %d \n", num, m); // item a - questão 2
    }


    int valor1;
    printf("Digite um numero: ");
    scanf("%d", &valor1);

    for(int i=1; i <= valor1; i++){
        if(valor1%i==0){
        printf("%d ", i);
        }
    } //item b - questão 2

    int valor2, add=0;
    printf("\nDigite um numero: ");
    scanf("%d", &valor2);

    for(int i=1; i < valor2; i++){
        if(valor2%i==0){
        printf("%d ", i);
        add = add + i;
        }
    }
        if (add = valor2){
            printf("\neh perfeito");
        }else{
            printf("\nnao eh perfeito");
    }
     // item c - questão 2


    int numero, adicionar = 0;
    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    for (int digito = 2; digito < numero; digito++){
        if (numero % digito == 0){
            printf("%d ", digito);
            adicionar = adicionar + digito;
            
        }
    }

    if (adicionar == 0){
        printf("\neh um numero primo ");
    }
    else{
        printf("\nnao eh um numero primo "); 
    }
    // item d - questão 2

    
    return 0; 
}


