#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int L = 0, M = 0;
	cin >> L >> M;
	vector<int> sample(L + 1);
	for (int i = 0; i < L + 1; i++)
	{
		sample[i] = 1;
	}
	for (int i = 0; i < M; i++)
	{
		int start = 0, end = 0;
		cin >> start >> end;
		for (int j = start; j <= end; j++)
		{
			sample[j] = 0;
		}
	}
	int num = 0;
	for (int i = 0; i < L + 1; i++)
	{
		num += sample[i];
	}
	cout << num << endl;
	return 0;
}