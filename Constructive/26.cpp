#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string str="";
    int j=1;
    for(int i=0; i<n; i=i+j){
        str.push_back(s[i]);
        j++;
    }
    cout<<str<<endl;
    return 0;
}
