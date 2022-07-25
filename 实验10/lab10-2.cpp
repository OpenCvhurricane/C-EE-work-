#include<iostream>
#include<string>

using namespace std ;

int main()
{
	string iput  , target  ;
	int flag  = 1  , count  = 0 , i , num = 0 , c = 0  ;
	
	cout  << "请输入一段英文句子：" ;
	getline(cin, iput) ;
	cout  << "请输入要查找的目标:" ;
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
	        cout<<"第一次出现的位置是: "<< index << ",该字符串出现的次数是:" << count << endl;
	        flag = 0 ;
	    }else{
	        cout << "输入的查找字符串并未出现，请重新输入需要查找的字符串：" ;
			cin >> target ; 
		}
	}
}
