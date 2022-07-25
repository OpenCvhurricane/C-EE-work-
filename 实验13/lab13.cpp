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
			cout << "无成绩信息，请录入" ;
			while (flag != 0) {
				cout << "请输入课程编号" ;
				cin >> classID;
				cout << "请输入课程名称" << endl;
				cin >> className;
				cout << "请输入学号" << endl;
				cin >> A[j].ID;
				cout << "请输入姓名" << endl;
				cin >> A[j].Name;
				cout << "请输入平时成绩" << endl;
				cin >> A[j].usualgrade;
				cout << "请输入期末成绩" << endl;
				cin >> A[j].finalgrade;
				A[j].grade = A[j].usualgrade * 0.5 + A[j].finalgrade * 0.5;
				cout << "是否继续输入？是（1），否（0）:" ;
				cin >> flag;
				j++; Max++;
			}
		}
		else
		{
			cout << "读取成功" << endl;
		}
		if (infile1 >> classID >> className)
			cout << "课程编号：" << classID << "   " << "课程名称" << className << endl;
		while (infile >> A[j].ID >> A[j].Name >> A[j].usualgrade >> A[j].finalgrade) {
			A[j].grade = A[j].usualgrade * 0.5 + A[j].finalgrade * 0.5;
			cout << A[j].ID << "     " << A[j].Name << "     " << A[j].usualgrade << "     " << A[j].finalgrade << endl;
			Max++;
			j++;
		}
	};
	void inputinformation() {
		cout << "请输入课程名称" << endl;
		cin >> className;
		cout << "请输入课程编号" << endl;
		cin >> classID;
		cout << "请输入课程编号为：" << classID << "的" << className << "成绩：" << endl;
		j = Max + count;
		bool flag = 1;
		while (flag != 0) {
			while (1)
			{
				bool abc = 1;
				cout << "请输入学号" << endl;
				cin >> A[j].ID;
				for (int i = 0; i < Max + count; i++)
				{
					if (A[j].ID == A[i].ID)
					{
						cout << "学号错误，请重新输入" << endl;
						abc = 0;
					}
				}
				if (abc == 1) break;
			}
			cout << "请输入姓名" << endl;
			cin >> A[j].Name;
			cout << "请输入平时成绩" << endl;
			cin >> A[j].usualgrade;
			cout << "请输入期末成绩" << endl;
			cin >> A[j].finalgrade;
			A[j].grade = A[j].usualgrade * 0.5 + A[j].finalgrade * 0.5;
			cout << "是否继续输入？是（1），否（0）" << endl;
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
			cout << "文件名有误，请重新输入" << endl;
			goto A;
		}
		else
		{
			cout << "录入成功" << endl;
			for (int j = 0; j < Max + count; j++) {
				outfile << A[j].ID << "   " << A[j].Name << "   " << A[j].usualgrade << "   " << A[j].finalgrade << endl;
			}
		}
		outfile.close();
	}
	void amendstudent() {
		int n, k, a;
		cout << "请输入想要改动学生的学号：" << endl;
	C:cin >> n;
		for (int j = 0; j < Max + count; j++) {
			if (n == A[j].ID) {
			B:cout << "请输入改动内容（学号0，姓名1，平时成绩2，期末成绩3）" << endl;
				cin >> k;
				switch (k) {
				case 0:
				{
					cout << "请输入新的学号" << endl;
					cin >> A[j].ID;
					break;
				}
				case 1:
				{
					cout << "请输入新的姓名：" << endl;
					cin >> A[j].Name;
					break;
				}
				case 2:
				{
					cout << "请输入新的平时成绩:" << endl;
					cin >> A[j].usualgrade;
					break;
				}
				case 3:
				{
					cout << "请输入新的期末成绩：" << endl;
					cin >> A[j].finalgrade;
					break;
				}
				}
				cout << "修改成功：" << endl;
				cout << A[j].ID << "  " << A[j].Name << "  " << A[j].usualgrade << "  " << A[j].finalgrade << endl;
				cout << "是否继续修改？是1，否2:" ;
				cin >> a;
				if (a == 1)
					goto B;
				if (a == 2)
					break;
			}
			else
			{
				cout << "未找到该学生，请重新输入:" ;
				goto C;
			}
		}
	};
	void deletestudent() {
		int n, k, a;
	D:cout << "请输入想要删除的学生的学号：" ;
	E:cin >> n;
		for (int j = 0; j < Max + count; j++) {
			if (n == A[j].ID) {
				cout << "是否删除该学生信息(1代表继续，2代表停止）:" ;
				cin >> k;
				if (k == 1) {
					for (int i = j; i < Max + count - 1; i++) {
						A[i] = A[i + 1];
					}
					count = count - 1;
					cout << "是否继续删除（1代表继续，2代表停止）：" ;
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
				cout << "未找到该学生，请重新输入学号：" ;
				goto E;
			}
		}

	};
	void showinformation() {
		cout << "课程编号：" << classID << "   课程名称：" << className << endl;
		cout << "学号  " << "姓名  " << "平时成绩  " << "期末成绩  " << "总成绩" << endl;
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
		cout << "平时分最高为：" << b << endl;
		cout << "期末分最高为：" << c << endl;
		cout << "总分最高为：" << a << endl;
		cout << "平时分最低为：" << y << endl;
		cout << "期末分最低为：" << z << endl;
		cout << "总分最低为：" << x << endl;
		cout << "总分平均分为：" << aver1 << endl;
		cout << "平时分平均分为： " << aver2 << endl;
		cout << "期末平均分为：" << aver3 << endl;
		cout << "平时分低于60分的人有：" << count1 << endl;
		cout << "平时分60~70分的人有：" << count2 << endl;
		cout << "平时分70~80分的人有：" << count3 << endl;
		cout << "平时分80~90分的人有：" << count4 << endl;
		cout << "平时分90~100分的人有：" << count5 << endl;
		cout << "期末分低于60分的人有：" << count6 << endl;
		cout << "期末分60~70分的人有：" << count7 << endl;
		cout << "期末分70~80分的人有：" << count8 << endl;
		cout << "期末分80~90分的人有：" << count9 << endl;
		cout << "期末分90~100分的人有：" << count10 << endl;
		cout << "总分低于60分的人有：" << count11 << endl;
		cout << "总分60~70分的人有：" << count12 << endl;
		cout << "总分70~80分的人有：" << count13 << endl;
		cout << "总分80~90分的人有：" << count14 << endl;
		cout << "总分90~100分的人有：" << count15 << endl;
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
			cout << "无成绩信息" << endl;
		}
		else
			cout << "读取成功" << endl;
		while (infile >> B[j].ID >> B[j].Name >> B[j].usualgrade >> B[j].finalgrade) {
			B[j].grade = B[j].usualgrade * 0.5 + B[j].finalgrade * 0.5;
			Max++;
			j++;
		}
	};
	void showinformation() {
		cout << className << "    " << classID << endl;
		cout << "学号  " << "姓名  " << "平时成绩  " << "期末成绩  " << "总成绩" << endl;
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
		cout << setw(10) << "平时分最高分：" << setw(10) << "期末分最高分" << setw(10) << "总分最高分" <<  setw(10) << "平时分最低分" << setw(10)<< "期末分最低分" << setw(10)<< "总分最低分" << setw(10) << "总分平均分" << setw(10) <<"平时分平均分"  <<  setw(10) << "期末平均分" << endl;
		cout << setw(10) << b <<  setw(10) <<  c << setw(10) <<  a << setw (10) << y << setw (10) <<z << setw (10) << x <<setw(10) << aver1 <<setw(10) << aver2 << setw(10) << aver3 << endl;
		cout << "平时分低于60分的人有：" << count1 << endl;
		cout << "平时分60~70分的人有：" << count2 << endl;
		cout << "平时分70~80分的人有：" << count3 << endl;
		cout << "平时分80~90分的人有：" << count4 << endl;
		cout << "平时分90~100分的人有：" << count5 << endl;
		cout << "期末分低于60分的人有：" << count6 << endl;
		cout << "期末分60~70分的人有：" << count7 << endl;
		cout << "期末分70~80分的人有：" << count8 << endl;
		cout << "期末分80~90分的人有：" << count9 << endl;
		cout << "期末分90~100分的人有：" << count10 << endl;
		cout << "总分低于60分的人有：" << count11 << endl;
		cout << "总分60~70分的人有：" << count12 << endl;
		cout << "总分70~80分的人有：" << count13 << endl;
		cout << "总分80~90分的人有：" << count14 << endl;
		cout << "总分90~100分的人有：" << count15 << endl;
	}
	void findinformation() {
		int n = 0;
		int a = 0;
		int id = 0;
		string name;
		int rank1 = 1, rank2 = 1, rank3 = 1;
	F:cout << "请输入查找方式（1代表学号查询，2代表姓名查询）:" ;
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "请输入学生学号:" ;
			cin >> id;
			for (int i = 0; i < Max; i++) {
				if (B[i].ID == id) {
					j = i;
					break;
				}
				else if (B[i].ID != id && i < Max - 1)
					continue;
				else {
					cout << "查无此人，重新输入：" ;
					cin >> id;
					i = -1;
				}
			}break;
		case 2:
			cout << "请输入学生姓名:" ;
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
					cout << "查无此人，重新输入：" ;
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
		cout <<setw(10) << "学号" << setw (10) << "姓名" << setw(10) << "平时成绩"<< setw (10) << "期末成绩" <<setw(10) << "总成绩" << endl;
		cout << setw(10) << B[j].ID << setw (10) << B[j].Name << setw(10) << B[j].usualgrade <<setw(10) << B[j].finalgrade <<setw(10) << B[j].grade << endl;
		cout << "平时成绩排名为：" << rank1 << "  期末成绩排名为：" << rank2 << "总成绩排名为：" << rank3 << endl;
		cout << "是否继续查询（1代表继续，2代表停止）：" ;
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
	cout << "请输入你的身份(1代表老师,2代表学生）：" ;
	cin >> a;
	if (a == 1) {
		cout << "请输入密码（初始密码为123456）：" ;
		cin >> code;
		ifstream infile(filename.c_str(), ios::in);
		infile >> code1;
		while (code != code1)
		{
			cout << "密码错误，重新输入：" ;
			cin >> code;
		}
		if (code == "123456") {
			cout << "请修改密码：" ;
			cin >> code;
			ofstream outfile(filename.c_str(), ios::out);
			outfile << code;
		}
		else
		{
			cout << "是否修改密码(1进行修改，2代表不修改):" ;
			cin >> z;
			if (z == 1)
			{
				cout << "请修改密码：" ;
				cin >> code;
				ofstream outfile(filename.c_str(), ios::out);
				outfile << code;
			}
		}
		do {
			cout << "[1]读取学生成绩  [2]录入学生成绩  [3]修改学生信息" << endl;
			cout << "[4]删除学生信息  [5]存入文件      [6]显示学生信息  [7]信息统计" << endl;
			cout << "请选择功能：" ;
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
			cout << "是否继续继续进行操作（1代表继续，2代表停止操作）：" ;
			cin >> y;
		} while (y != 2);
	}
	if (a == 2) {
		do {
			cout << "[1]读取学生成绩 [2]查询学生成绩" << endl;
			cout << "[3]统计学生信息 [4]显示学生信息" << endl;
			cout << "请选择功能：";
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
			}cout << "是否继续进行操作（1代表继续操作，2代表停止操作）：";
			cin >> y;
		} while (y != 2);
	}
	return 0;
}