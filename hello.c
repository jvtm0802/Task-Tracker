#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contato {
    char nome[50];
    int numero;
    char email[50];
};

void addContato(struct Contato contato[], int *total) {
    int indice = *total;
    printf("Adicionando Contato %d\n", indice + 1);
    //nome
    printf("\nNome:");
    scanf("%s", contato[indice].nome);
    //telefone
    printf("\nNumero de Telefone: ");
    scanf("%d", &contato[indice].numero);
    //email
    printf("\nEmail: ");
    scanf("%s", contato[indice].email);

    (*total)++;
}
int main() {
    struct Contato contato[100];
    int total_contatos;
    
    int escolha;
    printf("O que deseja fazer:\n 1 - Adicionar contato\n2 - Listar contatos\n3 - Editar contato\n");
    scanf("%d", &escolha);
    if(escolha == 1){
    addContato(contato, &total_contatos);

    total_contatos = 0;

    printf("Voce adicionou o contato: %s \n", contato[total_contatos].nome);
    printf("Sua lista de contato tem %d contatos\n",total_contatos + 1);
    }
}