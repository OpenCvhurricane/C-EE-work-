#include<iostream>
#include<string>

using namespace std ;

template<typename T>
void merge_sort(T arr[], int len) {
    T * a = arr;
    T * b = new  T[len] ;
    for (int seg = 1; seg < len ; seg += seg ) {
        for (int start = 0; start < len; start += seg + seg) {
            int low = start, mid = min(start + seg, len), high = min(start + seg + seg, len);
            int k = low ;
            int start1 = low, end1 = mid ;
            int start2 = mid, end2 = high ;
            while (start1 < end1 && start2 < end2)
                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
            while (start1 < end1)
                b[k++] = a[start1++] ;
            while (start2 < end2)
                b[k++] = a[start2++] ;
        }
        T *temp = a ;
        a = b ;
        b = temp ;
    }
    if (a != arr) {
        for (int i = 0; i < len; i++)
            b[i] = a[i] ;
        b = a ;
    }
    delete[] b ;
}

int main ()
{
	int n  , i ; 
	string temp ;
	
	while ( n < 3){
		cout << "请输入要输入的单词数量（要求大于等于三）：" ;
		cin >> n ;
	}
	string *str = new string [n] ;
	for ( i = 0 ; i < n ; i ++){
		cout << "请输入第" << i + 1 << "个单词 :" ;
		cin >>  str [i] ;
	}
	merge_sort (str , n ) ;
	/*for ( i = 0 ; i <  n ; i++){
		cout << str[i] << endl ;
	} */
	for ( i = 1 ; i < n ; i++){
		str[0] = str[0] + "  " + str[i] ;
	}
	cout << str[0] ;
	delete [] str ;
	
	return  0 ;
}
