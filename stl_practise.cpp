#include <bits/stdc++.h>
using namespace std ;



int main()
{
    vector<int> jc(0,3);
    
    jc.push_back(1);
    jc.emplace_back(2);
    jc.emplace_back(23);
    jc.emplace_back(24);
    auto start = jc.begin();
    auto end = jc.end();
    
    // cout << *(start) << " " << *(--end) ;
    
    // cout << jc.back();
    
    // for(start ; start != end ; start++){
    //     cout << *(start) << " ";
    // }
    // cout << endl ;
    
    jc.insert(jc.begin(),300);
    jc.insert(jc.end(),200);
    jc.insert(jc.begin() + 1,2, 7);
    
    vector<int> jc1(2,50);
    jc.insert(jc.begin(), jc1.begin(),jc1.end());

    
    // for(auto  start1 : jc1){
    //     cout << start1 << " ";
    // }
    
    cout << jc.size() << " " << jc1.size() ;
    
    // cout << jc.empty() ;
    
    // jc.clear();
    
    jc.swap(jc1);
    
     for(auto  start1 : jc1){
        cout << start1 << " ";
    }
    
    
    
    
    return 0;
}