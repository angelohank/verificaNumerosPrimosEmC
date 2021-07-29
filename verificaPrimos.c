#include <stdio.h>
#include <string.h>

int main() {
  
    int i, entrada; 
    int verificaDivisao;
  
    do {
        verificaDivisao = 0;
        scanf("%d", &entrada);

        if (entrada != 0){
            if ((entrada < 2) || (entrada > 100)){
                printf("inválido\n");
            } else {

                for (i = 2; i < entrada; i++){
                    if (entrada % i == 0) {
                        //se o resultado da numero/qualquerOutroNumero for 0, quer a variável auxiliar recebe mais 1
                        verificaDivisao++;
                        break;
                    } 
                }

                //se a variavel auxiliar for maior que 0, quer dizer que o numero foi dividido por algum número e o resultado foi 0, logo, ele nao eh primo
                if (verificaDivisao == 0) {
                    printf("%d primo\n", entrada);
                } else {
                    printf("%d nao primo\n", entrada);
                }
            } 
        }
    } while (entrada != 0);

    return 0;
}
