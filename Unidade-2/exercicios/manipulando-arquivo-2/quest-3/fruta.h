/*Definição de um novo tipo: Fruta */
typedef struct fruta{

    char nome [30];
    float preco;
}Fruta;

/* Função que aloca memória dinâmicamente para uma struct Fruta,
recebe os dados da fruta via teclado e retorna um ponteiro para Fruta*/
Fruta *preenche(void);

/* Função que realiza o cadastro de uma quantidade de frutas*/
Fruta *cadastra_fruta(int *num_frutas);

/* Função que abre um arquivo e imprime nele os dados das frutas cadastradas*/
void imprime_arquivo (Fruta *fruto, int num_alunos);