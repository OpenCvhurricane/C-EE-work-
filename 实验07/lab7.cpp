#include<iostream>

#define  Num 30 

using namespace std ;

struct Grade {
	double math ;
	double engl ;
	int  num ;
	string name ;
};

int main ()
{
	struct Grade meber[Num] ;
	int i  , j  ;
	double max1 = 0 , max2 = 0 ,  ave1 = 0  , ave2 = 0 , sum1 = 0 , sum2 = 0 , n  ,  min1  , min2  ;
	
	cout << "������Ҫ�����ѧ������ ��" ;
	cin >> n ; 
	for ( i = 0 ; i < n ; i ++){
		cout << "�������"<< i + 1 << "��ѧ����ѧ�š���������ѧ���ĸ���������ɼ���" ;
		cin >> meber[i].num;
		cin  >> meber[i].name ;
		cin >> meber[i].math ;
		cin >> meber[i].engl ;
		min1 = meber[0].math ;
		min2 = meber[0].engl ;
		while ( meber[i].math > 100){
			cout << "�����������" << i + 1 << "�ĸߵ���ѧ�ɼ�" << endl ;
			cin >> meber[i].math ; 
		}
		while ( meber[i].engl > 100){
			cout << "�����������" << i + 1 << "��Ӣ��ɼ�" << endl ; 
			cin >> meber[i].engl ;
		}
		for (j = 0 ; j  < i ; j ++){
			while (meber[i].num == meber[j].num){
				cout << "�����������"<<i + 1<< "��ѧ����ѧ�š�����������������ɼ� ��" ;
				cin >> meber[i].num ;
				cin >> meber[i].name ;
				cin >> meber[i].math ;
				cin >> meber[i].engl ;  
			}
			while ( meber[i].math > 100){
			cout << "�����������" << i + 1 << "�ĸߵ���ѧ�ɼ�" << endl ;
			cin >> meber[i].math ;
		}
		while ( meber[i].engl > 100){
			cout << "�����������" << i + 1 << "��Ӣ��ɼ�" << endl ; 
			cin >> meber[i].engl ;
		}
		}
	}
/*	for (j = 1 ; j <= n ; j ++){
		for ( i =0 ; i < j - 1 ;i ++){
			while (meber[i].num == meber[j-1].num){
				cout << "�����������"<< j << "��ѧ����ѧ�ż�����������ɼ� ��" ;
				cin >> meber[j-1].num ;
				cin >> meber[j-1].math ;
				cin >> meber[j-1].engl ;  
			}
		}
	} */
	for ( i = 0 ; i < n ; i ++ ){
		sum1 = sum1  + meber[i].math ;
		sum2 = sum2 + meber[i].engl ;
		if (meber[i].math > max1){
			max1 = meber[i].math ;
		}
		if ( meber[i].engl > max2){
			max2 = meber[i].engl ;
		}
		if ( min1 > meber[i].math){
			min1 = meber[i].math ;
		}
		if ( min2 > meber[i].engl){
			min2 = meber[i].engl ;
		}
	}
	ave1 = sum1 / n ;
	ave2 = sum2 / n ;
	
	cout << "ѧ��\t����\t����\tӢ��\t" << endl ;
	for (i = 0 ; i < n ; i++){
		cout << meber[i].num << "\t" ;
		cout << meber[i].name << "\t" ;
		cout << meber[i].math << "\t" ;
		cout << meber[i].engl << "\t" << endl ;
	}
	
	cout << "��Ŀ\t��߷�\t��ͷ�\tƽ����\t\n" ;
	cout << "����\t" << max1 << "\t" << min1 << "\t" << ave1 << "\t\n" ;
	cout << "����\t"<< max2 << "\t" << min2 << "\t" << ave2 << "\t\n" ;
	
	return 0 ;
}
