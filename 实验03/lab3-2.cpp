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
		cout << "��������������ͼ�����ͣ���������1��ʾ��������2��ʾ��������3��ʾ��Բ��4��ʾ����" ;
		cin >> i ;
	
		switch( i )
		{
			case 1 :
				cout << "�����������εı߳���"  ;
				cin >> a ;
				cout << "�����ε������" << fun1(a) << endl ;
				break ;
			case 2 :
				cout << "��������εĳ�����" ;
				cin >> a >> b ;
				cout << "���ε������" << fun2 ( a , b) << endl;
				break ;
			case 3:
				cout << "���������ε��ϵס��µ׼��ߣ�" ;
				cin >>  a >> b >> h ; 
				cout <<"���ε������"<< fun3( a , b , h) << endl ;
				break ;
			case 4 :
				cout << "������Բ�İ뾶��" ;
				cin >> r ;
				cout << "Բ�������" <<  fun4(r) << endl ;
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
