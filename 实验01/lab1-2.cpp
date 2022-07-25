#include<iostream>
using namespace std ;
int main()
{
int radius;//定义变量，int表示变量是整数类型
cout << "Please enter the radius!\n";
cin >> radius;//从标准输入设备读入一个整数存入radius
cout << "The radius is : " << radius << '\n';//输出变量radius的值    
cout << "Please enter a different radius!\n";
cin >> radius;
cout << "Now the radius is changed to:" << radius << '\n';
return 0;
}
