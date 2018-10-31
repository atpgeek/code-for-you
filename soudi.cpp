#include <iostream>
using namespace std;
int main()
{
int a[n],temp;
for(int x=0;x<n,x++){
	cout<<"a["<<x<<"]"=;
	cin>>a[x];
}	
for	(int i=1;i<=n;i++){
	for(int j=0;j<(n-i);j++){
		if(a[j]<a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
for(int y=0;y<n;y++)
	cout<<a[y]<<endl;
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


