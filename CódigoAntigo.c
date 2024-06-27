#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// teste

int main() {

    pid_t pid = fork(); 
    int N = 5;
    if (pid < 0) {
        fprintf(stderr, "Falha ao criar o processo filho\n");
        return 1;
    } else if (pid == 0) {
      int numerospares(N);
      printf("Processo filho iniciando impressão de %d números pares:\n", N);
      for (int i = 2; i <= N * 2; i = i + 2) {
        printf("%d ", i);
    }
    printf("\n");
    } else {
        printf("Processo pai terminou sua execução.\n");
    }

    return 0;
}
