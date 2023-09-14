#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    while (1) {
        int N;
        scanf("%d", &N);

        if (N == 0) {
            break;
        }

        int matriz[N][N];
        int T = (int)log10(pow(2, 2 * (N - 1))) + 1;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                matriz[i][j] = (int)pow(2, i + j);
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%*d", T, matriz[i][j]);
                if (j < N - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
