/**
 *    author:  Udipto
 *    created:Saturday
4 May 2024
Dhaka, Bangladesh
**/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c;
    cin>>n>>a>>b>>c;

    vector<int>x(n+1, -1);
    x[0] = 0;
    for (int i=1; i<=n; i++){
        if (i-a>=0 && x[i-a]!=-1)
            x[i]=max(x[i], 1+x[i-a]);
        if (i-b>=0 && x[i-b]!=-1)
            x[i]=max(x[i], 1+x[i-b]);
        if (i-c>=0 && x[i-c]!=-1)
            x[i]=max(x[i], 1+x[i-c]);
    }

    cout<<x[n]<<endl;

    return 0;
}

