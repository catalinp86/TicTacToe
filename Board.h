#pragma once

const int MAX_SIZE = 15;
class Board
{
public:
	Board();
	char getEntry(int row, int col);
	void setEntry(int row, int col, char entry);
	void setSize(int size);
	int getSize();
private:
	char _board[MAX_SIZE][MAX_SIZE];
	int _size;
};