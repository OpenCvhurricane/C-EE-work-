#include<iostream>

int main()
{
	using namespace  std ;
	
	char A , B  ;
	
	cout << "«Î ‰»Î◊÷∑˚A∫ÕB£∫" ;
	cin >> A >> B ;  //  ‰»ÎA,B
	 
	A =  ~ A ;
	B = B << 2 ;
	A = A & B ; 
	
	cout << "result is" <<A<< endl ;
	
	return 0 ;
}
