#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>
#define MAX_ROW 5
#define MAX_COL 5
using namespace std;
class Rows
{
public:
	int rows[MAX_COL];
};
class Matrix
{
public:
	int rows;
	int columns;
	Rows matrix[MAX_ROW];
	Matrix();
	Matrix multiply(Matrix);
	void display();
};
#endif