//--------找出只出现一次的数----------------
//给定一个非空整形数组，除了某个元素只出现一次以外
//其余每个元素均出现两次，找出那个只出现一次的元素。
#include<stdio.h>
int main()
{
//--------------优化---------------------
	int arr[] = { 1,2,3,4,5,4,3,2,1 };
	//找出单身狗
	//用异或的方法
	//1^1^2^2^3^3^4^4^5=5
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("单身狗是：%d\n",ret);
//--------------------这种方法太暴力，需要优化---------------
	int arr[] = { 1,2,3,4,5,4,3,2,1 };
	//找出单身狗
	//暴力求解
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		int count = 0;
		int j = 0;
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("单身狗是：%d\n", arr[i]);
		}
	}
	return 0;
}