#include <iostream>
using namespace std;

int main()
{

	//이건 뭘까..
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, i, push_num = 0, start=0, tail=0;
	cin >> N;
	int* arr = new int[N] {};
	string str = "";

	for (i = 0; i < N; i++)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> push_num;
			arr[tail++] = push_num;
			
		}

		else if (str == "pop")
		{
			if (start >= tail)
				cout << -1 << '\n';
			else
			{
				cout << arr[start] << '\n';
				arr[start] = 0;
				start++;
			}
		}

		else if (str == "size")
		{
			cout << tail - start << '\n';
		}


		else if (str == "empty")
		{
			if (start >= tail)
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}


		else if (str == "front")
		{
			if (start >= tail)
				cout << -1 << '\n';

			else {
				cout << arr[start] << '\n';
			}
		}

		else if (str == "back")
		{
			if (start >= tail)
				cout << -1 << '\n';
			else
				cout << arr[tail-1] << '\n';
		}
	}


	return 0;
}

/*
push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/