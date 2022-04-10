#include <iostream>
using namespace std;

int main() 
{
	string str = "";
	int N, i, push_num = 0;
	cin >> N;
	int start = N, tail = N;
	int* arr = new int[N * 2 + 1]{};
	for (i = 0; i < N; i++)
	{
		cin >> str;
		if (str == "push_front")
		{
			cin >> push_num;
			arr[start--] = push_num;
		}
		else if (str == "push_back")
		{
			cin >> push_num;
			arr[++tail] = push_num;
		}
		else if (str == "pop_front")
		{
			if (start >= tail)
				cout << -1 << '\n';
			else 
			{
				cout << arr[++start] << '\n';
				arr[start] = 0;
			}
				
		}
		else if (str == "pop_back")
		{
			if (start >= tail)
				cout << -1 << '\n';
			else 
			{
				cout << arr[tail] << '\n';
				tail--;
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
			else
				cout << arr[start+1] << '\n';
		}

		else if (str == "back")
		{
			if (start >= tail)
				cout << -1 << '\n';
			else
				cout << arr[tail] << '\n';
		}
	}

	return 0;
}


/* 
push_front X: 정수 X를 덱의 앞에 넣는다.
push_back X: 정수 X를 덱의 뒤에 넣는다.
pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 덱에 들어있는 정수의 개수를 출력한다.
empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/