#include<iostream>
#include<string>
#define MAX 100 
#define MIN  0

using namespace std ;

class Student{
	public :
		string name ;
		string num ;
		double math ;
		double english ;
		~Student() {
			delete []  member ;
		}
		Student *member ;
		
};

int main()
{
	Student pp ;
	int n , i , j ; 
	double max1 , max2 , min1 , min2 , sum1 = 0 , sum2 = 0 , ave1 , ave2 ;
	char re ;
	string nn ;
	
	cout << "������Ҫ�����ѧ��������" ;
	cin >> n ;
	
	pp.member = new Student [n] ;
	
	cout << "������������ѧ����ѧ�š������������ɼ���Ӣ��ɼ�" << endl ;
	for  ( i =0 ; i < n ; i ++){
		cout << "�������" << i + 1 << "��ѧ����ѧ�š������������ɼ���Ӣ��ɼ�:"  ;
		cin >> pp.member[i].num ;
		cin >> pp.member[i].name ;
		cin >> pp.member[i].math ;
		cin >> pp.member[i].english ;
		while ( pp.member[i].math > MAX || pp.member[i].math < MIN ){
			cout << "��������Ч�����������ѧ���ĸ����ɼ���" ;
			cin >> pp.member[i].math ;
		}
		while ( pp.member[i].english > MAX || pp.member[i].english < MIN){
			cout << "������Ч�������������ѧ����Ӣ��ɼ���" ;
			cin >> pp.member[i].english ;
		}
		for ( j = 0 ; j < i ; j ++){
			if ( pp.member[j].num == pp.member[i].num){
				cout << "�����������" << i + 1 << "��ѧ����ѧ�š������������ɼ���Ӣ��ɼ���" ;
				cin >> pp.member[i].num >> pp.member[i].name >> pp.member[i].math >> pp.member[i].english ;
			}
			while ( pp.member[i].math > MAX || pp.member[i].math < MIN ){
				cout << "������Ч�������������ѧ���ĸ����ɼ���" ;
				cin >> pp.member[i].math ;
			}
			while ( pp.member[i].english > MAX || pp.member[i].english < MIN){
				cout << "������Ч�������������ѧ����Ӣ��ɼ���" ;
				cin >> pp.member[i].english ;
			}
		}
	}
	
	max1 = pp.member[0].math ;
	max2 = pp.member[0].english ;	
	min1 = pp.member[0].math ;
	min2 = pp.member[i].english ;
	
	for ( i = 0 ; i < n ; i++){
		if ( max1 < pp.member[i].math){
			max1 = pp.member[i].math ;
		}
		if ( max2 <pp. member[i].english){
			max2  = pp.member[i].english ;
		}
		if ( min1 > pp.member[i].math){
			min1 = pp.member[i].math ;
		}
		if ( min2 > pp.member[i].english){
			min2 = pp.member[i].english ;
		}
		sum1 = sum1 + pp.member[i].math ;
		sum2 = sum2 + pp.member[i].english ;
	}
	ave1 = sum1 / n;
	ave2 = sum2 / n ;
	
	cout << "ѧ��\t����\t�����ɼ�\tӢ��ɼ�" << endl ;
	for ( i = 0 ; i < n ; i++){
		cout << pp.member[i].num << "\t" ;
		cout << pp.member[i].name << "\t" ;
		cout << pp.member[i].math << "               " ;
		cout << pp.member[i].english <<  "\t" ;
		cout << endl ;
	}
	cout << "��������߳ɼ�\t��������ͳɼ�\tӢ�����߳ɼ�\tӢ�����ͳɼ�\t" << endl ;
	cout << max1 <<"                " << min1 <<"                   " << max2 <<"                " << min2 <<"             " << endl ;
	cout << "������ƽ���ɼ�\tӢ���ƽ���ɼ�\t" << endl ;
	cout << ave1 << "             " << ave2 << "              " << endl;
	
	cout << "�Ƿ�Ҫ��ѯѧ���ɼ���Y��ʾ��Ҫ �� N��ʾ����Ҫ����" ;
	cin >> re ;
	while ( re == 'Y'){
		cout << "������Ҫ��ѯѧ����ѧ�ţ�" ;
		cin >> nn ;
		for ( i = 0 ; i < n ; i++){
			if ( nn == pp.member[i].num){
				cout << "��ѧ���ĸ����ɼ�Ϊ" << pp.member[i].math << "�֣�Ӣ��ɼ�Ϊ" << pp.member[i].english << endl ;
				break ;
			}
		}
		while ( i == n ){
			cout << "�������ѧ����������������Ҫ��ѯѧ����ѧ�ţ�" ;
			cin >> nn ;
			for ( j = 0 ; j < n ; j++){
				if ( nn == pp.member[j].num){
					cout << "��ѧ���ĸ����ɼ�Ϊ" << pp.member[j].math << "�֣�Ӣ��ɼ�Ϊ" << pp.member[j].english << endl ;
					break ;
				}
			}
			i = j ;
		}
		cout << "�Ƿ�Ҫ������ѯѧ���ĳɼ���Y��ʾ��Ҫ �� N��ʾ����Ҫ����" ;
		cin >> re ;
	}
	
	
	return 0 ;
}
