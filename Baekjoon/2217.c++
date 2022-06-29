#include <iostream>
#include <algorithm>

using namespace std;
int n;
int input[100000];
int max_=0;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> input[i];

	sort(input, input + n);

	for (int i = 0; i < n; i++)
	{
		if (input[i] * (n - i) > max_)
			max_ = input[i] * (n - i);
	}
	cout << max_;
}