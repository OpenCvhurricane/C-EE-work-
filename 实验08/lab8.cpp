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
	
	cout << "请输入要输入的学生人数：" ;
	cin >> n ;
	
	pp.member = new Student [n] ;
	
	cout << "请依次序输入学生的学号、姓名、高数成绩和英语成绩" << endl ;
	for  ( i =0 ; i < n ; i ++){
		cout << "请输入第" << i + 1 << "名学生的学号、姓名、高数成绩和英语成绩:"  ;
		cin >> pp.member[i].num ;
		cin >> pp.member[i].name ;
		cin >> pp.member[i].math ;
		cin >> pp.member[i].english ;
		while ( pp.member[i].math > MAX || pp.member[i].math < MIN ){
			cout << "请输入无效，重新输入该学生的高数成绩：" ;
			cin >> pp.member[i].math ;
		}
		while ( pp.member[i].english > MAX || pp.member[i].english < MIN){
			cout << "输入无效，请重新输入该学生的英语成绩：" ;
			cin >> pp.member[i].english ;
		}
		for ( j = 0 ; j < i ; j ++){
			if ( pp.member[j].num == pp.member[i].num){
				cout << "请重新输入第" << i + 1 << "名学生的学号、姓名、高数成绩和英语成绩：" ;
				cin >> pp.member[i].num >> pp.member[i].name >> pp.member[i].math >> pp.member[i].english ;
			}
			while ( pp.member[i].math > MAX || pp.member[i].math < MIN ){
				cout << "输入无效，请重新输入该学生的高数成绩：" ;
				cin >> pp.member[i].math ;
			}
			while ( pp.member[i].english > MAX || pp.member[i].english < MIN){
				cout << "输入无效，请重新输入该学生的英语成绩：" ;
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
	
	cout << "学号\t姓名\t高数成绩\t英语成绩" << endl ;
	for ( i = 0 ; i < n ; i++){
		cout << pp.member[i].num << "\t" ;
		cout << pp.member[i].name << "\t" ;
		cout << pp.member[i].math << "               " ;
		cout << pp.member[i].english <<  "\t" ;
		cout << endl ;
	}
	cout << "高数的最高成绩\t高数的最低成绩\t英语的最高成绩\t英语的最低成绩\t" << endl ;
	cout << max1 <<"                " << min1 <<"                   " << max2 <<"                " << min2 <<"             " << endl ;
	cout << "高数的平均成绩\t英语的平均成绩\t" << endl ;
	cout << ave1 << "             " << ave2 << "              " << endl;
	
	cout << "是否要查询学生成绩（Y表示需要 ， N表示不需要）：" ;
	cin >> re ;
	while ( re == 'Y'){
		cout << "请输入要查询学生的学号：" ;
		cin >> nn ;
		for ( i = 0 ; i < n ; i++){
			if ( nn == pp.member[i].num){
				cout << "该学生的高数成绩为" << pp.member[i].math << "分，英语成绩为" << pp.member[i].english << endl ;
				break ;
			}
		}
		while ( i == n ){
			cout << "您输入的学号有误，请重新输入要查询学生的学号：" ;
			cin >> nn ;
			for ( j = 0 ; j < n ; j++){
				if ( nn == pp.member[j].num){
					cout << "该学生的高数成绩为" << pp.member[j].math << "分，英语成绩为" << pp.member[j].english << endl ;
					break ;
				}
			}
			i = j ;
		}
		cout << "是否要继续查询学生的成绩（Y表示需要 ， N表示不需要）：" ;
		cin >> re ;
	}
	
	
	return 0 ;
}
