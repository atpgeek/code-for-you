#include <iostream>
using namespace std;
 
int main(int argc, char** argv) {
	
	cout<<"----------   A + B   ---------\n";
	
	int m, n, p, q;
	
	cout<<" Tedad satr haye matris A ra vared konid : ";
	cin>>m;
	cout<<" Tedad sotoon haye matris A ra vared konid : ";
	cin>>n;
	
	
		cout<<" Tedad satr haye matris B ra vared konid : ";
		cin>>p;
		

	cout<<" Tedad sotoon haye matris B ra vared konid : ";
	cin>>q;	
	
	
	int a[m][n], b[q][p], c[m][q] = {0};
	
	cout<<" Anaasor matris A ra varred konid\n";
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout<<" A("<<i+1<<","<<j+1<<") = ";
			cin>>a[i][j];
		}		
	}
	
	cout<<" Anaasor matris B ra varred konid\n";
	for(int i = 0; i < p; i++){
		for(int j = 0; j < q; j++){
			cout<<" A("<<i+1<<","<<j+1<<") = ";
			cin>>b[i][j];
		}		
	}
	cout<<"Taranahade A barabar ast ba :\n";
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			for(int k=0;k<n;k++)
			    c[i][j]=a[j][i]; 
			
			cout<<' '<<c[i][j]<<'\t';
	    } 
	}
	
	cout<<" Taranahade B barabar ast ba :\n";
	for(int i = 0; i < m; i++){
		for( int j = 0; j < q; j++){
			for(int k = 0; k < n; k++)
				c[i][j]= b[j][i];
				
				
			cout<<' '<<c[i][j]<<'\t';
		}
		cout<<endl;	
	}
	
	
	
	return 0;
}
