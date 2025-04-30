#include <stdio.h>
#include <string.h>

void trocar(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permutacoes(char *str, int inicio, int fim) {
    if (inicio == fim) {
        printf("%s\n", str);
        return;
    }
    
    for (int i = inicio; i <= fim; i++) {
        trocar(&str[inicio], &str[i]);
        
        permutacoes(str, inicio + 1, fim);
        
        trocar(&str[inicio], &str[i]);
    }
}

void gerar_permutacoes(char *str) {
    permutacoes(str, 0, strlen(str) - 1);
}

int main() {
    char str[100];
    
    printf("Digite uma string: ");
    scanf("%99s", str);

    printf("Permutações de '%s':\n", str);
    gerar_permutacoes(str);
    
    return 0;
}
