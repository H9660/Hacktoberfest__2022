#include <bits/stdc++.h>
using namespace std;

bool prevPermutation(string& str)
{
	int n = str.length() - 1;
	int i = n;
	while (i > 0 && str[i - 1] <= str[i])
		i--;
	if (i <= 0)
		return false;
	int j = i - 1;
	while (j + 1 <= n && str[j + 1] < str[i - 1])
		j++;

	swap(str[i - 1], str[j]);

	reverse(str.begin() + i, str.end());

	return true;
}
int main()
{
	string str; cin>>str;
	if (prevPermutation(str))
		cout << "Previous permutation is " << str;
	else
		cout << "Previous permutation doesn't exist";
	return 0;
}
