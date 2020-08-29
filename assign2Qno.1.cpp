#include<iostream>
using namespace std;
void square(int row, int colum)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			if (i == 0)
			{cout << "*";}
			else if (i == row - 1)
			{
				cout << "*";
			} else if (j == 0 )
			{
				cout << "*";
			} else if ( j == colum - 1)
			{
				cout << "*";

			} else {
				cout << " ";
			}

		}
		cout << "\n";
	}


}
void circle(int row, int colum) {
	int maxr = row / 2;
	maxr = row - maxr;
	int maxc = colum / 2;
	int firstblock  = colum - maxc - maxc / 2 - 1;//to find 1st block in 1st row where we should start priting the patter gt
	int lastblock = firstblock + maxc - 1;
	int firstleft = row - maxr - maxr / 2 ;//to find the 1st block colum wise to print * gt
	int lastleft = firstleft + maxr - 1;
	int anurag1 = firstblock - 1;
	int anurag2 = lastblock + 1;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			if (i == 0 || i == row - 1)
			{
				if (j >= firstblock && j <= lastblock)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			} else if (i == 1 || i == row - 2)
			{
				if ( j == anurag2 || j == anurag1)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			} else {
				if (i >= firstleft && i <= lastleft)
				{
					if (j == 0 || j == colum - 1)
					{
						cout << "*";
					} else {
						cout << " ";
					}
				}
			}

		}
		cout << "\n";
	}

}
void arrow(int row, int colum)
{
	int midrow = colum / 2 ;

	int secondblock = midrow + 2;
	int secondlastblock = midrow + 2;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{

			if (i == 1) {
				if ( j == midrow - 1)
				{
					cout << "*";
				}
			}
			if (i == 2)
			{	if ( j == midrow - 1)
				{
					cout << "*";
				}
				if ( j == midrow - 2)
				{
					cout << "*";
				}


			}
			if (j == midrow )
			{
				cout << " *";
			}
			else {
				cout << " ";
			}

			if (i == 1)
			{

				if ( j == midrow + 1)
				{
					cout << "*";
				}
			}
			if (i == 2)
			{	if ( j == midrow + 1)
				{
					cout << "*";
				}
				if ( j == midrow + 2)
				{
					cout << "*";
				}


			}

		}
		cout << "\n";
	}


}
void anurag(int row ,int colum)
{
	int midline = row / 2;
	int consti = row * 1.4;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			if (i == 0 || i == row - 1)
			{
				if (j == midline)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			}
			else {

				if (j == midline - i || j == midline + i)
				{
					cout << "*";
				} else if (i - j == midline)
				{
					cout << "*";

				}
				else if (i + j == consti)
				{
					cout << "*";

				}
				else {
					cout << " ";

				}
			}
		}
		cout << "\n";
	}

}

int main()
{


	int row, colum;
	cout << "enter number of rows and Column of sqaure \n";
	cin >> row >> colum  ;
	square(row, colum);
	int row1, colum1;
	cout << "enter number of rows and Column of Circle \n";
	cin >> row1 >> colum1  ;
	circle(row1, colum1);

	int row2, colum2;
	cout << "enter number of rows and Column of Arrow \n";
	cin >> row2 >> colum2  ;
	arrow(row2, colum2);

	int row3, colum3;
	cout << "enter number of rows and Column of Dimond \n";
	cin >> row3 >> colum3  ;
	anurag(row3, colum3);
	return 0;
}
