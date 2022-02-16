#include <stdio.h>
#include <stdlib.h>

#define TAM 8

typedef unsigned char byte;

void decifrador(byte *bloco, byte *chave, int nBytes);

main()
{
  byte blocoBytes[TAM], chaveDecifragem[TAM];
  FILE *arquivoEntrada,*arquivoSaida;
  char nomeArquivoCifrado[30], nomeArquivoDecifrado[30];
  int totalBytesLidos;

  printf("Entre com o nome do arquivo criptografado = ");
  scanf("%s", &nomeArquivoCifrado);
  getchar();
  printf("Entre com o nome do arquivo para descriptograr = ");
  scanf("%s", &nomeArquivoDecifrado);
  getchar();

  printf("Entre com uma senha de 8 digitos = ");
  scanf("%s", &chaveDecifragem);
  getchar();
  fflush(stdin);

  arquivoEntrada = fopen(nomeArquivoCifrado,"rt");
  arquivoSaida = fopen(nomeArquivoDecifrado,"wt");

  do
  {
    totalBytesLidos = fread(blocoBytes,1,TAM,arquivoEntrada);
    if (totalBytesLidos!=0)
    {
      decifrador(blocoBytes,chaveDecifragem,totalBytesLidos);
      fwrite(blocoBytes,totalBytesLidos,1,arquivoSaida);
    }
  } while(!feof(arquivoEntrada));

  fclose(arquivoEntrada);
  fclose(arquivoSaida);

  printf("\n\nDecifragem realizada com sucesso... Verifique o arquivo decifrado!");
  getchar();
}

void decifrador(byte *bloco, byte *chave, int nBytes)
{
  int i;
  for(i=0; i < nBytes; i++)
  {
    bloco[i] = bloco[i] - (chave[i]);
  }
}
