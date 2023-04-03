#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    int cnt=1;
    int i=2;
    while(n>0){
        v.push_back(cnt);
        cnt+=i;
        i++;
        n-=cnt;
    }
    cout<<v.size()<<endl;
    return 0;
}
