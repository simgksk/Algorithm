#include <iostream>

using namespace std;

int Factorial(int a)
{
	if (a == 0)
		return 1;
	else
		return a * Factorial(a - 1);
}

int main()
{
	int n;

	cout << "팩토리얼 값을 구하고 싶은 숫자를 입력하시오 : ";

	cin >> n;

	cout << n << "! = " << Factorial(n);

  retrun 0;
}
