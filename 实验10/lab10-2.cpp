#include<iostream>
#include<string>

using namespace std ;

int main()
{
	string iput  , target  ;
	int flag  = 1  , count  = 0 , i , num = 0 , c = 0  ;
	
	cout  << "������һ��Ӣ�ľ��ӣ�" ;
	getline(cin, iput) ;
	cout  << "������Ҫ���ҵ�Ŀ��:" ;
	cin >> target ;
	while (flag){
		int index = iput.find(target);
		if ( target.length() <= iput.length() ){
			for ( i = 0 ; i <= iput.length() - target.length() ; i ++  ){
				if ( target[0] == iput[i]){
					for ( int j = i , c = 0 ; c < target.length() ; j++ , c++){
						if ( target[c] == iput[j]){
							 		;
						}else{
							num ++ ;
							break ;
						}
					}
					if ( num ==  0 ){
						count ++ ;
					}
				}
				num = 0 ;
			}
		}
	    if(index < iput.length()){
	        cout<<"��һ�γ��ֵ�λ����: "<< index << ",���ַ������ֵĴ�����:" << count << endl;
	        flag = 0 ;
	    }else{
	        cout << "����Ĳ����ַ�����δ���֣�������������Ҫ���ҵ��ַ�����" ;
			cin >> target ; 
		}
	}
}
