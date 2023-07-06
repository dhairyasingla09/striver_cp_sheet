#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool same = true;
    if(n==1){
        cout << "NO" << endl;
    }
    else{
        int index = 0;
        for (int i = 1; i < n; i++){
            if(s[i]!=s[0]){
                same = false;
                index = i;
                break;
            }

        }
        if(same){
            cout << "NO" << endl;
        }
        else{
            string ans = "";
            ans += s[index-1];
            ans += s[index];
            cout << "YES" << endl;
            cout << ans << endl;
        }
    }
    return 0;
}
