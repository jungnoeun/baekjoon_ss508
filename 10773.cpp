#include <iostream>
using namespace std;

int main() 
{
	int N, i, num, it = 0, sum = 0;
	cin >> N;
	int* arr = new int[N] {};

	for (i = 0; i < N; i++)
	{
		cin >> num;
		if (num == 0) {
			arr[--it] = 0;
		}
		else
		{
			arr[it++] = num;
		}
	}

	for (i = 0; i < it; i++)
		sum += arr[i];

	cout << sum << '\n';

	return 0;
}