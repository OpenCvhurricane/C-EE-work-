#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

int t1(string n)
{
	int x;
	if (n == "one") {
		x = 1;
	}
	else if (n == "two") {
		x = 2;
	}
	else if (n == "three") {
		x = 3;
	}
	else if (n == "zero") {
		x = 0;
	}
	else if (n == "four") {
		x = 4;
	}
	else if (n == "five") {
		x = 5;
	}
	else if (n == "six") {
		x = 6;
	}
	else if (n == "seven") {
		x = 7;
	}
	else if (n == "eight") {
		x = 8;
	}
	else if (n == "nine") {
		x = 9;
	}
	else if (n == "ten") {
		x = 10;
	}
	else if (n == "eleven") {
		x = 11;
	}
	else if (n == "twelve") {
		x = 12;
	}
	else if (n == "thirteen") {
		x = 13;
	}
	else if (n == "fourteen") {
		x = 14;
	}
	else if (n == "fifteen") {
		x = 15;
	}
	else if (n == "sixteen") {
		x = 16;
	}
	else if (n == "seventeen") {
		x = 17;
	}
	else if (n == "eighteen") {
		x = 18;
	}
	else if (n == "nineteen") {
		x = 19;
	}
	else if (n == "twenty") {
		x = 20;
	}

	return  x;
}

string  t2(int n)
{
	string a;
	if (n == 0) {
		a = "zero";
	}
	else if (n == 1) {
		a = "one";
	}
	else if (n == 2) {
		a = "two";
	}
	else if (n == 3) {
		a = "three";
	}
	else if (n == 4) {
		a = "four";
	}
	else if (n == 5) {
		a = "five";
	}
	else if (n == 6) {
		a = "six";
	}
	else if (n == 7) {
		a = "seven";
	}
	else if (n == 8) {
		a = "eight";
	}
	else if (n == 9) {
		a = "nine";
	}
	else if (n == 10) {
		a = "ten";
	}
	else if (n == 11) {
		a = "eleven";
	}
	else if (n == 13) {
		a = "thirteen";
	}
	else if (n == 12) {
		a = "twelve";
	}
	else if (n == 14) {
		a = "fourteen";
	}
	else if (n == 15) {
		a = "sixteen";
	}
	else if (n == 17) {
		a = "seventeen";
	}
	else if (n == 18) {
		a = "eighteen";
	}
	else if (n == 19) {
		a = "nineteen";
	}
	return a;
}

string t3(int n)
{
	string a;
	if (n == 2) {
		a = "twenty";
	}
	else if (n == 3) {
		a = "thirty";
	}
	else if (n == 4) {
		a = "forty";
	}
	else if (n == 5) {
		a = "fifty";
	}
	else if (n == 6) {
		a = "sixty";
	}
	else if (n == 7) {
		a = "seventy";
	}
	else if (n == 8) {
		a = "eighty";
	}
	else if (n == 9) {
		a = "ninety";
	}
	return a;
}
double t4(string a) {
	int n = 0;
	int i = 1;
	vector <string> arr(n + 1);
	do {
		if (a.find(" ", 0) != -1) {
			
			arr[n]= a.substr(0, a.find(" ", 0));
			a.erase(0, arr[n].length());
			a.erase(0, 1);
			n++;
			arr.resize(n + 1);
		}
		if (a.find(" ", 0) == -1) {
			i = 0;
			arr[n] = a;
		}
	} while (i == 1);
	double b = 0;
	int e = 0;
	do {
		b += t1(arr[e])*pow(10,-(e+1));
		e++;
	} while ( e <= n);
	return b;
};

string retran(int n)
{
	string b;
	if (n > 100)
	{
		int a = n / 100;
		b.append(t2(a));
		b.append(" hundred");
		if (n % 100 == 0) {
			return b;
		}
		else
		{
			int c = (n - a * 100) / 10;
			b.append(" and");
			if (c < 2)
			{
				c = (n - a * 100);
				b.append(" ");
				b.append(t2(c));
				return b;
			}
			else
			{
				b.append(" ");
				b.append(t3(c));
				c = n - a * 100 - c * 10;
				if (c == 0)
				{
					return b;
				}
				else
				{
					b.append("-");
					b.append(t2(c));
					return b;
				}
			}
		}
	}
	else
	{
		int c = n / 10;
		if (c < 2)
		{
			b.append(t2(n));
			return b;
		}
		else
		{
			b.append(t3(c));
			c = n - c * 10;
			b.append("-");
			b.append(t2(c));
		}
	}
}
string retran2(double a)
{
	int e = a;
	string c = retran(e);
	double(b);
	b= a - e;
	if (b == 0)
	{
		return c;
	}
	else
	{
		c.append(" point ");
		int i = 1;
		do
		{
			int d = b * pow(10,i);
			c.append(retran(d));
			c.append(" ");
			b = b - ((double)d) / (pow(10, i));
			i++;
		} while (b!=0&&i<4);
		return c;
	}
}
int main()
{
	char x = 'y';
	do {
		cout << "请输入两个范围在0-20的英文单词:" ;
		string a, b, z, y;
		getline(cin, a);
		getline(cin, b);
		double c, d;
		if (a.find("point", 0) != -1) {
			z = a.substr(0, a.find("point", 0) - 1);
			a.erase(0, a.find("point", 0) + 6);

			c = t1(z) + t4(a);
		}
		else
		{
			c = t1(a);
		}
		if (b.find("point", 0) != -1) {
			z = b.substr(0, b.find("point", 0) - 1);
			b.erase(0, b.find("point", 0) + 6);

			d = t1(z) + t4(b);
		}
		else
		{
			d = t1(b);
		}
		double e = c * d;
		z = retran2(e);
		cout << "这两个数的乘积的数字结果是：" ;
		cout << z << endl;
		cout << "是否要继续输入（y表示继续，其他表示停止）" << endl;
		cin >> x;
		cin.get();
	} while (x == 'y');
	return 0;
}
