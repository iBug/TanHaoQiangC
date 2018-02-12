// File: 6.7.c
// Author: TaoKY

// Limitation: odd number only
#include <stdio.h>
#include <string.h>

void printMatrix (int n, int matrix[n][n]);

int main(void) {
    int n;
    scanf("%d", &n);
    int magic[n][n];
    memset(magic, 0, sizeof(magic));
    int posx = 0, posy = n / 2;
    for (int i = 1; i <= n * n; i++) {
        magic[posx][posy] = i;
        int orix = posx, oriy = posy;
        posy++; posx--;
        if (posx < 0) posx = n - 1;
        if (posy >= n) posy = 0;
        if (magic[posx][posy]) posx = orix + 1, posy = oriy;  
    }
    printMatrix(n, magic);
    
    return 0;
}

void printMatrix (int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d%c", matrix[i][j], j == n - 1 ? '\n' : ' ');
        }
    }
}
