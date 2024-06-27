#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	// 풀이 1
  	int grid[4][4] = { {} };
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> grid[i][j];

			if (i >= j)
				sum += grid[i][j];
		}
	}
 
	cout << sum;

	// 풀이 2
	int arr[4][4] = { {} };
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (arr[i][j])
				sum += arr[i][j];
		}
	}

	cout << sum;

  return 0;
}
