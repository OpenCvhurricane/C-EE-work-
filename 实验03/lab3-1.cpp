#include<iostream>

int fun(int  , int  ) ;

using namespace std ;

int main ()
{
	int a , b , i  ;
	char c ;
	
	cout << "������������������ֵ��С������ǰ����" ;
	cin >> a >> b ;
	
	for (i = 0 ;b - a > 10000 || b - a == 0;  i++ ){
		cout << "���ܻỨ�ѽϳ�ʱ��\n" ;
		cout << "�Ƿ���Ҫ�������룿���������� Y , ���������� N ����" ;
		cin >> c ;
		if (c!= 'Y' && c != 'N'){
			cout << "������Ч�ַ������������루�������� Y , ���������� N):" ;
			cin >> c ;
		}
		if(c == 'Y' ){
				cout<< "��������������������" ;
				cin >> a >> b ; 
				if ( b -  a > 10000 || b - a ==0 ){
					continue ;
			}
		}
	}
	
	cout << "��" << a << "��" << b << "֮��(�������˵�)��������" << fun( a , b) << "��"<<  endl ;
	
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
