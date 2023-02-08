#include<iostream>
using namespace std;

class SimpleClass
{
	int num1;
	int num2;
public:
	SimpleClass(int n1 = 0, int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
	}
	void ShowData() const
	{
		cout << num1 << " " << num2 << endl;
	}
};

int main()
{
	SimpleClass sc1();	//바로 이렇게 호출하면 찾지를 못한다. 컴파일러가 객체생성문인지 함수의 원형선언인지 구분할 수 없어진다.
	SimpleClass mysc = sc1();
	mysc.ShowData();
	return 0;
}

SimpleClass sc1()
{
	SimpleClass sc(20, 30);
	return sc;
}