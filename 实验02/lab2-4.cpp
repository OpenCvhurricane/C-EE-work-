#include<iostream>
#define black 0
#define white 1

int main()
{
	using namespace std ;
	
	int  A , B , C , D ;
	
	cout << "请输入围棋A和C的颜色(请用1表示白色，用0表示黑色)" ;
	cin >> A >> C ;
	
	if(A ==1)
	{
		B = 0 ;
		cout <<"B的颜色是黑色"<<endl ;
	} else{
		B = 1 ;
		cout<< "B的颜色是白色" <<endl;
	}
		
		
	if(C == B){
		D = A ;
	}else{
		D = B ;
	}
	
	switch( D ){
		case 0 :
			cout <<"D的颜色是黑色" <<endl ;
			break ;
		case 1 :
			cout << "D的颜色是白色" <<endl ;
			break ;
	}
	
	return 0 ; 
}
