#include<iostream>
#include<iomanip>
using namespace std;

void mean( int [], int ) ; // ham tinh trung binh cong cac phan tu cua mang 
void median ( int [], int ) ;
void mode ( int [], int ) ;
void bubblesort ( int [], int );
void printarray ( int [], int );
void nhapmang ( int [], int );

int main () {
//	int phu[10] = {0};
	int n ;
	cin >> n ;
	int a[n] ;
	nhapmang ( a , n);
	mode ( a , n) ;
	return 0 ;;
}

void mean ( int a[], int n){
	int sum = 0 ;
	for ( int i = 0 ; i < n;i++) {
		sum += a[i] ;
	}
//	cout << fixed << setprecision( 4 );
	cout << (double) sum / n  << endl;
}

// sap xep mang va xac dinh gia tri phan tu trung binh 

void median ( int a[] , int n) {
	printarray ( a , n);
	cout << "mang sau khi duoc sap xep" ;
	bubblesort ( a , n);
	printarray ( a , n);
	cout << "phan tu trung binh cua mang co gia tri la: " ;
	if ( n % 2){
		cout << a[n/2];
	}
	else {
		cout << (double) ( a[n/2+1] + a[n/2-1]) /2 ; 
	}
}

//ham xac dinh phan tu xuat hien nhieu nhat trong mang 

void mode ( int a[] , int n) {
		int phu[10];
		for ( int i = 0 ; i < 9 ; i++){
			phu[i] = 0 ;
		}
		for ( int i = 0 ; i  < n ;i++){
			++phu[a[i]] ;
		}
		bubblesort ( a , n );
//		for ( int i = 0 ; i< n ;i++) {
//			cout << a[i] << " ";
//		}
		for ( int i = 0 ; i < n ;i++) {
			if ( a[i] != a[i+1]) {
				cout << a[i] << "     " <<  phu[a[i]] <<endl ;
			}
		}
}
void bubblesort ( int a[] , int n) {
	for ( int i = 0 ;i < n  ; i++) {
		int pos = i ;
		for ( int j = i+1 ; j < n ;j++) {
			if (a[pos] > a[j]) {
				pos = j ;
			}
		}
		int tmp = a[i];
		a[i] = a[pos];
		a[pos] = tmp ;
	}
}
void printarray ( int a[], int n){
	for ( int i = 0 ; i< n; i++) {
		cout << a[i] << " " ;
	}
}

void nhapmang ( int a[] , int n ){
	for ( int i = 0 ;i < n ;i++) {
		cin >> a[i] ;
	}
}
