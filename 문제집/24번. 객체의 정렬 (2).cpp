#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student_Information
{
public:
	int height, weight, num;

	Student_Information(int h, int w, int n)
		: height{ h }, weight{ w }, num{ n }{};

	bool operator <(const Student_Information& s2)
	{
		if (height != s2.height)
			return height > s2.height;

		else if (weight != s2.weight)
			return weight > s2.weight;
	}
};

int main()
{
	int n;

	cin >> n;
	
	vector<Student_Information> v;

	for (int i = 1; i <= n; i++)
	{
		int height, weight;
		cin >> height >> weight;
		v.push_back(Student_Information(height, weight, i));
	}
	
	sort(v.begin(), v.end()); //sort는 operator <

	for (int i = 0; i < n; i++)
	{
		cout << v[i].height << " " << v[i].weight << " " << v[i].num << "\n";
	}
}
