#include<iostream>
using namespace std;
const int MAX_SIZE = 60;

int findFactorial(int number)
{
    if(number > 1){
        return number * findFactorial(number - 1);
    }
    return 1;
}

void fillMatrix(int arr[MAX_SIZE][MAX_SIZE], int n, int k)
{
    int temp = k;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if ((i+j) == n-1){
                arr[i][j] = temp;
                temp++;
            } else{
                arr[i][j] = 0;
            }
        }
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i+j == n){
                int p = k+i;
                arr[i][j] = findFactorial(p);
            }
        }
    }
}

void printMatrix(int arr[][MAX_SIZE], int rows)
{
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < rows; j++){
            cout << arr[i][j] << " ";
            if (arr[i][j] < 10)
                cout << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE], n, k;
    cout << "Enter N = ";
    cin >> n;
    if (n < 1 || n > 100)
        do
        {
            cout << "Invalid value! Enter N: ";
            cin >> n;
        } while (n < 1 || n > 100);
    cout<<"Enter k = ";
    cin >> k;
    fillMatrix(matrix, n, k);
    cout<<"The result: "<<endl;
    printMatrix(matrix, n);
    return 0;
}