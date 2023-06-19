#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1; i<=n-1; i++){
        sum+=(n-i)*i;
    }
    sum+=n;
    cout<<sum<<endl;
    return 0;
}
