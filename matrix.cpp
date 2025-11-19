#include <array>
#include <iostream>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void printMatrix(std::array<std::array<int, MAX_COLS>, MAX_ROWS>& m, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void inputMatrix(std::array<std::array<int, MAX_COLS>, MAX_ROWS>& m, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cin >> m[i][j];
        }
    }
}

int main()
{
    std::array<std::array<int, MAX_COLS>, MAX_ROWS> mat;
    int rows = 5;
    int cols = 4;

    std::cout << "Enter " << rows*cols << " numbers for the matrix:" << std::endl;
    inputMatrix(mat, rows, cols);

    std::cout << "Matrix contents:" << std::endl;
    printMatrix(mat, rows, cols);

    return 0;
}
