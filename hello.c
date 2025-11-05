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

    void listContatos(struct Contato contato[], int total) {
        if(total == 0){
            printf("Lista esta vazia, por favor adicione algum contato\n\n\n");
            return;
        }

        for(int i = 0; i < total; i++){
            printf("%d - %d\n", i, contato[i].nome);
        }

    }   
int main() {
    struct Contato contato[100];

    int total_contatos;
    total_contatos = 0;
    while(1){

    int escolha;
    printf("O que deseja fazer:\n 1 - Adicionar contato\n2 - Listar contatos\n3 - Pesquisar contato\n0 - Sair\n\n");
    scanf("%d", &escolha);
    system("cls");
    //add contato
    if(escolha == 1){
    addContato(contato, &total_contatos);
  
    

    printf("Voce adicionou o contato: %s \n", contato[total_contatos].nome);
    printf("Sua lista de contato tem %d contatos\n",total_contatos);
    }

    //sair
      else if(escolha == 0){
        break;
    }

    else if(escolha == 2){
        listContatos(contato, total_contatos);
    }

    }
}