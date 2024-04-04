#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class student
{
public:
	string name = "";
	string classnum = "";
	string add = "";
	
	student(string str1, string str2, string str3) : name{ str1 }, classnum{ str2 }, add{ str3 }{};
	
	string getName() { return name; }
	string getAdd() { return classnum; }
	string getRegion() { return add; }

};

bool cmp(student s1, student s2)
{
	return s1.getName() > s2.getName();
}

int main()
{
  string name, classnum, region;
	vector<student>v;
	int n;
	cin >> n;
	while (n--)
	{
		cin >> name >> classnum >> region;
		v.push_back(student(name, classnum, region));
	}
	sort(v.begin(), v.end(), cmp);
	cout << "name: " << v.front().getName() << endl;
	cout << "addr: " << v.front().getAdd() << endl;
	cout << "city: " << v.front().getRegion() << endl;

 return 0;
}
