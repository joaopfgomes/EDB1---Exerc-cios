#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

void lerPessoa(struct Pessoa *p) {
    printf("Digite o nome: ");
    fgets(p->nome, 50, stdin);
    p->nome[strcspn(p->nome, "\n")] = '\0'; 

    printf("Digite a idade: ");
    scanf("%d", &p->idade);

    printf("Digite a altura (em metros): ");
    scanf("%f", &p->altura);
}


void exibirPessoa(struct Pessoa p) {
    printf("\nInformações da Pessoa:\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d anos\n", p.idade);
    printf("Altura: %.2f metros\n", p.altura);
}

int main() {
    struct Pessoa pessoa;

    lerPessoa(&pessoa);

    exibirPessoa(pessoa);

    return 0;
}
