#include<iostream>
#include"Matrix.h"
#define MAX 1
using namespace std;
int  isCompare(Matrix actual, Matrix expected)
{
	if (actual.rows != expected.rows || actual.columns != expected.columns)
		return 0;
	for (int i = 0; i < actual.rows; i++)
		for (int j = 0; j < actual.columns; j++)
			if (actual.matrix[i].rows[j] != expected.matrix[i].rows[j])
				return 0;
	return 1;
}
void testcase()
{
	//Declaration of Matrix
	//TEST CASE 1
	Matrix test1_a;
	test1_a.rows = 3;
	test1_a.columns = 3;
	test1_a.matrix[0] = { { 2, 3, 1 } };
	test1_a.matrix[1] = { { 1, 2, 1 } };
	test1_a.matrix[2] = { { 1, 4, 6 } };
	Matrix test1_b;
	test1_b.rows = 3;
	test1_b.columns = 3;
	test1_b.matrix[0] = { { 1, 0, 0 } };
	test1_b.matrix[1] = { { 0, 1, 0 } };
	test1_b.matrix[2] = { { 0, 0, 1 } };
	Matrix test1_c;
	test1_c.rows = 3;
	test1_c.columns = 3;
	test1_c.matrix[0] = { { 2, 3, 1 } };
	test1_c.matrix[1] = { { 1, 2, 1 } };
	test1_c.matrix[2] = { { 1, 4, 6 } };
	Matrix input1[MAX] = { test1_a };
	Matrix input2[MAX] = { test1_b };
	Matrix output[MAX] = { test1_c };
	for (int i = 0; i < MAX; i++)
	{
		Matrix result = input1[i].multiply(input2[i]);
		if (isCompare(result, output[i]))
			cout << "PASS" << endl;
		else
			cout << "FAIL" << endl;
	}
}
void main()
{
	testcase();
	return;
}