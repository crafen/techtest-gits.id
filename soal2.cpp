#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    getline(cin,str);

    bool res = true;
    
    if (str.find("@") != std::string::npos) {
        int idx = str.find("@");
        string bef = str.substr(0,idx);
        string af = str.substr(idx+1,str.length());
        
        if(bef.length() > 20){
            res = false;
        }else if(af.find(".") == std::string::npos){
            res = false;
        }else if(af.find(".co.id") == std::string::npos && af.find(".id") == std::string::npos){
            res = false;
        }
    }else{
        res = false;
    }

    cout << res;
    return 0;
}