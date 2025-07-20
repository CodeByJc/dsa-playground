#include <iostream>
#include <string>
using namespace std ;
int main()
{
    string s;
    getline(cin, s);
    int size = s.length();
    bool letters[26] = {false};
    for(char ch : s){
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }
        if (ch >= 'a' && ch <= 'z') {
            letters[ch - 'a'] = true;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (!letters[i]){
            cout << "not pangram" ;
            return 0;
        }
    }
    cout << "pangram" ;
    
}
