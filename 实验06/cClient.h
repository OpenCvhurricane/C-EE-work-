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
		void SetName (int i  ) ;
		void GetName (string  cc ) ; 
		void display(int i ) ;
}; 

int cClient :: ClientNum = 0 ;
string cClient :: ServerName = "a";

void cClient :: SetServerName( int i)
{
	string nn ;
	
	cout << "�������"<< i << "��ServerName :"  ;
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
	
	cout << "�������" << i << "��Name:"  ;
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
	cout << "��ServerNameΪ��" << ServerName << endl ;
	cout << "��NameΪ��" << Name << endl ; 
	ClientNum = i;
	}
	cout << "��ǰ��Ķ�����" <<  ClientNum << endl ;
}
