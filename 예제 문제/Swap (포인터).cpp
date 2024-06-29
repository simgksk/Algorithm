#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void Swap1(int *a, int *b) 
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
  int x = 1;
	int y = 3;

	cout << x << " " << y << "\n";

	Swap1(&x, &y);

	cout << x << " " << y << "\n";

	return 0;
}
