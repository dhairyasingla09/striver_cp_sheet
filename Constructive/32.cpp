#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    int hsh[26]={0};
    bool flag=true;;
    for(int i=0; i<s.size(); i++){
        hsh[s[i]-97]++;
    }
    int maxx=*max_element(hsh,hsh+26);
    for(int i=0; i<26; i++){
        if(hsh[i]%k!=0){
            flag=false;
        }
    }

    if(!flag){
        cout<<-1<<endl;
    }
    else{
        string ans="";
        for(int i=0; i<26; i++){
            if(hsh[i]!=0){
                int loopp=hsh[i]/k;
                while(loopp--){
                ans+=char(i+97);
                }
            }
        }
        while(k--){
            cout<<ans;
        }
    }
    return 0;
}
