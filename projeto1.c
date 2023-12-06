#include <stdio.h>

int main() {

    int vec[8];
    int tam = sizeof(vec)/ sizeof(vec[0]);
    int temp = 0;

  for (int i = 0; i < tam; i++) {
    printf("Entre com um inteiro para vetor[8]: ");
    scanf("%d", &temp);
    vec[i] = temp;
  }

    printf("\n\nVetor inicial:\n");

    for (int i = 0; i < tam; i++) {
        printf("%d ", vec[i]);
    }

    printf("\n\nVetor depois da ordenação:\n");

    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }


    for (int i = 0; i < tam; i++) {
        printf("%d ", vec[i]);
    }

  system("pause");

    return 0;
}
