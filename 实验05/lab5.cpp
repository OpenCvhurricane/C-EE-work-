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
	
	cout << "请依次输入两辆汽车的编号、型号、功率、颜色、价格 ：" << endl ;
	benz.set( a ) ;
	bull.set( ++a ) ;
	benz.display( ) ;
	bull.display( ) ;
		
	cout << "是否要继续输入下一辆汽车的信息 (Y表示需要 ， N表示不需要 ）：" ;
	cin >> i ;
	
	while ( i ){
		switch ( i ) {
			case 'N' :
				i = 0 ;
				break ;
			case 'Y' :
			 cout << "请依次输入汽车的编号、型号、功率、颜色、价格 " << endl ;
			  aston.set(++a ) ;
			  aston.display() ;
			  cout << "是否要继续输入下一辆汽车的信息 (Y表示需要 ， N表示不需要 ）：" ;
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
	
	cout << "请输入您的第" << i << "辆车的车的编号 （ID）："  ;
	cin >> nam ;
	cout << "请输入您的第" << i <<"辆车的车的型号：" ;
	cin >> modl ;
	cout << "请输入您的第" << i << "辆车的车的颜色(省略‘色’字)：" ;
	cin >> col ;
	cout << "请输入您的第" << i << "辆车的车的功率（单位是马力）：" ;
	cin >> pow ;
	cout << "请输入您的第" << i << "辆车的车的价格（单位是元）：" ;
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
	cout << "编号" << id << "的" << model << "型的汽车的颜色是" << color << "色，功率为" << power << "马力，价格为" << price  << "元"<<  endl ; 
}

Car :: Car () : color("0" ) , model ("0") , id ("0") ,price (0) , power (0){
}


