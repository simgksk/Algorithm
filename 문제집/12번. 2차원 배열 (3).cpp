#include <iostream>
#include <string>

using namespace std;

int main()
{
	int arr[100][100];
	int n, m;
	int cnt = 0;

	cin >> n >> m;

	for (int j = 0; j < m; j++) //열
	{
		if (j % 2 == 0)
		{
			for (int i = 0; i < n; i++) //행
			{
				arr[i][j] = cnt++;
			}
		}
		else
		{
			for (int i = n-1; i >= 0; i--) //행
			{
				arr[i][j] = cnt++;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j];
		}
		cout << "\n";
	}

	return 0;
}
