#include<iostream>
#include<string>

#define PI  3.141592 
#define square  1
#define rectangle  2
#define trapezoid 3
#define Circle 4

double fun1(double) ;
double fun2(double , double );
double fun3(double  , double  , double ) ;
double fun4(double ) ;

using namespace std ;

int main()
{
	double a , b , c , h , r    ;
	int i , d = 4;
	
	while(d--){
		cout << "请输入所需计算的图形类型（正方形用1表示、矩形用2表示、梯形用3表示、圆用4表示）：" ;
		cin >> i ;
	
		switch( i )
		{
			case 1 :
				cout << "请输入正方形的边长："  ;
				cin >> a ;
				cout << "正方形的面积是" << fun1(a) << endl ;
				break ;
			case 2 :
				cout << "请输入矩形的长及宽：" ;
				cin >> a >> b ;
				cout << "矩形的面积是" << fun2 ( a , b) << endl;
				break ;
			case 3:
				cout << "请输入梯形的上底、下底及高：" ;
				cin >>  a >> b >> h ; 
				cout <<"梯形的面积是"<< fun3( a , b , h) << endl ;
				break ;
			case 4 :
				cout << "请输入圆的半径：" ;
				cin >> r ;
				cout << "圆的面积是" <<  fun4(r) << endl ;
				break ;
		}
	}
	
	return 0 ;
}

double fun1(double a)
{
	return a * a ;
}

double fun2(double a , double b)
{
	return a * b;
}

double fun3(double a , double b , double h)
{
	return (a + b) * h /2.0 ; 
}

double fun4(double r)
{
	return PI * r *r ;
}
