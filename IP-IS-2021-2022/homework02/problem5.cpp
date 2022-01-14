#include<iostream>
using namespace std;
const int MAX_SIZE = 100;

void multiplyMatrix(int matrix1[][MAX_SIZE], int row1, int col1, int matrix2[][MAX_SIZE], int row2, int col2, int result[][MAX_SIZE])
{
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col2; j++){
            for (int k = 0; k < col1; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void fillMatrix(int arr[][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }
}

void printMatrix(int arr[][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
            if (arr[i][j] < 10)
                cout << ' ';
        }
        cout << endl;
    }
}

int main()
{
	int firstMatrix[MAX_SIZE][MAX_SIZE];
	int secondMatrix[MAX_SIZE][MAX_SIZE];
	int firstRow, firstCol, secondRow, secondCol;
	cout<<"Number of rows and colums for first matrix: ";
	cin>>firstRow >> firstCol;
	cout<<"Number of rows and colums for second matrix: ";
	cin>>secondRow >> secondCol;

	if (firstCol != secondRow){
		cout << "NO!You can't multiply those matrices!";
	} else{
		cout << "Fill first matrix: ";
		fillMatrix(firstMatrix, firstRow, firstCol);
		cout<<endl;
		printMatrix(firstMatrix, firstRow, firstCol);
		cout<<"--------------------"<<endl;
		cout<<"Fill matrix second matrix: ";
		fillMatrix(secondMatrix, secondRow, secondCol);
		cout << endl;
		printMatrix(secondMatrix, secondRow, secondCol);
		cout<<"--------------------"<<endl;
		int result[MAX_SIZE][MAX_SIZE];
		cout<<"YES!You can multiply those matrices! Result:"<<endl;
		cout<<endl;
		multiplyMatrix(firstMatrix, firstRow, secondRow, secondMatrix, secondRow, secondCol, result);
		printMatrix(result, firstRow, secondCol);
	}
	return 0;
}