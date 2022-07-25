#include<iostream>
#include"cClient.h"

using namespace std ;

int main()
{
	cClient n1 , n2 ;
	int i = 1 ;
	
	n1.display(0) ;
	n1.SetServerName(i) ;
	n1.SetName(i) ;
	n1.display(i) ;
	n2.SetServerName(i+1) ;
	n2.SetName(i+ 1) ;
	n2.display(i +1) ; 
	
	return 0 ;
}
