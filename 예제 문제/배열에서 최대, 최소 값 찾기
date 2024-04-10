#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int list[10] = {};
	int max = 0;
	int min = 100;


	for (int& elem : list)
	{
		elem = rand() % 100 + 1;
		cout << elem << " ";

		if (max <= elem)
			max = elem;
		if (min >= elem)
			min = elem;
	}
	cout << "\n";

	cout << max << " " << min;

  return 0;
}
