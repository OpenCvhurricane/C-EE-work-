#include<iostream>
#include<string>

using namespace std ;

class cClient {
	private :
		static string  ServerName ;
		static int  ClientNum ;
		string Name ;
	public :
		void static SetServerName( int i ) ;
		void static GetServerName(string nn  ) ;
		void SetName (int i ) ;
		void GetName (string  cc ) ; 
		void display(int i ) ;
}; 

int cClient :: ClientNum = 0 ;
string cClient :: ServerName = "a";

void cClient :: SetServerName( int i)
{
	string nn ;
	
	cout << "请输入第"<< i << "个ServerName :"  ;
	cin >> nn ;
	GetServerName(nn) ;
	
}

void cClient :: GetServerName(string nn)
{
	ServerName = nn ;
}

void cClient :: SetName(int i)
{
	string cc ;
	
	cout << "请输入第" << i << "个Name:"  ;
	cin >> cc ;
	
	GetName (cc);
}

void cClient :: GetName (string cc)
{
	Name = cc ;
}

void cClient :: display (int i )
{
	ClientNum = i ;
if (ClientNum != 0){
	cout << "该ServerName为：" << ServerName << endl ;
	cout << "该Name为：" << Name << endl ; 
	ClientNum ++ ;
	}
	cout << "当前类的对象有" <<  ClientNum << endl ;
}
int main()
{
	cClient n1 , n2 ;
	int i = 1  ;
	
	n1.SetServerName(1) ;
	n1.SetName(1) ;
	n1.display(1) ;
	n2.SetServerName(2) ;
	n2.SetName(2) ;
	n2.display(2) ;
	
	return 0 ;	
}
