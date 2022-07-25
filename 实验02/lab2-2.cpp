#include<iostream>

int main()
{
	using namespace std ;
	
	int num1 , num2 ;
	
	cout <<"请输入两个整数：" ;
	cin >> num1 >> num2 ;
	
	cout << "两数之和除以5的余数为 ：" << (num1 + num2) % 5 << endl ;
	
	return 0;
}
