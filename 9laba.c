// #include <stdio.h>
// #define ADD(a, b) a+b


// struct test {
//     int re;
//     float im;
// };
// int main() {
//     struct test *t;
//     t->im = 6;
// }
#include <stdio.h>
int main() {
    int N = 6;
    int matrix[6][6] = {
        {1, 2, 3, 0, 5, 6},
        {1, 0, 3, 4, 5, 6},
        {1, 0, 3, 4, 5, 6},
        {0, 0, 3, 4, 5, 6},
        {1, 2, 0, 4, 5, 6},
        {1, 2, 3, 4, 5, 6}};
    int n = 1;
    //[i][j] <=> [j][i]
    for (int i = N - 1; i != -1; i--) {
        if (matrix[0][i] == 0) {
            break;
        }
        n++;
    }
    if (n > 1) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int t = matrix[i][N - n + j];
                matrix[i][N - n + j] = matrix[j][N - n + i];
                matrix[j][N - n + i] = t;
            }
        }
    }
    printf("Транспонирование\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }
    printf("Нулей: %d\n", count);
    if (count > N) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][j] = count;
                }
            }
        }
    }
    printf("Итог\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
