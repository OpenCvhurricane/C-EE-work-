#include<iostream>

using namespace std ;

int fun(int ) ;

int main()
{
	int n , re , i = 1  ;
	char c  ;
	
	cout << "����״ε����֣�"  ;
	cin >> n ;
	
	while(n < 0) {
		if ( n < 0 ){
			cout << "���������룺" ;
			cin >> n ;
		}
		if (n >= 0){
			break ;
		}
	}
	re = fun(n) ;
	
	cout << "����ǣ�" << re << endl ;
	
	while( i ){
		cout << "�Ƿ���Ҫ������һ�����Ľ׳�(Y��ʾ��Ҫ��N��ʾ����Ҫ����" ;
		cin >> c ;
		switch ( c ){
			case 'Y':
				cout << "������״ε����֣�" ;
				cin >> n ;
				while(n < 0) {
					if ( n < 0 ){
					cout << "���������룺" ;
					cin >> n ;
				}
				if (n >= 0){
				break ;
			}
			}
				re = fun (n) ;
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

int fun(int n)
{
	int i  , re  = 1 ;
	
	for ( i = 1 ; i <= n ; i++){
		re = re  * i ;
	}
	
	if ( n == 0){
		return 1 ;
	}
	
	return re ;
}
