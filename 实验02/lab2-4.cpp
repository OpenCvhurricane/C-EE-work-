#include<iostream>
#define black 0
#define white 1

int main()
{
	using namespace std ;
	
	int  A , B , C , D ;
	
	cout << "������Χ��A��C����ɫ(����1��ʾ��ɫ����0��ʾ��ɫ)" ;
	cin >> A >> C ;
	
	if(A ==1)
	{
		B = 0 ;
		cout <<"B����ɫ�Ǻ�ɫ"<<endl ;
	} else{
		B = 1 ;
		cout<< "B����ɫ�ǰ�ɫ" <<endl;
	}
		
		
	if(C == B){
		D = A ;
	}else{
		D = B ;
	}
	
	switch( D ){
		case 0 :
			cout <<"D����ɫ�Ǻ�ɫ" <<endl ;
			break ;
		case 1 :
			cout << "D����ɫ�ǰ�ɫ" <<endl ;
			break ;
	}
	
	return 0 ; 
}
