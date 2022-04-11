#include <iostream>
//#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<int, vector<int>, greater<int>> pq;
	int N, i, num, n;
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin >> num;
		if (num == 0)
		{
			if (pq.empty())
				cout << 0 << '\n';
			else
			{
				cout << pq.top() << '\n';
				pq.pop();

			}
		}
		else
			pq.push(num);
	}

	return 0;
}



/*bool desc(int a, int b)
{
	return a > b;
}

int main()
{
	int N, i, it = 0, num;
	cin >> N;
	int* arr = new int[N] {};

	for (i = 0; i < N; i++)
	{
		cin >> num;
		if (num == 0)
		{
			if (it <= 0)
				cout << 0 << '\n';
			else 
			{
				sort(arr, arr + it, desc);
				cout << arr[--it] << '\n';
				arr[it] = 0;
			}
		}
		else
		{
			arr[it++] = num;
		}
	}

	return 0;
}*/