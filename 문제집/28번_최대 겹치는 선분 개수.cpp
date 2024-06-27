#include <iostream>
#include <map>

using namespace std;

int main()
{
#pragma region 28. 최대 겹치는 선분 개수

	int arr[100] = {};
	int n, start, end;
	cin >> n;


	for (int i = 0; i < n; i++)
	{
		cin >> start >> end;
		for (int j = start; j < end; j++)
		{
			arr[j] += 1;
		}
	}
	int max = arr[0];
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	cout << max;

#pragma endregion
}
