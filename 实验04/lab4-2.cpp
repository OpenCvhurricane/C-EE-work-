#include<iostream>
#include<cmath>

int fun ( int ) ;
double fun(int , int ) ;

using namespace std ;

int main()
{
	int  n , x , i = 1;
	double re ;
	char c ;
	
	cout << "������״�n�Լ�x��"  ;
	cin >> n >>  x ;
	
	while(n < 0) {
		if ( n < 0 ){
			cout << "���������룺" ;
			cin >> n ;
		}
		if (n >= 0){
			break ;
		}
	}
	
	re = fun( n , x) ;
	
	cout << "����ǣ�" << re << endl ;
	
		while( i ){
		cout << "�Ƿ���Ҫ������һ�����Ľ׳�(Y��ʾ��Ҫ��N��ʾ����Ҫ����" ;
		cin >> c ;
		switch ( c ){
			case 'Y':
				cout << "������״ε�����n���״�x��" ;
				cin >> n >> x;
				while(n < 0) {
					if ( n < 0 ){
					cout << "���������룺" ;
					cin >> n ;
				}
				if (n >= 0){
				break ;
			}
			}
				re = fun (n , x) ;
				cout << "����ǣ�" << re <<  endl ;
				i = 1 ;
				break ;
			case 'N':
				i = 0 ;
				break ;
		}
	}
	
	return 0 ;
}

double fun(int n , int x)
{
	double re = 1 , sum = 1 ,  c = 1 ;
	int i , j ;  
	
	for ( i = 1 ; i <= n ; i++){
		re = fun(i) ;
		for ( j = 1  , c = 1; j <= i ; j++ ){
			c = c * x ;
		}
		sum = sum + 1.0 /(double) re * c ;
	} 
	
	return sum ;
}

int fun(int n)
{
	int i  , re  = 1 ;
	
	for ( i = 1 ; i <= n ; i++){
		re = re  * i ;
	}
	
	return re ;
}
