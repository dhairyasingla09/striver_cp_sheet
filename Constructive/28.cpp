#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; i<n; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='y'){
            s.erase(s.begin()+ (i));
            i--;
        }
    }
    n=s.size();
    for(int i=0; i<n; i++){
        s.insert(i,".");
        n=s.size();
        i++;
    }
    cout<<s<<endl;
    return 0;
}
