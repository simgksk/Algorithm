#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n, m;
	int grid_1[100][100] = { {} };
	int grid_2[100][100] = { {} };

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> grid_1[i][j];
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> grid_2[i][j];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (grid_1[i][j] == grid_2[i][j])
				cout << "0 ";
			else
				cout << "1 ";
		}
		cout << "\n";
	}

	return 0;
}
