/**
 *    author:  Udipto
 *    created:Saturday
4 May 2024
Dhaka, Bangladesh
**/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin>>n;
    int c=0;
    while(n--){
        int cnt=0;
        int a[3];
        for(int i=0; i<3; i++){
            cin>>a[i];
            if(a[i]==1) cnt++;
        }
        if(cnt>=2) c++;
    }
    cout<<c<<endl;
return 0;
}

