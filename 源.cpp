//��������
/*���������������������ɣ�
1����k = a[0], ��kŲ���ʵ�λ�ã�ʹ�ñ�kС��Ԫ�ض�
��k���, ��k���Ԫ�ض���k�ұߣ���k��ȵģ�������
��k���ҳ��־��� ��O��n)ʱ����ɣ�
2) ��k��ߵĲ��ֿ�������
3) ��k�ұߵĲ��ֿ�������
*/
#include<iostream>
using namespace std;

void Quicksort(int a[], int s, int e);
int a[] = { 93,27,30,2,8,12,2,8,30,89 };
int main() {
	int size = sizeof(a) / sizeof(int);
	Quicksort(a, 0, size - 1);
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << "," << endl;
		return 0;
	}
}


void swap(int& a, int &b) {//��������a,b��ֵ
	int tmp = a;
	a = b;
	b = tmp;
}

void Quicksort(int a[], int s, int e) {
	if (s >= e)//�߽�����
		return;
	int k = a[s];
	int i = s, j = e;
	while (i!=j)
	{
		while (j > i && a[j] >= k)
			--j;
		swap(a[i], a[j]);//�����ν���
		//�����ν�������a[i]��kֵ��Ƚ�
		while (i<j&&a[i]<=k)
		{
			i++;
		}
		swap(a[i], a[j]);//ż���ν���
	}//�������a[i]=k
	Quicksort(a, s, i - 1);
	Quicksort(a, i + 1, e);
}


