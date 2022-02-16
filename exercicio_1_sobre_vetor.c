/*Separa um vetor de clientes em duas filas para atendentes
 * para clientes do sexo masculino(0) e feminino(1)
 */
 #include <stdio.h>
 #define TAMANHO_FILA 20
 #define HOMEM 0
 #define MULHER 1
 int main()
 {
     int cliente[TAMANHO_FILA], homens[TAMANHO_FILA], mulheres[TAMANHO_FILA];
     int i, h = 0, m = 0;
     for(i = 0; i < TAMANHO_FILA; i++){
        printf("\nEntre com o sexo do cliente %d (0-homens,1-mulheres): ", i +1);
        do{
            scanf("%d", &cliente[i]);
            getchar();
            if((cliente[i] != 0)&& (cliente[i] != 1)){
                printf("\nSexo do cliente invalido!");
            }
        }while((cliente[i] != 0)&& (cliente[i] != 1));
     }
     for(i = 0; i < TAMANHO_FILA; i++){
        if(cliente[i] == HOMEM){
            homens[h] = i;
        h++;
        }
        else{
            mulheres[m] = i;
            m++;
        }
     }
        printf("\nFila do atendente masculino: ");
        for(i = 0; i < m; i++){
            printf("\n%d", mulheres[i]);
        }
        printf("\nFila da atendente Feminino: ");
        for(i = 0; i < h; i++){
            printf("\n%d", homens[i]);
        }

        getchar();
        return 0;


 }
