#include<iostream>

int main()
{
	using namespace  std ;
	
	char A , B  ;
	
	cout << "�������ַ�A��B��" ;
	cin >> A >> B ;  // ����A,B
	 
	A =  ~ A ;
	B = B << 2 ;
	A = A & B ; 
	
	cout << "result is" <<A<< endl ;
	
	return 0 ;
}
