#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char URL[512];
    char wget[512] = "wget -nv -O backup.zip ";
    size_t tamanho;

    printf("Digite o nome da URL: ");
    fgets(URL, sizeof(URL), stdin);
    tamanho = strlen(URL);
    URL[tamanho - 1] = '\0';

    strcat(wget, URL);
    printf("%s\n", wget);

    // TODO: Validar se a URL está correta

    system(wget);
    system("clear"); // Limpa pq o wget gera um output gigantesco

    return 0;
}
