#include <stdio.h>
#include <stdlib.h>


int palindromo(int num){
    int aux = num, reverso = 0;

    for (int i=0; i=aux; i++){
        reverso = reverso + aux % 10;  
        reverso = reverso * 10;
        aux = aux / 10;                
    }


    if (num == reverso/10)
        return 1;
    else
        return 0;

}



int binario(int val){
    int exp = 0, dec = 0;

    for (int i = 0; i=val; i++){
        dec = dec + (val % 10)*pow(2.0, exp);        
        exp++;
        val  =  val / 10;
    }
    
    return dec;
}

int main(){
    printf("%d", palindromo(123321));
    printf("\n%d", binario(101));
}