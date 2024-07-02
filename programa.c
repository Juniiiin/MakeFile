
#include <stdio.h>

int main()
{
   int n, valor, somapares=0, somaimpares=0, qtdimpares=0;
   float media=0;
   
   printf("quantos valores serao digitados: ");
   scanf("%i", &n);
   
   for(int i=1; i<=n; i++){
    printf("digite o valor %i: ", i);
    scanf("%i", &valor);
    
    if(valor%2==0){
        somapares++;
    }
       else{
           somaimpares++;
           media=media+valor;
       } 
   }
    media=media/somaimpares;
   
    printf("foram digitados %i numeros pares.\n", somapares);
    printf("a media dos %i numeros impares é: %.1f \n",somaimpares, media);
   
    return 0;
}
