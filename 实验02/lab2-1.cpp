#include<iostream>

int main()
{
	using namespace std ;
	
	int a = sizeof(bool) , b = sizeof(char) , c = sizeof(unsigned char) , d = sizeof(signed char) , e = sizeof(short) ,
		f = sizeof(unsigned short) , g = sizeof(int) , h = sizeof(unsigned int) , i = sizeof(long) ;
	int j = sizeof(float) , k = sizeof(double) , l = sizeof(long double) ;
	
	cout << "bool类型数据的长度为" << a <<"字节\n" ;
	cout << "charl类型数据的长度为" << b <<"字节\n" ;
	cout << "unsigned char类型数据的长度为" << c <<"字节\n" ;
	cout << "signed char类型数据的长度为" << d <<"字节\n" ;
	cout << "short类型数据的长度为" << e <<"字节\n" ;
	cout << "unsigned short类型数据的长度为" << f <<"字节\n" ;
	cout << "int类型数据的长度为" << g <<"字节\n" ;
	cout << "unsigned int类型数据的长度为" << h <<"字节\n" ;
	cout << "long类型数据的长度为" << i <<"字节\n" ;
	cout << "float类型数据的长度为" << j <<"字节\n" ;
	cout << "double类型数据的长度为" << k <<"字节\n" ;
	cout << "long double类型数据的长度为" << l <<"字节\n" ;
	
	return 0;
}
