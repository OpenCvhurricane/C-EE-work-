#include<iostream>
#include<string>
#include<iomanip>
#define  PI  3.1415926 

using namespace std ;

class Geometry{
	public :
		void areaa () ;
		void facea () ;
		void display0 () ;
		Geometry () ;
		~Geometry () ;
	private :
		double longg0 ;
		double wide0;
		double face0 ;
		double area0 ;
		string name ;
} ;

class Rectangle : public Geometry {
	public :
		void face1 () ;
		void area1 () ;
		void display1 () ; 
		void  print1 () ;
	private :
		double longg ;
		double wide ;
		double face11 ;
		double area11 ;
} ;

class Square : public Rectangle {
	public :
		void print2() ;
		void display2 () ;
		void area2 () ;
		void face2 ( ) ;
	private :
		double a ;
		double face22 ;
		double area22 ;
};

class Round : public Geometry {
	public :
		void print3 () ;
		void display3 () ;
		void face3 () ;
		void area3 () ;
	private :
		double rou ;
		double face33 ;
		double area33 ;
} ;

int main()
{
	int flag = 1 , n1 , n2 , n3 ;
	
	cout << "请输入要输入矩形的个数，正方形的数量及圆的数量：" ;
	cin   >> n1 >> n2 >> n3 ;
	class Rectangle * poi1 = new Rectangle [n1] ;
	class Square * poi2 = new Square [n2] ;
	class Round * poi3 = new Round [n3] ;
	if ( n1 != 0 ){
		for ( int i = 0 ; i < n1 ; i++){
			cout << "请输入第" << i + 1  << "个矩形的长和宽：" ; 
			poi1[i].print1() ;
			poi1[i].face1() ;
			poi1[i].area1() ;
		}
	}  
	if ( n2 != 0){
		for ( int i = 0 ; i < n2 ; i++){
			cout << "请输入第" << i + 1 << "个正方形的边长 ：" ; 
			poi2[i].print2() ;
			poi2[i].face2() ;
			poi2[i].area2() ;
		}
	}
	if ( n3 != 0){
		for ( int i = 0 ; i < n3 ; i++){
			cout << "请输入第" << i + 1 << "个圆的半径；" ;
			poi3[i].print3() ;
			poi3[i].face3() ;
			poi3[i].area3() ;
		}
	}
	if ( n1 != 0 ){
		cout << "矩形" << endl ;
		cout << "长" << "\t" << "宽" << "\t" << "面积" << "\t" << "周长" << "\t"  << endl;
		for ( int i = 0 ; i < n1 ; i++){
			poi1[i].display1() ;
		}
	}	
	if ( n2 != 0 ){
		cout << "正方形" << endl ;
		cout << "边长" << "\t" << "面积" << "\t" << "周长" << endl ; 
		for ( int i =0 ; i < n2 ; i++) {
			poi2[i].display2() ;
		}
	}
	if ( n3 != 0 ){
		cout << "圆" << endl ;
		cout << "半径" << "\t" << "面积" << "\t" << "周长" << endl ; 
		for ( int i = 0 ; i < n3 ; i++){
			poi3[i].display3();
		}
	}
	
	return 0 ;
}

Geometry :: Geometry () : longg0(0) , wide0 (0) , face0 (0) , area0 (0){
}

void Geometry :: areaa ()
{
	area0 = longg0 * wide0 ;
}

void Geometry :: facea ()
{
	face0 = 2 * (longg0 + wide0) ;
}

void  Geometry  :: display0 ()
{
	cout  << "几何体的尺寸是：" << longg0 << "   "  << wide0 << "面积和周长分别是：" << area0 << "  " << face0 << endl ;
}

Geometry :: ~Geometry ()
{
}

void Rectangle :: face1 ()
{
	face11 = longg * wide ;
}

void Rectangle :: area1 ()
{
	area11 = 2 * ( longg + wide ) ;
}

void Rectangle :: display1 ()
{
	cout <<  longg << "\t" << wide << "\t" << face11 << "\t"  << area11 << endl ;  
}

void Rectangle :: print1 ()
{
	cin >> longg >> wide  ;
}

void Square :: print2 ()
{
	cin >> a ;
}

void Square :: face2 ()
{
	face22 = a * a ;
}

void Square :: area2 ()
{
	area22 = 2 * ( a + a) ;
}

void Square :: display2 ()
{
	cout << a << "\t" << face22 << "\t" << area22 << endl ;
}

void Round  :: print3()
{
	cin >> rou ;
}

void Round  :: display3 ()
{
	cout  <<  rou << "\t" <<  face33 << "\t" <<  area33 << endl ;
}

void Round  :: face3 ()
{
	face33 = PI * rou * rou ;
}

void Round  :: area3 ()
{
	area33 = PI * 2 * rou ;
}


