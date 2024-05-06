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
    string s; cin>>s;
    int i,j,cnt;
	for(i=0; i<s.size(); i++){
		for(j=i+1; j<s.size(); j++){
			if(s[i]==s[j]){
				s[j]='0';
            }
        }
    }
	for(i=0; i<s.size(); i++){
		if(s[i]!='0'){
			cnt++;
			}
		}
		if(cnt%2==0){
			printf("CHAT WITH HER!\n");
        }else{
            printf("IGNORE HIM!\n");
        }
return 0;
}

