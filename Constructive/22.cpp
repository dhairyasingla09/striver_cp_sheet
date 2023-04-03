#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<string>v;
    int cnt=0;
    for(int i=0; i<5; i++){
        string str;
        cin>>str;
        v.push_back(str);
    }
    for(int i=0; i<5; i++){
        if(v[i][0]==s[0]){
            cnt=1;
            break;
        }
        if(v[i][1]==s[1]){
            cnt=1;
            break;
        }
    }
    if(cnt){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
