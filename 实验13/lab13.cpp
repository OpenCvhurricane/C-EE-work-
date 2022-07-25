#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

struct teacher {
	int ID;
	string Name;
	double usualgrade;
	double finalgrade;
	double grade;
};
class teacher_system {
public:
	int classID = 0;
	int ID = 0;
	int Max = 0;
	int j = 0;
	int count = 0;
	string n;
	teacher h;
	vector<teacher>A = { 100,h };
	string className, Name;
	double usualgrade = 0;
	double finalgrade = 0;
	double grade = 0;
	void inputfile() {
		bool flag = 1;
		string filename;
		filename = "grade.txt";
		ifstream infile1(filename.c_str(), ios::in);
		infile1 >> classID >> className;
		ifstream infile(filename.c_str(), ios::in);
		if (!infile) {
			cout << "�޳ɼ���Ϣ����¼��" ;
			while (flag != 0) {
				cout << "������γ̱��" ;
				cin >> classID;
				cout << "������γ�����" << endl;
				cin >> className;
				cout << "������ѧ��" << endl;
				cin >> A[j].ID;
				cout << "����������" << endl;
				cin >> A[j].Name;
				cout << "������ƽʱ�ɼ�" << endl;
				cin >> A[j].usualgrade;
				cout << "��������ĩ�ɼ�" << endl;
				cin >> A[j].finalgrade;
				A[j].grade = A[j].usualgrade * 0.5 + A[j].finalgrade * 0.5;
				cout << "�Ƿ�������룿�ǣ�1������0��:" ;
				cin >> flag;
				j++; Max++;
			}
		}
		else
		{
			cout << "��ȡ�ɹ�" << endl;
		}
		if (infile1 >> classID >> className)
			cout << "�γ̱�ţ�" << classID << "   " << "�γ�����" << className << endl;
		while (infile >> A[j].ID >> A[j].Name >> A[j].usualgrade >> A[j].finalgrade) {
			A[j].grade = A[j].usualgrade * 0.5 + A[j].finalgrade * 0.5;
			cout << A[j].ID << "     " << A[j].Name << "     " << A[j].usualgrade << "     " << A[j].finalgrade << endl;
			Max++;
			j++;
		}
	};
	void inputinformation() {
		cout << "������γ�����" << endl;
		cin >> className;
		cout << "������γ̱��" << endl;
		cin >> classID;
		cout << "������γ̱��Ϊ��" << classID << "��" << className << "�ɼ���" << endl;
		j = Max + count;
		bool flag = 1;
		while (flag != 0) {
			while (1)
			{
				bool abc = 1;
				cout << "������ѧ��" << endl;
				cin >> A[j].ID;
				for (int i = 0; i < Max + count; i++)
				{
					if (A[j].ID == A[i].ID)
					{
						cout << "ѧ�Ŵ�������������" << endl;
						abc = 0;
					}
				}
				if (abc == 1) break;
			}
			cout << "����������" << endl;
			cin >> A[j].Name;
			cout << "������ƽʱ�ɼ�" << endl;
			cin >> A[j].usualgrade;
			cout << "��������ĩ�ɼ�" << endl;
			cin >> A[j].finalgrade;
			A[j].grade = A[j].usualgrade * 0.5 + A[j].finalgrade * 0.5;
			cout << "�Ƿ�������룿�ǣ�1������0��" << endl;
			cin >> flag;
			j++; count++;
		}
		for (int j = 0; j < Max + count; j++) {
			cout << A[j].ID << endl;
		}
	}
	void outputfile() {
		string filename;
		string str = "class.txt";
	A:
		 filename = "grade.txt";
		ofstream outfile1(str.c_str(), ios::out);
		outfile1 << classID << "   " << className << endl;
		ofstream outfile(filename.c_str(), ios::out);
		if (!outfile) {
			cout << "�ļ�����������������" << endl;
			goto A;
		}
		else
		{
			cout << "¼��ɹ�" << endl;
			for (int j = 0; j < Max + count; j++) {
				outfile << A[j].ID << "   " << A[j].Name << "   " << A[j].usualgrade << "   " << A[j].finalgrade << endl;
			}
		}
		outfile.close();
	}
	void amendstudent() {
		int n, k, a;
		cout << "��������Ҫ�Ķ�ѧ����ѧ�ţ�" << endl;
	C:cin >> n;
		for (int j = 0; j < Max + count; j++) {
			if (n == A[j].ID) {
			B:cout << "������Ķ����ݣ�ѧ��0������1��ƽʱ�ɼ�2����ĩ�ɼ�3��" << endl;
				cin >> k;
				switch (k) {
				case 0:
				{
					cout << "�������µ�ѧ��" << endl;
					cin >> A[j].ID;
					break;
				}
				case 1:
				{
					cout << "�������µ�������" << endl;
					cin >> A[j].Name;
					break;
				}
				case 2:
				{
					cout << "�������µ�ƽʱ�ɼ�:" << endl;
					cin >> A[j].usualgrade;
					break;
				}
				case 3:
				{
					cout << "�������µ���ĩ�ɼ���" << endl;
					cin >> A[j].finalgrade;
					break;
				}
				}
				cout << "�޸ĳɹ���" << endl;
				cout << A[j].ID << "  " << A[j].Name << "  " << A[j].usualgrade << "  " << A[j].finalgrade << endl;
				cout << "�Ƿ�����޸ģ���1����2:" ;
				cin >> a;
				if (a == 1)
					goto B;
				if (a == 2)
					break;
			}
			else
			{
				cout << "δ�ҵ���ѧ��������������:" ;
				goto C;
			}
		}
	};
	void deletestudent() {
		int n, k, a;
	D:cout << "��������Ҫɾ����ѧ����ѧ�ţ�" ;
	E:cin >> n;
		for (int j = 0; j < Max + count; j++) {
			if (n == A[j].ID) {
				cout << "�Ƿ�ɾ����ѧ����Ϣ(1���������2����ֹͣ��:" ;
				cin >> k;
				if (k == 1) {
					for (int i = j; i < Max + count - 1; i++) {
						A[i] = A[i + 1];
					}
					count = count - 1;
					cout << "�Ƿ����ɾ����1���������2����ֹͣ����" ;
					cin >> a;
					if (a == 1) {
						goto D;
					}
					if (a == 2)
						break;
				}
				if (k == 2) {
					break;
				}
			}
			else
			{
				cout << "δ�ҵ���ѧ��������������ѧ�ţ�" ;
				goto E;
			}
		}

	};
	void showinformation() {
		cout << "�γ̱�ţ�" << classID << "   �γ����ƣ�" << className << endl;
		cout << "ѧ��  " << "����  " << "ƽʱ�ɼ�  " << "��ĩ�ɼ�  " << "�ܳɼ�" << endl;
		for (int j = 0; j < Max + count; j++) {
			cout << A[j].ID << "       " << A[j].Name << "       " << A[j].usualgrade << "      " << A[j].finalgrade << "       " << A[j].grade << endl;
		}
	};
	void countinformation() {
		double a = 0, b = 0, c = 0;
		double sum1 = 0, sum2 = 0, sum3 = 0;
		double aver1 = 0, aver2 = 0, aver3 = 0;
		double x = A[0].grade, y = A[0].usualgrade, z = A[0].finalgrade;
		int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0,
			count9 = 0, count10 = 0, count11 = 0, count12 = 0, count13 = 0, count14 = 0, count15 = 0;
		for (int i = 0; i < Max + count; i++) {
			sum1 += A[i].grade;
			sum2 += A[i].usualgrade;
			sum3 += A[i].finalgrade;
		}
		aver1 = sum1 / (Max + count);
		aver2 = sum2 / (Max + count);
		aver3 = sum3 / (Max + count);
		for (int i = 0; i < Max + count; i++) {
			if (A[i].grade > a)
				a = A[i].grade;
			if (A[i].usualgrade > b)
				b = A[i].usualgrade;
			if (A[i].finalgrade > c)
				c = A[i].finalgrade;
		}
		for (int i = 0; i < Max + count; i++) {
			if (A[i].grade < x)
				x = A[i].grade;
			if (A[i].usualgrade < y)
				y = A[i].usualgrade;
			if (A[i].finalgrade < z)
				z = A[i].finalgrade;
		}
		for (int i = 0; i < Max + count; i++) {
			if (A[i].usualgrade < 60)
				count1++;
			if (60 <= A[i].usualgrade && A[i].usualgrade < 70)
				count2++;
			if (70 <= A[i].usualgrade && A[i].usualgrade < 80)
				count3++;
			if (80 <= A[i].usualgrade && A[i].usualgrade < 90)
				count4++;
			if (90 <= A[i].usualgrade && A[i].usualgrade <= 100)
				count5++;
			if (A[i].finalgrade < 60)
				count6++;
			if (60 <= A[i].finalgrade && A[i].finalgrade < 70)
				count7++;
			if (70 <= A[i].finalgrade && A[i].finalgrade < 80)
				count8++;
			if (80 <= A[i].finalgrade && A[i].finalgrade < 90)
				count9++;
			if (90 <= A[i].finalgrade && A[i].finalgrade <= 100)
				count10++;
			if (A[i].grade < 60)
				count11++;
			if (60 <= A[i].grade && A[i].grade < 70)
				count12++;
			if (70 <= A[i].grade && A[i].grade < 80)
				count13++;
			if (80 <= A[i].grade && A[i].grade < 90)
				count14++;
			if (90 <= A[i].grade && A[i].grade <= 100)
				count15++;
		}
		cout << "ƽʱ�����Ϊ��" << b << endl;
		cout << "��ĩ�����Ϊ��" << c << endl;
		cout << "�ܷ����Ϊ��" << a << endl;
		cout << "ƽʱ�����Ϊ��" << y << endl;
		cout << "��ĩ�����Ϊ��" << z << endl;
		cout << "�ܷ����Ϊ��" << x << endl;
		cout << "�ܷ�ƽ����Ϊ��" << aver1 << endl;
		cout << "ƽʱ��ƽ����Ϊ�� " << aver2 << endl;
		cout << "��ĩƽ����Ϊ��" << aver3 << endl;
		cout << "ƽʱ�ֵ���60�ֵ����У�" << count1 << endl;
		cout << "ƽʱ��60~70�ֵ����У�" << count2 << endl;
		cout << "ƽʱ��70~80�ֵ����У�" << count3 << endl;
		cout << "ƽʱ��80~90�ֵ����У�" << count4 << endl;
		cout << "ƽʱ��90~100�ֵ����У�" << count5 << endl;
		cout << "��ĩ�ֵ���60�ֵ����У�" << count6 << endl;
		cout << "��ĩ��60~70�ֵ����У�" << count7 << endl;
		cout << "��ĩ��70~80�ֵ����У�" << count8 << endl;
		cout << "��ĩ��80~90�ֵ����У�" << count9 << endl;
		cout << "��ĩ��90~100�ֵ����У�" << count10 << endl;
		cout << "�ֵܷ���60�ֵ����У�" << count11 << endl;
		cout << "�ܷ�60~70�ֵ����У�" << count12 << endl;
		cout << "�ܷ�70~80�ֵ����У�" << count13 << endl;
		cout << "�ܷ�80~90�ֵ����У�" << count14 << endl;
		cout << "�ܷ�90~100�ֵ����У�" << count15 << endl;
	}
};
struct student {
	int ID;
	string Name;
	double usualgrade;
	double finalgrade;
	double grade;
};
class student_system {
public:
	int classID = 0;
	int ID = 0;
	int Max = 0;
	int j = 0;
	string n;
	student h;
	vector<student>B = { 100,h };
	string className, Name;
	double usualgrade = 0;
	double finalgrade = 0;
	double grade = 0;
	void inputfile() {
		bool flag = 1;
		string filename;
		string str = "class.txt";
		filename = "grade.txt";
		ifstream infile1(str.c_str(), ios::in);
		infile1 >> classID >> className;
		ifstream infile(filename.c_str(), ios::in);
		if (!infile) {
			cout << "�޳ɼ���Ϣ" << endl;
		}
		else
			cout << "��ȡ�ɹ�" << endl;
		while (infile >> B[j].ID >> B[j].Name >> B[j].usualgrade >> B[j].finalgrade) {
			B[j].grade = B[j].usualgrade * 0.5 + B[j].finalgrade * 0.5;
			Max++;
			j++;
		}
	};
	void showinformation() {
		cout << className << "    " << classID << endl;
		cout << "ѧ��  " << "����  " << "ƽʱ�ɼ�  " << "��ĩ�ɼ�  " << "�ܳɼ�" << endl;
		for (int j = 0; j < Max; j++) {
			cout << B[j].ID << "       " << B[j].Name << "       " << B[j].usualgrade << "      " << B[j].finalgrade << "      " << B[j].grade << endl;
		}
	}
	void countinformation() {
		double a = 0, b = 0, c = 0;
		double sum1 = 0, sum2 = 0, sum3 = 0;
		double aver1 = 0, aver2 = 0, aver3 = 0;
		double x = B[0].grade, y = B[0].usualgrade, z = B[0].finalgrade;
		int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0,
			count9 = 0, count10 = 0, count11 = 0, count12 = 0, count13 = 0, count14 = 0, count15 = 0;
		for (int i = 0; i < Max; i++) {
			sum1 += B[i].grade;
			sum2 += B[i].usualgrade;
			sum3 += B[i].finalgrade;
		}
		aver1 = sum1 / Max;
		aver2 = sum2 / Max;
		aver3 = sum3 / Max;
		for (int i = 0; i < Max; i++) {
			if (B[i].grade > a)
				a = B[i].grade;
			if (B[i].usualgrade > b)
				b = B[i].usualgrade;
			if (B[i].finalgrade > c)
				c = B[i].finalgrade;
		}
		for (int i = 0; i < Max; i++) {
			if (B[i].grade < x)
				x = B[i].grade;
			if (B[i].usualgrade < y)
				y = B[i].usualgrade;
			if (B[i].finalgrade < z)
				z = B[i].finalgrade;
		}
		for (int i = 0; i < Max; i++) {
			if (B[i].usualgrade < 60)
				count1++;
			if (60 <= B[i].usualgrade && B[i].usualgrade < 70)
				count2++;
			if (70 <= B[i].usualgrade && B[i].usualgrade < 80)
				count3++;
			if (80 <= B[i].usualgrade && B[i].usualgrade < 90)
				count4++;
			if (90 <= B[i].usualgrade && B[i].usualgrade <= 100)
				count5++;
			if (B[i].finalgrade < 60)
				count6++;
			if (60 <= B[i].finalgrade && B[i].finalgrade < 70)
				count7++;
			if (70 <= B[i].finalgrade && B[i].finalgrade < 80)
				count8++;
			if (80 <= B[i].finalgrade && B[i].finalgrade < 90)
				count9++;
			if (90 <= B[i].finalgrade && B[i].finalgrade <= 100)
				count10++;
			if (B[i].grade < 60)
				count11++;
			if (60 <= B[i].grade && B[i].grade < 70)
				count12++;
			if (70 <= B[i].grade && B[i].grade < 80)
				count13++;
			if (80 <= B[i].grade && B[i].grade < 90)
				count14++;
			if (90 <= B[i].grade && B[i].grade <= 100)
				count15++;
		}
		cout << setw(10) << "ƽʱ����߷֣�" << setw(10) << "��ĩ����߷�" << setw(10) << "�ܷ���߷�" <<  setw(10) << "ƽʱ����ͷ�" << setw(10)<< "��ĩ����ͷ�" << setw(10)<< "�ܷ���ͷ�" << setw(10) << "�ܷ�ƽ����" << setw(10) <<"ƽʱ��ƽ����"  <<  setw(10) << "��ĩƽ����" << endl;
		cout << setw(10) << b <<  setw(10) <<  c << setw(10) <<  a << setw (10) << y << setw (10) <<z << setw (10) << x <<setw(10) << aver1 <<setw(10) << aver2 << setw(10) << aver3 << endl;
		cout << "ƽʱ�ֵ���60�ֵ����У�" << count1 << endl;
		cout << "ƽʱ��60~70�ֵ����У�" << count2 << endl;
		cout << "ƽʱ��70~80�ֵ����У�" << count3 << endl;
		cout << "ƽʱ��80~90�ֵ����У�" << count4 << endl;
		cout << "ƽʱ��90~100�ֵ����У�" << count5 << endl;
		cout << "��ĩ�ֵ���60�ֵ����У�" << count6 << endl;
		cout << "��ĩ��60~70�ֵ����У�" << count7 << endl;
		cout << "��ĩ��70~80�ֵ����У�" << count8 << endl;
		cout << "��ĩ��80~90�ֵ����У�" << count9 << endl;
		cout << "��ĩ��90~100�ֵ����У�" << count10 << endl;
		cout << "�ֵܷ���60�ֵ����У�" << count11 << endl;
		cout << "�ܷ�60~70�ֵ����У�" << count12 << endl;
		cout << "�ܷ�70~80�ֵ����У�" << count13 << endl;
		cout << "�ܷ�80~90�ֵ����У�" << count14 << endl;
		cout << "�ܷ�90~100�ֵ����У�" << count15 << endl;
	}
	void findinformation() {
		int n = 0;
		int a = 0;
		int id = 0;
		string name;
		int rank1 = 1, rank2 = 1, rank3 = 1;
	F:cout << "��������ҷ�ʽ��1����ѧ�Ų�ѯ��2����������ѯ��:" ;
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "������ѧ��ѧ��:" ;
			cin >> id;
			for (int i = 0; i < Max; i++) {
				if (B[i].ID == id) {
					j = i;
					break;
				}
				else if (B[i].ID != id && i < Max - 1)
					continue;
				else {
					cout << "���޴��ˣ��������룺" ;
					cin >> id;
					i = -1;
				}
			}break;
		case 2:
			cout << "������ѧ������:" ;
			cin >> name;
			for (int i = 0; i < Max; i++)
			{
				if (B[i].Name == name) {
					j = i;
					break;
				}
				else if (B[i].Name != name && i < Max - 1)
					continue;
				else
				{
					cout << "���޴��ˣ��������룺" ;
					cin >> name;
					i = -1;
				}
			}break;
		}
		for (int i = 0; i < Max; i++) {
			if (B[j].usualgrade < B[i].usualgrade)
				rank1++;
			if (B[j].finalgrade < B[i].finalgrade)
				rank2++;
			if (B[j].grade < B[i].grade)
				rank3++;
		}
		cout <<setw(10) << "ѧ��" << setw (10) << "����" << setw(10) << "ƽʱ�ɼ�"<< setw (10) << "��ĩ�ɼ�" <<setw(10) << "�ܳɼ�" << endl;
		cout << setw(10) << B[j].ID << setw (10) << B[j].Name << setw(10) << B[j].usualgrade <<setw(10) << B[j].finalgrade <<setw(10) << B[j].grade << endl;
		cout << "ƽʱ�ɼ�����Ϊ��" << rank1 << "  ��ĩ�ɼ�����Ϊ��" << rank2 << "�ܳɼ�����Ϊ��" << rank3 << endl;
		cout << "�Ƿ������ѯ��1���������2����ֹͣ����" ;
		cin >> a;
		if (a == 1)
			goto F;
	}
};
int main() {
	int x, z , y = 1 , a;
	string code, code1;
	string filename = "code.txt";
	teacher_system M1;
	student_system M2;
	cout << "������������(1������ʦ,2����ѧ������" ;
	cin >> a;
	if (a == 1) {
		cout << "���������루��ʼ����Ϊ123456����" ;
		cin >> code;
		ifstream infile(filename.c_str(), ios::in);
		infile >> code1;
		while (code != code1)
		{
			cout << "��������������룺" ;
			cin >> code;
		}
		if (code == "123456") {
			cout << "���޸����룺" ;
			cin >> code;
			ofstream outfile(filename.c_str(), ios::out);
			outfile << code;
		}
		else
		{
			cout << "�Ƿ��޸�����(1�����޸ģ�2�����޸�):" ;
			cin >> z;
			if (z == 1)
			{
				cout << "���޸����룺" ;
				cin >> code;
				ofstream outfile(filename.c_str(), ios::out);
				outfile << code;
			}
		}
		do {
			cout << "[1]��ȡѧ���ɼ�  [2]¼��ѧ���ɼ�  [3]�޸�ѧ����Ϣ" << endl;
			cout << "[4]ɾ��ѧ����Ϣ  [5]�����ļ�      [6]��ʾѧ����Ϣ  [7]��Ϣͳ��" << endl;
			cout << "��ѡ���ܣ�" ;
			cin >> x;
			switch (x) {
			case 1:
				M1.inputfile();
				break;
			case 2:
				M1.inputinformation();
				break;
			case 3:
				M1.amendstudent();
				break;
			case 4:
				M1.deletestudent();
				break;
			case 5:
				M1.outputfile();
				break;
			case 6:
				M1.showinformation();
				break;
			case 7:
				M1.countinformation();
				break;
			}
			cout << "�Ƿ�����������в�����1���������2����ֹͣ��������" ;
			cin >> y;
		} while (y != 2);
	}
	if (a == 2) {
		do {
			cout << "[1]��ȡѧ���ɼ� [2]��ѯѧ���ɼ�" << endl;
			cout << "[3]ͳ��ѧ����Ϣ [4]��ʾѧ����Ϣ" << endl;
			cout << "��ѡ���ܣ�";
			cin >> x;
			switch (x) {
			case 1:
				M2.inputfile();
				break;
			case 2:
				M2.findinformation();
				break;
			case 3:
				M2.countinformation();
				break;
			case 4:
				M2.showinformation();
				break;
			}cout << "�Ƿ�������в�����1�������������2����ֹͣ��������";
			cin >> y;
		} while (y != 2);
	}
	return 0;
}