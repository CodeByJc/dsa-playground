#include<iostream>
using namespace std;

int main(){
    string s ;
    cin >> s ;
    int h = stoi(s.substr(0, 2));
    string m = s.substr(3, 2);
    string sec = s.substr(6, 2);
    string period = s.substr(8, 2); 
    if(period == "AM"){
        if(h == 12){
            h = 0 ;
        }
    }
    else if(period == "PM"){
        if(h != 12){
            h +=12 ;
        }
    }
    string timein24 = (h < 10 ? "0" : "") + to_string(h) + ":" + m + ":" + sec ;
    cout << timein24 ;
    exit(0);
}
