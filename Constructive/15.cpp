#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int spent=0;
    int i=1;
    while(w--){
        spent+=k*i;
        i++;
    }
    if((spent-n)<0){
        cout<<0<<endl;
    }
    else{
        cout<<spent-n<<endl;
    }
    return 0;
}
