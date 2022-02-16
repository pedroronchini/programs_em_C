#include <stdio.h>
#include <stdlib.h>

#define TAM 8

typedef unsigned char byte;

void cifrador(byte *bloco,byte *chave, int nBytes);

main()
{
  byte blocoBytes[TAM], chaveCifragem[TAM];
  FILE *arquivoEntrada,*arquivoSaida;
  char nomeArquivoEntrada[30], nomeArquivoSaida[30];
  int  totalBytesLidos;

  printf("Entre com o nome do arquivo original = ");
  scanf("%s", &nomeArquivoEntrada);
  getchar();
  printf("Entre com o nome do arquivo para criptografia = ");
  scanf("%s", &nomeArquivoSaida);
  getchar();
  printf("Entre com uma chave de 8 digitos = ");
  scanf("%s", &chaveCifragem);
  getchar();
  fflush(stdin);

  arquivoEntrada  = fopen(nomeArquivoEntrada,"rt");
  arquivoSaida = fopen(nomeArquivoSaida,"wt");
  do
  {
    totalBytesLidos = fread(blocoBytes,1,TAM,arquivoEntrada);
    if(totalBytesLidos!=0)
    {
      cifrador(blocoBytes,chaveCifragem, totalBytesLidos);
      fwrite(blocoBytes,totalBytesLidos,1,arquivoSaida);
    }
  } while(!feof(arquivoEntrada));

  fclose(arquivoEntrada);
  fclose(arquivoSaida);

  printf("\n\nCriptografia realizada com sucesso... Verifique o arquivo criptografado!");
  getchar();
}

void cifrador(byte *bloco,byte *chave, int nBytes)
{
  int i;
  for(i=0; i < nBytes; i++)
  {
    bloco[i] = bloco[i] + chave[i];
  }
}
