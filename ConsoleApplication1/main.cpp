#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
class ReverseEqual {
public:
	static bool checkReverseEqual(string s1, string s2) {
		// write code here
		int len1 = s1.length();
		int len2 = s2.length();
		if (len1 == 0 || len2 == 0 || len1 != len2)
			return false;
		string str = s1 + s1;
		if (str.find(s2) == -1)
			return false;
		return true;
	}
};

class MySort
{
public:
	bool operator()(int a, int b)
	{
		return a > b;
	}
};
class MyPrint
{
public:
	void operator()(int a)
	{
		cout << a << " ";
	}

};
int main()
{
	bool str = ReverseEqual::checkReverseEqual("waterbottle","erbottlewat");
	//cout << str << endl;
	set<int,MySort> se;
	se.insert(2);
	se.insert(8);
	se.insert(6);
	se.insert(10);
	se.insert(4);

	//for_each(se.begin(),se.end(),MyPrint());
	for (set<int>::iterator it = se.begin(); it != se.end(); it++)
	{
		cout << *it << " ";
	}
	set<int>::iterator it2 = se.find(10);
	//cout << *it2 << endl;
	cout << endl;
}