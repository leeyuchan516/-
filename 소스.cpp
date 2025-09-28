#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	string a, b, s;

	cin >> a >> b;

	if (a.size() < b.size() || (a.size() == b.size() && a < b)) {
		s = "-";
		swap(a, b);
	}

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	vector <int> x, y;
	for (auto k : a) { x.push_back(k - '0');}// 큰 수
	for (auto k : b) { y.push_back(k - '0');}//작은 수

	for (int i = 0; i < y.size(); i++) x[i] -= y[i];
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] < 0)
		{
			x[i] += 10;
			x[i + 1] -= 1;
		}
	}
	while (x.size()>1&& x.back() == 0)
	{		
		x.pop_back();

	}

	cout << s;
	for (auto i = x.rbegin(); i < x.rend(); i++)
	{
		 cout << *i;
	}

}