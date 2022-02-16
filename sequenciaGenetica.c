#include <stdio.h>
#include <stdlib.h>
main()
{
    FILE *arquivo;
    char sequencia[4]="TAC";
    char codon[4], rna[4];
    int  contadorSequencias=0, i;

    printf("Abrindo a ponte com o arquivo no disco...\n");
    arquivo = fopen("c:/temp/sequenciagenetica.txt", "rt");
    if (arquivo == NULL)
    {
        printf("Arquivo nao encontrado...\n\n");
        exit(1);
    }

    i=0;
    while (!feof(arquivo))
    {
        codon[i] = fgetc(arquivo);

        if (codon[i] == 'T')
            rna[i] = 'A';
        if (codon[i] == 'C')
            rna[i] = 'G';
        if (codon[i] == 'G')
            rna[i] = 'C';
        if (codon[i] == 'A')
            rna[i] = 'U';

        i++;
        if (i == 3)
        {
            codon[i] = '\0';
            rna[i] = '\0';
            i = 0;
            printf("Codon = %s\n", codon);
            printf("RNA = %s\n", rna);
            if (strcmp(codon,sequencia) == 0)
                contadorSequencias++;
        }
    }

    printf("Sequencias encontradas = %d", contadorSequencias);
    fclose(arquivo);
}
