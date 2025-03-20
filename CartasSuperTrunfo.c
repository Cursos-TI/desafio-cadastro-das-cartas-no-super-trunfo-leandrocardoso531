#include <stdio.h>

#define MAX_CIDADE_LENGTH 100

typedef struct {
    char estado;            
    char codigo[5];         
    char cidade[MAX_CIDADE_LENGTH];  
    int populacao;          
    float area;             
    float pib;              
    int pontos_turisticos;  
} Carta;

void obterDadosCarta(Carta* carta) {

    printf("Informe os dados da carta:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta->estado);

    printf("Código da carta (ex: A01, B03): ");
    scanf("%s", carta->codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]%*c", carta->cidade);  

    printf("População da cidade: ");
    scanf("%d", &carta->populacao);

    printf("Área da cidade (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB da cidade: ");
    scanf("%f", &carta->pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

void exibirCarta(const Carta* carta) {
    
    printf("\nInformações da Carta:\n");
    printf("Estado: %c\n", carta->estado);
    printf("Código da Carta: %s\n", carta->codigo);
    printf("Cidade: %s\n", carta->cidade);
    printf("População: %d\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: R$ %.2f bilhões\n", carta->pib);
    printf("Pontos Turísticos: %d\n", carta->pontos_turisticos);
}

int main() {
    Carta carta1, carta2;

    
    printf("Cadastro da Primeira Carta:\n");
    obterDadosCarta(&carta1);

    printf("\nCadastro da Segunda Carta:\n");
    obterDadosCarta(&carta2);

    
    printf("\n--- Carta 1 ---\n");
    exibirCarta(&carta1);

    printf("\n--- Carta 2 ---\n");
    exibirCarta(&carta2);

    return 0;
