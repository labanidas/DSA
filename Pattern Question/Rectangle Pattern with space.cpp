#include <iostream>
using namespace std;

int main()
{

	cout << "Enter row and column: " << endl;
	int row, col;
	cin >> row >> col;

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		if(c==0 || c==col-1 || r==0 || r== row-1)	cout << "* ";
		else cout<<"  ";

		cout << endl;
	}
}


