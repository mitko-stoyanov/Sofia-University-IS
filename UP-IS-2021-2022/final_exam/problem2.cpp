#include <iostream>
using namespace std;
 
void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void fixMatrix(int** matrix, int n, int m) {
    int odd;
    int even;
    for (int i = 0; i < m; i++){
        odd = 0;
        even = 0;
        for (int j = 0; j < n; j++){
            if (matrix[j][i] % 2 == 0)
                even++;
            if (matrix[j][i] % 2 == 1)
                odd++;
        }
        if (odd > even) {
            for (int j = 0; j < n / 2; j++){
                Swap(&matrix[j][i], &matrix[n - 1 - j][i]);
            }
        }
        
    }
    if (n == m) {
        for (int i = 0; i < n / 2; i++){
            for (int j = 0; j < n; j++){
                if (i == j)
                    Swap(&matrix[i][j], &matrix[n - 1 - i][n - 1 - i]);
                if((i + j) == (n - 1))
                    Swap(&matrix[i][j], &matrix[j][i]);
            }
        }
    }
 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
 
int main()
{
    int n, m;
    cin >> n >> m;
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++){
        matrix[i] = new int[m];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    fixMatrix(matrix, n, m);
    for (int i = 0; i < n; i++){
        delete[] matrix[i];
    }
    delete[] matrix;
}