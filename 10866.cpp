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
push_front X: ���� X�� ���� �տ� �ִ´�.
push_back X: ���� X�� ���� �ڿ� �ִ´�.
pop_front: ���� ���� �տ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
pop_back: ���� ���� �ڿ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���� ����ִ� ������ ������ ����Ѵ�.
empty: ���� ��������� 1��, �ƴϸ� 0�� ����Ѵ�.
front: ���� ���� �տ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ���� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
*/