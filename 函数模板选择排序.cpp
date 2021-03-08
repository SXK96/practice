#include<iostream>

#include<fstream>

using namespace std;

template<class T>
void mswap(T &a,T &b)
{

	T temp = a;
	a = b;
	b = temp;

}

//选择排序模板
template<class T>
void mysort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1 ; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			mswap(arr[max], arr[i]);
		}
	}
}

template<class T>
void print(T arr[], int len)
{
	for (int i = 0 ; i < len; i++)
	{
		cout << arr[i] << "" ;
	}
	cout << endl;
}

//char数组
void test01()
{
	char chararr[] = "bdfecahg";
	int num = sizeof(chararr) / sizeof(char);

	mysort(chararr, num);
	print(chararr, num);
}

//int数组
void test02()
{
	int intarr[] = { 5,9,7,1,8,4,6,2,3 };
	int num = sizeof(intarr) / sizeof(int);

	mysort(intarr, num);
	print(intarr, num);
}

int main()
{
	//test01();
	test02();


	system("pause");
	return 0;
}