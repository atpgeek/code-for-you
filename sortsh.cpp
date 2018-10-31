#include <iostream>
using namespace std ;
void select( int x[] , const int n)
{
 int min,k ;
 for ( int i=0 ; i < n-1 ; i++ )
 {
   min = i ;
   for (int j=i+1 ; j < n ; j++ )
    if(x[j] < x[min] )
     min=j ;

   k = x[i] ;
   x[i] = x[min] ;
   x[min] = k ;
 }
}
int main()
{
 const int n = 5 ;
 int x[n] ;
 clrscr() ;
 cout << "enter" << n << "number" ;
 for ( int i=0 ; i < n ; i++ )
  cin >> x[i] ;
 select(x,n) ;
 cout << "sorted data is :" ;
 for(i=0 ; i<n ; i++ )
 couy << x[i] ;
 getch();
 return0 ;

}


