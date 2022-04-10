#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> st;
	string str, res;
	int N, i,j;
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin >> str;
		res = "YES";
		for (j = 0; j < str.length(); j++)
		{
			if (str[j] == '(')
				st.push(j);
			else
			{
				if (st.empty() == 0)
					st.pop();
				else
				{
					res = "NO";
					break;
				}
			}
		}
		if (st.empty() == 0)
			res = "NO";

		cout << res << '\n';
		str = "";

		while (!st.empty())
			st.pop();
	}



	return 0;
}