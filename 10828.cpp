#include <iostream>
using namespace std;

int main() {

	/*
	push X: ���� X�� ���ÿ� �ִ� �����̴�.
	pop: ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
	size: ���ÿ� ����ִ� ������ ������ ����Ѵ�.
	empty: ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
	top: ������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.*/

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