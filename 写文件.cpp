#include<iostream>

#include<fstream>

using namespace std;

//д�ļ�
void test01()
{
	ofstream ofs;
	ofs.open("test.txt", ios::out);

	ofs << "cpp test" << endl;
	ofs << "cpp test1" << endl;

	ofs.close();
}

//д

void test02()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "��ʧ��" << endl;
		return;
	}

	//���ļ�4�ַ���
	//1.
	/*char buf[1024] = {0};
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/

	//2.
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}
}



int main()
{
	//test01();

	test02();

	system("pause");
	return 0;
}