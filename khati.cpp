#include <iostream>
using namespace std;

int search(int x[],const int n , int m )
{ int loc,found = 0 ;
  for ( loc = 0 ;  loc < n && !found ; loc ++)
   if(x[loc] == m )
     found = 1 ;
   return found ;
}

int main()
{
  const int n = 5 ;
  int m, x[n] ;
  
  cout << "enter" << n << "numbers: " ;
  for( int i=0 ; i<n ; i++ )
    cin >> x[i] ;
    cout << "enter m to search " ;
    cin >> m ;
    if(!search(x,n,m)){
	
     cout << "m exit ." ;

    else
      cout <<" m not exit " ;
}

getch() ;
return0 ;
}
