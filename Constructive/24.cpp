#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int tryy=x;
        while(tryy>10){
            tryy=tryy/10;
        }
        vector<int>vec;
        while(x>0){
            int digits = int(log10(x) + 1);
            vec.push_back(digits);
            x=x/10;
        }
        cout<<((tryy-1)*10)+accumulate(vec.begin(),vec.end(),0)<<endl;
    }
    return 0;
}
