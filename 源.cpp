//快速排序
/*数组排序任务可以如下完成：
1）设k = a[0], 将k挪到适当位置，使得比k小的元素都
在k左边, 比k大的元素都在k右边，和k相等的，不关心
在k左右出现均可 （O（n)时间完成）
2) 把k左边的部分快速排序
3) 把k右边的部分快速排序
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


void swap(int& a, int &b) {//交换变量a,b的值
	int tmp = a;
	a = b;
	b = tmp;
}

void Quicksort(int a[], int s, int e) {
	if (s >= e)//边界条件
		return;
	int k = a[s];
	int i = s, j = e;
	while (i!=j)
	{
		while (j > i && a[j] >= k)
			--j;
		swap(a[i], a[j]);//奇数次交换
		//奇数次交换后用a[i]与k值相比较
		while (i<j&&a[i]<=k)
		{
			i++;
		}
		swap(a[i], a[j]);//偶数次交换
	}//处理完后，a[i]=k
	Quicksort(a, s, i - 1);
	Quicksort(a, i + 1, e);
}


