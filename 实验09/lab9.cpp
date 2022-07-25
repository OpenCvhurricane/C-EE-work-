#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define  N  100
#define MAX 100
#define MIN 0

using namespace std ;

struct Grade {
	int id ;
	string name ;
	int math ;
	int english ;
}; 

void selection_sort(vector<struct Grade>& arr , int len ) {
        for (int i = 0; i < len - 1; i++) {
                int min = i;
                for (int j = i + 1; j < len; j++)
                        if (arr[j].id< arr[min].id)
                                min = j;
                std::swap(arr[i], arr[min]);
        }
}
void selection_sortmath( vector<struct Grade>& arr , int len) {
        for (int i = 0; i < len - 1; i++) {
                int min = i;
                for (int j = i + 1; j < len; j++)
                        if (arr[j].math< arr[min].math)
                                min = j;
                std::swap(arr[i], arr[min]);
        }
}
void selection_sortenglish(vector<struct Grade>& arr , int len) {
        for (int i = 0; i < len - 1; i++) {
                int min = i;
                for (int j = i + 1; j < len; j++)
                        if (arr[j].english< arr[min].english)
                                min = j;
                std::swap(arr[i], arr[min]);
        }
}




int main()
{
	int n  , flag = 1 , idd[N] , i = 0 , count = 1; 
	double max1 , max2 , min1 , min2 , sum1 = 0 , sum2 = 0 , ave1 , ave2  , num1 = 0 , num2 = 0 , nume = 0;
	double ma[N] , eng[N] ;
	string na[N] ;
	
	vector<struct Grade > stu (N) ;
	
	while(count){
		flag = count ;
		while(flag){
			cout << "�������" << ++n << "��ѧ����ѧ�ţ������������ɼ�������ɼ���" ;
			cin >> stu[n-1].id  ;
			cin >> stu[n-1].name ;
			cin >> stu[n-1].math  ;
			cin >> stu[n-1].english ;
			for ( int j = 0 ; j < n-1 ; j++){
				if ( stu[j].id == stu[n-1].id){
					cout << "�����������" << n << "��ѧ����ѧ��" ;
					cin >> stu[n-1].id;
				}
			}
			if ( stu[n-1].math < MIN || stu[n-1].math > MAX ){
				cout << "�����������" << n << "��ѧ���ø����ɼ���" ; 
				cin >> stu[n-1].math ;
			}
			if ( stu[n-1].english < MIN || stu[n-1].english > MAX){
				cout << "�����������" << n <<"��ѧ����Ӣ��ɼ�" ;
				cin >> stu[n-1].english ;
			}
			sum1 = sum1 + stu[n-1].math ;
			sum2 = sum2 + stu[n-1].english ;
			if ( stu[n-1].math < 60 ){
				num1 ++ ;
			}
			if ( stu[n-1].english < 60 ){
				num2 ++ ;
			}
		cout << "�Ƿ���������µ�һ��ѧ���ĳɼ���1��ʾ������0��ʾֹͣ����" ;
		cin >> flag ;
		}
		selection_sort(stu , n) ;
		cout << "ѧ��\t����\t����\tӢ��"<< endl ;
		for (int i = 0 ; i < n ; i ++){
		    cout << stu[i].id << "\t" << stu[i].name << "\t" << stu[i].math << "\t" << stu[i].english << endl ;
		}
		selection_sortmath( stu , n) ;
		max1 = stu[n-1].math ;
		min1 = stu[0].math ;
		selection_sortenglish(stu , n) ;
		max2 = stu[n-1].english ;
		min2 = stu[0].english ;
		ave1 = sum1 / n ;
		ave2 = sum2 /n ;
		cout << "�γ�\t����\t��߷�\t��ͷ�\tƽ����\t��������" << endl ;
		cout << "����" << "\t"<<  n << "\t" << max1 << "\t" << min1 <<"\t" << ave1 << "\t" << (float) num1 / n * 100 << "%"   << endl;
		cout << "Ӣ��" << "\t" << n << "\t" << max2 << "\t" << min2 << "\t" << ave2 << "\t" << (float)  num2 / n  * 100 << "%" << endl ;
		cout << "�Ƿ�Ҫ��������ѧ����Ϣ��0��ʾֹͣ��1��ʾ��������" ;
		cin >> count ;
	}
	
	return 0 ;
}
