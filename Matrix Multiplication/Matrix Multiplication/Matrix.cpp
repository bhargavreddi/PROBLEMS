#include<iostream>
#include"Matrix.h"
using namespace std;
Matrix::Matrix()
{
	rows = 0;
	columns = 0;
}
void Matrix::display()
{
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			cout << matrix[i].rows[j] << " ";
		cout << endl;
	}
	cout << endl;
}
Matrix Matrix::multiply(Matrix b)
{
	Matrix c;
	if (columns != b.rows)
		return c;
	c.rows = rows;
	c.columns = b.columns;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < b.columns; j++)
		{
			c.matrix[i].rows[j] = 0;
			for (int k = 0; k < rows; k++)
			{
				c.matrix[i].rows[j] += matrix[i].rows[k] * b.matrix[k].rows[j];
			}
		}
	}
	return c;
}