#include<iostream>
#include<string>

using namespace std ;

int tran (string    ) ;
void fun1 (int     ) ;
void fun2 ( int  ) ;
void fun3 ( int  ) ;
 
int main()
{
	int flag  = 1 , r1 , r2 ;
	string in1 , in2  ,  re ;
	
	while ( flag ){
		cout << "请分别输入0-20内的整数英文单词：" ;
		cin >> in1 >> in2 ;
		r1 = tran (in1) ;
		r2 = tran ( in2 ) ;
		cout << "计算的英语单词结果是:"  ;
		if ( r1 *r2 / 100 != 0 ){
			fun1(r1 * r2/100) ;
			cout << " " << "hundred"  << "  "  ;
			if ( r1 * r2 % 100 !=  0 ){
				if ( r1 * r2 / 10 - r1 * r2 / 100 * 10 != 0 ){
					if  ( r1 * r2 / 10 - r1 * r2 / 100 * 10 != 1){
						fun3(r1 * r2 / 10 - r1 *r2 /100 * 10) ;
						if ( r1 * r2  - r1 * r2 / 10 * 10 != 0){
							cout << "  and   "  ; 
							fun1(r1 * r2 - r1 * r2 / 10 * 10) ;
						}
					}else{
						fun2(r1 * r2 % 100) ;
					}
				} 
			}
		}else if ( r1 * r2 / 10 - r1 * r2 / 100 * 10 != 0 ){
			if ( r1 * r2 / 10 - r1 * r2 / 100 * 10 != 1){
				fun3 ( r1 * r2 / 10 - r1 * r2 / 100 * 10) ;
				if ( r1 * r2 % 10 != 0){
					fun1 ( r1 * r2 % 10) ;
				}
			}else {
				fun2(r1 * r2) ;
			}
		}else {
			fun1 ( r1 * r2) ;
		}
		cout << endl ;
		cout <<  "计算的数字结果是" << r1 * r2  << endl;
		cout << "是否要继续输入（1代表继续，0表示不需要）:" ;
		cin >> flag ;
	}
	
	return 0 ;
}

int tran (string n )
{
	int x ;
	if ( n == "one"){
		x = 1 ; 
	}else if ( n == "two"){
		x = 2 ;
	}else if ( n == "three"){
		x = 3 ; 
	}else if ( n == "zero"){
		x = 0 ;
	}else if ( n == "four"){
		x = 4 ;
	}else if ( n == "five"){
		x = 5 ;
	}else if ( n == "six"){
		x = 6 ;
	}else if  (n == "seven"){
		x = 7 ;
	}else if  (n == "eight"){
		x = 8 ;
	}else if ( n == "nine"){
		x = 9 ;
	}else if ( n == "ten"){
		x = 10 ;
	}else if ( n == "eleven"){
		x = 11 ;
	}else if ( n == "twelve"){
		x = 12 ;
	}else if (n == "thirteen"){
		x = 13 ;
	}else if ( n== "fourteen"){
		x = 14 ;
	}else if ( n == "fifteen"){
		x = 15 ;
	}else if ( n == "sixteen"){
		x = 16 ;
	}else if ( n == "seventeen"){
		x = 17 ;
	}else if ( n == "eighteen"){
		x = 18 ;
	}else if ( n == "nineteen"){
		x = 19;
	}else if ( n == "twenty"){
		x = 20 ;
	}
	
	return  x ;
}
void fun1 (int n )
{
	if (n == 0){
		cout  << "zero" ;
	}else if ( n == 1){
		cout << "one" ;
	}else if (n == 2 ){
		cout << "two" ;
	}else if (n == 3){
		cout << "three" ;
	}else if ( n == 4 ){
		cout << "four" ;
	}else if ( n == 5){
		cout << "five" ;
	}else if ( n == 6){
		cout << "six" ;
	}else if ( n == 7){
		cout << "seven" ;
	}else if ( n == 8){
		cout << "eight" ;
	}else if ( n == 9){
		cout << "nine" ;
	}
}

void fun2(int n )
{
	if ( n == 11){
		cout << "eleven" ;
	}else if ( n == 13){
		cout << "thirteen" ;
	}else if ( n == 12){
		cout << "twelve" ;
	}else if ( n == 14){
		cout << "fourteen" ;
	}else if ( n == 15){
		cout << "sixteen" ;
	}else if ( n == 17){
		cout << "seventeen" ;
	}else if ( n == 10){
		cout << "ten" ;
	}else if ( n == 18){
		cout << "eighteen" ;
	}else if ( n == 19){
		cout << "nineteen" ;
	}
}

void fun3(int n) 
{
	if (n == 2 ){
		cout << "twenty" ;
	}else if ( n == 3){
		cout << "thirty" ;
	}else if ( n == 4){
		cout << "forty" ;
	}else if ( n == 5){
		cout << "fifty" ;
	}else if ( n == 6){
		cout << "sixty" ;
	}else if ( n == 7){
		cout << "seventy" ;
	}else if ( n == 8){
		cout << "eighty"  ;
	}else if ( n == 9){
		cout << "ninety" ;
	}
}
