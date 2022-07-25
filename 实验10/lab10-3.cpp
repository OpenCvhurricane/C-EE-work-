#include<iostream>
#include<string>

using namespace std ;

int main()
{
	int  n , i , j ;
	string in , key ; 
	
	cout << "请输入密钥的长度(要求不超过10)：" ;
	cin >> n ;
	cout << "请输入加密密钥（长度不超过10）：" ;
	cin >> key ;
	cin.get() ;
	cout << "请输入需要加密的语句(内容仅包含字母、数字、空格):" ;
	getline(cin, in) ;
	for ( i = 0 , j = 0  ; i < in.length(); i++){
		in[i ]= in[i]  + (key[j] - '0' );
		if ( key.length() <=j + 1){
			j = 0 ;
		}else { 
		j ++ ;
		}
	}
	cout << "加密后的语句是：" << in << endl ;
	for ( i = 0 , j = 0  ; i < in.length(); i++){
		in[i] = in[i] - (key[j] - '0' );
		if ( j + 1 >= key.length()){
			j = 0  ;
		} else { 
		j ++ ;
		}
	}
	cout << "解密后的语句是" << in << endl ;
	
	return 0 ;
}
