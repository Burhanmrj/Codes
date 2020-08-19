#include <iostream>
#include<fstream>
using namespace std;
bool rowchecker(int board[9][9], int row, int key) {
	for (int i = 0; i < 9; i++)
	{
		if (board[row][i] == key)
			return false;
	}
	return true;
}
bool colchecker(int board[9][9], int col, int key) {
	for (int i = 0; i < 9; i++)
	{
		if (board[i][col] == key)
			return false;
	}
	return true;
}
bool boxchecker(int board[9][9], int row,int col, int key)
{
	int rows = row - row % 3;
	int cols = col - col % 3;
	for (int i = rows; i < rows+3; i++)
	{
		for (int j = cols; j < cols + 3; j++)
		{
			if (board[i][j] == key)
				return false;
		}
	}
	return true;
}
bool checker(int board[9][9], int row, int col, int key)
{
	if (!rowchecker(board, row, key))
	{
		return false;
	}
	if (!colchecker(board, col, key))
	{
		return false;
	}
	if (!boxchecker(board, row,col, key))
	{
		return false;
	}
	return true;
}
bool sudokoSolver(int board[9][9])
{
	int row = -1;
	int col = -1;
	bool IsEmpty = false;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (board[i][j] == 0)
			{
				row = i;
				col = j;
				IsEmpty = true;
				break;
			}
		}
		if (IsEmpty)
			break;
	}
	if (!IsEmpty)
		return true;
	for (int key = 1; key <=9; key++)
	{
		if (checker(board, row, col, key))
		{
			board[row][col] = key;
			if (sudokoSolver(board))
				return true;
		}
		board[row][col]=0;

	}
	return false;
}
int main()
{
	int board[9][9];
	ifstream myfile;
	myfile.open("F:\Sudoko.txt");
	if (myfile.is_open())
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
				myfile >> board[i][j];
		}
	}


	
	
	
	
	cout<< sudokoSolver(board)<<endl;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}