#include <iostream>
using namespace std;

int main()
{
	
		int row= 10, col = 10;
	
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < row-r; c++)
		cout << '*';

		cout << endl;
	}
}
