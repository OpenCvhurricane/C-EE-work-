#include<iostream>
#include<string>

using namespace std ;

int main()
{
	int  n , i , j ;
	string in , key ; 
	
	cout << "��������Կ�ĳ���(Ҫ�󲻳���10)��" ;
	cin >> n ;
	cout << "�����������Կ�����Ȳ�����10����" ;
	cin >> key ;
	cin.get() ;
	cout << "��������Ҫ���ܵ����(���ݽ�������ĸ�����֡��ո�):" ;
	getline(cin, in) ;
	for ( i = 0 , j = 0  ; i < in.length(); i++){
		in[i ]= in[i]  + (key[j] - '0' );
		if ( key.length() <=j + 1){
			j = 0 ;
		}else { 
		j ++ ;
		}
	}
	cout << "���ܺ������ǣ�" << in << endl ;
	for ( i = 0 , j = 0  ; i < in.length(); i++){
		in[i] = in[i] - (key[j] - '0' );
		if ( j + 1 >= key.length()){
			j = 0  ;
		} else { 
		j ++ ;
		}
	}
	cout << "���ܺ�������" << in << endl ;
	
	return 0 ;
}
