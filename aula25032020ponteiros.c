#include <stdio.h>

main()
{
    char  c1,c2,*pc;
    int   i1,i2,*pi;
    float f1,f2,*pf;

    printf("Endereco da variavel c1 = %x %d\n", &c1, &c1);
    printf("Endereco da variavel c2 = %x %d\n", &c2, &c2);
    printf("Endereco da variavel pc = %x %d\n\n", &pc, &pc);
    printf("Endereco da variavel i1 = %x %d\n", &i1, &i1);
    printf("Endereco da variavel i2 = %x %d\n", &i2, &i2);
    printf("Endereco da variavel pi = %x %d\n\n", &pi, &pi);
    printf("Endereco da variavel f1 = %x %d\n", &f1, &f1);
    printf("Endereco da variavel f2 = %x %d\n", &f2, &f2);
    printf("Endereco da variavel pf = %x %d\n\n", &pf, &pf);

    c1 = 'A';
    pc = &c1;
    printf("\n\nEndereco para onde pc aponta = %x %d\n", pc, pc);
    c2 = *pc;
    printf("\nValor de c2 = %c", c2);

    i1 = 10;
    pi = &i1;
    printf("\n\nEndereco para onde pi aponta = %x %d\n", pi, pi);
    i2 = *pi;
    printf("\nValor de i2 = %d", i2);

    f1 = 20.75;
    pf = &f1;
    printf("\n\nEndereco para onde pf aponta = %x %d\n", pf, pf);
    f2 = *pf;
    printf("\nValor de f2 = %f", f2);

    printf("\nApresentando dados sobre os ponteiros...\n\n");
    printf("Endereco do ponteiro = %x %d\n", &pi, &pi);
    printf("Endereco para onde ponteiro pi aponta = %x %d\n", pi, pi);
    printf("Conteudo de memoria para onde o ponteiro pi aponta = %d\n", *pi);
}
