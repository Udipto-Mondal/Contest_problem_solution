/**
 *    author:  Udipto
 *    created:Saturday
4 May 2024
Dhaka, Bangladesh
**/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int a=0;
    for(int i=1; i<=w; i++){
        a+=i*k;
    }
    if(a<n) cout<<0<<endl;
    else cout<<a-n<<endl;

    return 0;
}

