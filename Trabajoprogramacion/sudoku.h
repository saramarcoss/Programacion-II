#ifndef SUDOKU_H
#define SUDOKU_H
#include<array>
#include<iostream>
using namespace std;

class Sudoku
{
public:
    Sudoku();
    bool EnCol(int col, int num);
    bool EnFila(int fila, int num);
    bool EnRecuadro(int boxStartFila, int boxStartCol, int num);
    void sudokuGrid();
    bool PosVacia(int &fila, int &col);
    bool PosValida(int fila, int col, int num);
    bool solveSudoku();
private:
    array<array<int,9>,9> cuadricula;
};

#endif // SUDOKU_H
