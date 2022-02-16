#include <stdio.h>
#include <windows.h>

typedef struct
{
    char nomeSensor[30];
    int id;
    float medida;
}sensor;

int main()
{
    FILE *arquivo, *arqTemp;
    sensor dados;
    int identificador;

    arquivo = fopen("arquivos.dat","rb+");
    if(arquivo == NULL)
    {
        printf("Arquivo nao encontrado...\n\n");
        exit (1);
    }
    arqTemp = fopen("arqTemporario.dat","wb+");
    if(arqTemp == NULL)
    {
        printf("erro ao criar arq temporario");
        exit (1);
    }

    printf("Arquivo aberto para remocao de registros\n\n");
    printf("Informe o ID do sensor: ");
    scanf("%d", &identificador);

    while(!feof(arquivo))
    {

        fread(&dados,sizeof(sensor),1,arquivo);

        if(!feof(arquivo) && dados.id != identificador)
        {
            fseek(arqTemp,0*sizeof(sensor),SEEK_END);
            fwrite(&dados,sizeof(sensor),1,arqTemp);
        }

    }
    printf("\nRegisto de codigo %d removido com sucesso!!\n", identificador);

    fclose(arqTemp);
    fclose(arquivo);

    remove("arquivos.dat");
    rename("arqTemporario.dat","arquivos.dat");


    return 0;

}
