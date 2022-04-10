#include <iostream>
using namespace std;

int main() {

	/*
	push X: 정수 X를 스택에 넣는 연산이다.
	pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
	size: 스택에 들어있는 정수의 개수를 출력한다.
	empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
	top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.*/

	int N, i, push_num, it = 0;
	string str = "";
	cin >> N;
	int* st = new int[N] {};
	
	for (i = 0; i < N; i++)
	{
		cin >> str;
		if (str == "push") {
			cin >> push_num;
			st[it++] = push_num;
		}

		else if (str == "pop")
		{
			if (it <= 0)
				cout << -1 << '\n';
			else
			{
				cout << st[--it] << '\n';
				st[it] = 0;
				
			}
		}

		else if (str == "size")
		{
			cout << it << '\n';
		}

		else if (str == "empty") 
		{
			if (it <= 0)
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}

		else if (str == "top")
		{
			if (it <= 0)
				cout << -1 << '\n';
			else
				cout << st[it-1] << '\n';
		}



	}



	return 0;
}