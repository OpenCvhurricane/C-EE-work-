#include<iostream>

int fun(int  , int  ) ;

using namespace std ;

int main ()
{
	int a , b , i  ;
	char c ;
	
	cout << "请输入两个整数（数值较小的数在前）：" ;
	cin >> a >> b ;
	
	for (i = 0 ;b - a > 10000 || b - a == 0;  i++ ){
		cout << "可能会花费较长时间\n" ;
		cout << "是否需要重新输入？（重新输入 Y , 不重新输入 N ）：" ;
		cin >> c ;
		if (c!= 'Y' && c != 'N'){
			cout << "输入无效字符，请重新输入（重新输入 Y , 不重新输入 N):" ;
			cin >> c ;
		}
		if(c == 'Y' ){
				cout<< "请重新输入两个整数：" ;
				cin >> a >> b ; 
				if ( b -  a > 10000 || b - a ==0 ){
					continue ;
			}
		}
	}
	
	cout << "在" << a << "和" << b << "之间(不包括端点)的质数有" << fun( a , b) << "个"<<  endl ;
	
	return 0;
	
}

int fun(int a , int b)
{
	int i , z = 2  , sum = b - a - 1 , j , o ;
	
	for( i = a + 1 , j = 0 ; i < b ; i++  ){
		for( z = 2 , o = 0 ; z < i ; z++){
			if( i % z == 0){
				o++ ;
				j ++ ;
				break ;
			}
		}
		if(o == 0 ){
			cout << i << endl  ;
		}
	}
	
	return sum - j ;
}
