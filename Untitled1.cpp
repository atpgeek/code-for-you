#include <iostream>
using namespace std;
 
int main(int argc, char** argv) {
	
	cout<<"----------   taranahade  ---------\n";
	
	int m, n, p, q;
	
	cout<<" Tedad satr haye matris A ra vared konid : ";
	cin>>m;
	cout<<" Tedad sotoon haye matris A ra vared konid : ";
	cin>>n;
	
	while(true){
		cout<<" Tedad satr haye matris B ra vared konid : ";
		cin>>p;
		if(n == p) break;
		cout<<" Baray zarb do matris tedad stoon ha az matris A bayad ba tedad satr ha az matris B barabar bashad.\n Lotfan dobare vared konid\n";
	}
	cout<<" Tedad sotoon haye matris B ra vared konid : ";
	cin>>q;	
	
	
	
	
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

	
	
	
	cout<<" taranahade A :\n";
	for(int i = 0; i < m; i++){
		for( int j = 0; j < q; j++){
			c[j, i] = a[i, j] ;
			
				
			cout<<' '<<c[i][j]<<'\t';
		}
		cout<<endl;	
	}
	
	
	
	return 0;
}
