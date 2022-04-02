#include "sudoku.h"

Sudoku::Sudoku()
{

}

bool Sudoku::EnCol(int col, int num)
{
    for (int fila = 0; fila < 9; fila++)
       if (cuadricula[fila][col] == num)
          return true;
    return false;
}

bool Sudoku::EnFila(int fila, int num)
{
    for (int col = 0; col < 9; col++)
       if (cuadricula[fila][col] == num)
          return true;
    return false;
}

bool Sudoku::EnRecuadro(int boxStartFila, int boxStartCol, int num)
{
    for (int fila = 0; fila < 3; fila++)
       for (int col = 0; col < 3; col++)
          if (cuadricula[fila+boxStartFila][col+boxStartCol] == num)
             return true;
    return false;
}

void Sudoku::sudokuGrid()
{
    for (int fila = 0; fila < 9; fila++){
       for (int col = 0; col < 9; col++){
          if(col == 3 || col == 6)
             cout << " | ";
          cout << cuadricula[fila][col] <<" ";
       }
       if(fila == 2 || fila == 5){
          cout << endl;
          for(int i = 0; i<9; i++)
             cout << "---";
       }
       cout << endl;
    }
}

bool Sudoku::PosVacia(int &fila, int &col)
{
    for (fila = 0; fila < 9; fila++)
       for (col = 0; col < 9; col++)
          if (cuadricula[fila][col] == 0) //marked with 0 is empty
             return true;
    return false;
}

bool Sudoku::PosValida(int fila, int col, int num)
{
    //when item not found in col, row and current 3x3 box
    return !EnFila(fila, num) && !EnCol(col, num) && !EnRecuadro(fila - fila%3 ,col - col%3, num);
}

bool Sudoku::solveSudoku()
{
    int fila, col;
    if (!PosVacia(fila, col))
       return true; //when all places are filled
    for (int num = 1; num <= 9; num++){ //valid numbers are 1 - 9
       if (PosValida(fila, col, num)){ //check validation, if yes, put the number in the grid
          cuadricula[fila][col] = num;
          if (solveSudoku()) //recursively go for other rooms in the grid
             return true;
          cuadricula[fila][col] = 0; //turn to unassigned space when conditions are not satisfied
       }
    }
    return false;
}
