#include <iostream>
using namespace std;

int main()
{

	//�̰� ����..
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
push X: ���� X�� ť�� �ִ� �����̴�.
pop: ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ť�� ����ִ� ������ ������ ����Ѵ�.
empty: ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
front: ť�� ���� �տ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
*/