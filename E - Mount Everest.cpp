/**
 *    author:  Udipto
 *    created:Saturday
4 May 2024
Dhaka, Bangladesh
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		int s=0;
		cin>>n>>m;
		int a[n][m];
		map<int, int>p,q;
		for(int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cin>>a[i][j];
				p[i-j]+=a[i][j];
				q[i+j]+=a[i][j];
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				s=max(s, p[i-j]+q[i+j]-a[i][j]);
			}
		}
		cout<<s<<"\n";
	}
	return 0;
}

