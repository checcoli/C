//����⣣7����λ��
//������������λ��
#include <iostream>
using namespace std;
int main()
{
	int n = 0;

	int a[15000] = { 0 };
	int middle = 0;
	while (1)
	{
		cin >> n;
		if (n == 0) break; // nΪ0ʱ������whileѭ����
		//������a��¼��ֵ
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		//����������,��С����.
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] > a[j])
				{
					int change = a[i];
					a[i] = a[j];
					a[j] = change;
				}
			}
		if (n % 2 != 0) //n������
		{
			middle = a[(n + 1) / 2 - 1];  //��λ����Ϊ�м����
		}
		else   //n��ż��
		{
			middle = (a[n / 2 - 1] + a[n / 2]) / 2;  //��λ����Ϊ�м������ľ�ֵ
		}
		cout << middle << endl;
	}

	return 0;
}