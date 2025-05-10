// задание на троечку хныкхнык
#include <stdio.h>
// матрица 2*2
float determinant2x2(float matrix[2][2]) {
    return matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
}
// матрица 3*3
float determinant3x3(float matrix[3][3]) {
    return matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1])-matrix[0][1]*(matrix[1][0]*matrix[2][2]-matrix[1][2]*matrix[2][0])+matrix[0][2]*(matrix[1][0]*matrix[2][1]-matrix[1][1]*matrix[2][0]);
}
int main() {
    int N;
    printf("Введите размер matrix(2 или 3): ");
    scanf("%d", &N);
    float matrix[N][N];
    printf("Введите элементы matrix (%dx%d):\n", N, N);
    for (int i=0; i<N;i++) {
        for (int j=0; j<N; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }
    printf("MATRIX:\n");
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }
    float opr;
    if (N==2) {
        opr=determinant2x2(matrix);
    }else if (N==3) {
        opr=determinant3x3(matrix);
    }
    printf("Определитель matrix: %2.f\n", opr);
    return 0;
}
