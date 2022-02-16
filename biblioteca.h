/*Estruturas e funções pra o arquivo estrutura_com_funcao.c*/
#define QTD_MAX_PRATOS 10
#define TAM_MAX_NOME 50
#define NAO_EXISTE -1
typedef struct {
    int codigo;
    char nome[TAM_MAX_NOME + 1];
    float preco;
}tp_prato;
int procura_prato(tp_prato pratos[], int tamanho, int codigo);
int inclui_pratos(tp_prato pratos[], int tamanho);
void exibe_pratos(tp_prato pratos[], int tamanho);
