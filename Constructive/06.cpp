#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> vec;
        for(int i=0; i<s.size(); i++){
            if(s[i]!='0'){
                int power=s.size()-i-1;
                vec.push_back((s[i]-'0')*pow(10,power));
            }
        }

        cout<<vec.size()<<endl;
        for(int i=0; i<vec.size(); i++){
            cout<<vec[i]<<" ";
        }  
        cout<<endl;
    }
    return 0;
}
