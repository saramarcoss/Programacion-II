#include <iostream>
#include <fstream>
#include<array>

using namespace std;


struct tSudoku{

    int row = 9;
    int col = 9;
    array<array<int,9>,9>grid;

};

bool isPresentInCol(const tSudoku sudoku,int col, int num) {

    bool isPresent = false;
    int row = 0;
    while (!isPresent && row < sudoku.row) {
        if (sudoku.grid[row][col] == num)
            isPresent = true;
        row++;
    }

    return isPresent;
}

bool isPresentInRow(const tSudoku sudoku, int row, int num) {
    bool isPresent = false;
    int col = 0;
    while (!isPresent && col < sudoku.col) {
        if (sudoku.grid[row][col] == num)
            isPresent = true;
        col++;
    }

    return isPresent;
}

bool isPresentInBox(const tSudoku sudoku, int boxStartRow, int boxStartCol, int num) {
//comprueba si el numero esta en el recuadro 3x3
    bool isPresent = false;
    int row = 0, col = 0;

    while (!isPresent && row < 3) {

        while (!isPresent && col < 3) {

            if (sudoku.grid[row + boxStartRow][col + boxStartCol] == num)
                isPresent = true;
            col++;
        }
        row++;
    }
    return isPresent;

}

void sudokuGrid(const tSudoku sudoku) {

    for (int row = 0; row < sudoku.row; row++) {
        for (int col = 0; col < sudoku.col; col++) {
            if (col == 3 || col == 6)
                cout << " | ";
            cout << sudoku.grid[row][col] << " ";
        }
        if (row == 2 || row == 5) {
            cout <<"\n";
            for (int i = 0; i < 9; i++)
                cout << "---";
        }
        cout <<"\n";
    }
}

bool findEmptyPlace(const tSudoku sudoku, int& row, int& col) {

    bool found = false;
    row = 0;
    while (!found && row < sudoku.row) {
        col = 0;
        while (!found && col < sudoku.col) {

            if (sudoku.grid[row][col] == 0) //las que tienen 0 estan vacias
                found = true;
            else {
                col++;
            }
        }
        if(!found)
        row++;
    }
    return found;
}

bool isValidPlace(const tSudoku sudoku, int row, int col, int num) {

    return !isPresentInRow(sudoku,row, num) && !isPresentInCol(sudoku,col, num) && !isPresentInBox(sudoku,row - row % 3, col - col % 3, num);
}


bool solveSudoku(tSudoku& sudoku){

   int row, col;
   if (!findEmptyPlace(sudoku,row, col))
      return true;
   for (int num = 1; num <= 9; num++){
    if (isValidPlace(sudoku,row, col, num)){
         sudoku.grid[row][col] = num;
         if (solveSudoku(sudoku))
            return true;
         sudoku.grid[row][col] = 0;
      }
   }
   return false;
}

bool readFile(tSudoku &sudoku) {

    cout<<"Introduce la ruta del archivo donde esta guardado el sudoku: \n";
    string ruta;
    cin>>ruta; //"C:/Users/saram/Documents/Sud.txt"
    ifstream infile(ruta);
    bool ok = infile.is_open();
    if (!ok) {
        cout << " No se ha podido leer\n";
    }
    else {
        for (int row = 0; row < 9; row++)
        {
            for (int col = 0; col < 9; col++)
            {
                infile >> sudoku.grid[row][col];
            }
        }
    }
    return ok;
}

int main() {

    tSudoku sudoku;

    if (readFile(sudoku)) {
        cout << "El sudoku a resolver es: \n";
        sudokuGrid(sudoku);

        if (solveSudoku(sudoku)){
       cout << "\nEl sudoku resuelto es: \n";
            sudokuGrid(sudoku);
        }else
            cout << "No hay solucion";
    }

}
