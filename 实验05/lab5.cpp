#include<iostream>
#include<string>

using namespace std ;

class Car {
	public :
		void get( string &nam , string &modl ,double  &pow ,string  &col , double &pri ) ;
		void set (int i ) ;
		void display ( ) ;
		Car() ;
	private :
		string color , id , model  ;
		double price ,  power ;
};

int main()
{
	Car benz , bull , aston ;
	char i ;
	int a = 1 ;
	
	cout << "�������������������ı�š��ͺš����ʡ���ɫ���۸� ��" << endl ;
	benz.set( a ) ;
	bull.set( ++a ) ;
	benz.display( ) ;
	bull.display( ) ;
		
	cout << "�Ƿ�Ҫ����������һ����������Ϣ (Y��ʾ��Ҫ �� N��ʾ����Ҫ ����" ;
	cin >> i ;
	
	while ( i ){
		switch ( i ) {
			case 'N' :
				i = 0 ;
				break ;
			case 'Y' :
			 cout << "���������������ı�š��ͺš����ʡ���ɫ���۸� " << endl ;
			  aston.set(++a ) ;
			  aston.display() ;
			  cout << "�Ƿ�Ҫ����������һ����������Ϣ (Y��ʾ��Ҫ �� N��ʾ����Ҫ ����" ;
			  cin >> i ;
			  break ;
		}
	}
	
	
	
	return 0 ;
}

void Car :: get (string &nam , string &modl ,double  &pow ,string  &col , double &pri) 
{
	color = col ;
	id = nam ;
	model = modl ;
	price = pri ;
	power = pow ;
}

void Car :: set(int i )
{
	string nam , modl , col ;
	double pri  , pow ;
	
	cout << "���������ĵ�" << i << "�����ĳ��ı�� ��ID����"  ;
	cin >> nam ;
	cout << "���������ĵ�" << i <<"�����ĳ����ͺţ�" ;
	cin >> modl ;
	cout << "���������ĵ�" << i << "�����ĳ�����ɫ(ʡ�ԡ�ɫ����)��" ;
	cin >> col ;
	cout << "���������ĵ�" << i << "�����ĳ��Ĺ��ʣ���λ����������" ;
	cin >> pow ;
	cout << "���������ĵ�" << i << "�����ĳ��ļ۸񣨵�λ��Ԫ����" ;
	cin >> pri ;
	
	color = col ;
	id = nam ;
	model = modl ;
	price = pri ;
	power = pow ;
	
	get(nam , modl , pow , col , pri) ;
}

void Car :: display ()
{
	cout << "���" << id << "��" << model << "�͵���������ɫ��" << color << "ɫ������Ϊ" << power << "�������۸�Ϊ" << price  << "Ԫ"<<  endl ; 
}

Car :: Car () : color("0" ) , model ("0") , id ("0") ,price (0) , power (0){
}


