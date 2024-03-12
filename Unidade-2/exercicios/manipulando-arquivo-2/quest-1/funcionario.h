/*Definição do novo tipo: funcionario*/
typedef struct Funcionario {
    int idade;
    char nome[30];
    float salario;
    
}funcionario;

/* Função que aloca memória dinamicamente para para um struct aluno,
recebe dados do funcionário via teclado e retorna um ponteiro para funcionario
*/
funcionario *preenche(void);

/*Função que realiza o cadastro de N funcionários*/
funcionario *cadastro_funcionario (int num_funcionarios);

/* Função que imprime na tela os funcionarios cadastrados*/
void imprime(funcionario *empregado);

/* Função que abre um arquivo e imprime nele os dados dos funcionarios cadastrados*/
void imprime_no_arquivo(funcionario *funcionarios, int num_funcionarios);