#include<iostream>

int main()
{
	using namespace std ;
	
	int a = sizeof(bool) , b = sizeof(char) , c = sizeof(unsigned char) , d = sizeof(signed char) , e = sizeof(short) ,
		f = sizeof(unsigned short) , g = sizeof(int) , h = sizeof(unsigned int) , i = sizeof(long) ;
	int j = sizeof(float) , k = sizeof(double) , l = sizeof(long double) ;
	
	cout << "bool�������ݵĳ���Ϊ" << a <<"�ֽ�\n" ;
	cout << "charl�������ݵĳ���Ϊ" << b <<"�ֽ�\n" ;
	cout << "unsigned char�������ݵĳ���Ϊ" << c <<"�ֽ�\n" ;
	cout << "signed char�������ݵĳ���Ϊ" << d <<"�ֽ�\n" ;
	cout << "short�������ݵĳ���Ϊ" << e <<"�ֽ�\n" ;
	cout << "unsigned short�������ݵĳ���Ϊ" << f <<"�ֽ�\n" ;
	cout << "int�������ݵĳ���Ϊ" << g <<"�ֽ�\n" ;
	cout << "unsigned int�������ݵĳ���Ϊ" << h <<"�ֽ�\n" ;
	cout << "long�������ݵĳ���Ϊ" << i <<"�ֽ�\n" ;
	cout << "float�������ݵĳ���Ϊ" << j <<"�ֽ�\n" ;
	cout << "double�������ݵĳ���Ϊ" << k <<"�ֽ�\n" ;
	cout << "long double�������ݵĳ���Ϊ" << l <<"�ֽ�\n" ;
	
	return 0;
}
