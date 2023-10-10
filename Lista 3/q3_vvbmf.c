#include <stdio.h>
#include <math.h>

int main() {
    int c;
    scanf("%d", &c);

    while (c) {
        c--;
        int n;
        scanf("%d", &n);
        int x, y;
        scanf("%d %d", &x, &y);
        double perto = 999999999.0;
        int pos = -1;

        for (int cont = 0; cont < n; cont++) {
            int xb, yb;
            scanf("%d %d", &xb, &yb);
            double d = sqrt(pow(abs(x - xb), 2) + pow(abs(y - yb), 2));
            if (d < perto) {
                perto = d;
                pos = cont + 1;
            }
        }

        printf("%d\n", pos);
    }

    return 0;
}