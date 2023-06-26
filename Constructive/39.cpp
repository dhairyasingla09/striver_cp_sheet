#include <bits/stdc++.h>
using namespace std;

string ans(string s)
{
    string str = "";
     bool res = true;

    if (s.size() == 1)
    {
        if(s[0]<=90){
            str = tolower(s[0]);
        }
        else{
            str = toupper(s[0]);
        }
        return str;
    }

    for (int i = 1; i < s.size(); i++){
        if (s[i] > 90){
             res = false;
        }
    }
    if(res==false){
        str = s;
        return str;
    }

    // if(res==true){
    if (s[0] >= 65 && s[0] <= 90)
    {
        // HTTP
        for (int i = 0; i < s.size(); i++)
        {
            str += tolower(s[i]);
        }
        return str;
    }
    else
    {
        // hELLO
        str += toupper(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            str += tolower(s[i]);
        }
        return str;
    }
    //}

    // return str;
}

int main()
{
    string s;
    cin >> s;
    cout << ans(s) << endl;
    return 0;
}
