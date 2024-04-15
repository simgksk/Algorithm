#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
	string s2;

	int res1 = 0;
	int res2 = 0;

	cin >> s1 >> s2;

	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] >= '0' && s1[i] <= '9')
			res1 = res1 * 10 + (s1[i] - '0');
	}
	
	for (int i = 0; i < s2.length(); i++)
	{
		if (s2[i] >= '0' && s2[i] <= '9')
			res2 = res2 * 10 + (s2[i] - '0');
	}

	cout << res1 + res2;

  return 0;
}
