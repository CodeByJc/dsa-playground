#include <bits/stdc++.h>
using namespace std;

int main (){
    int size = 3 ;
    int AliceMarks[size] ;
    int BobMarks[size] ;
    int AliceScore = 0 , BobScore = 0 ;
    
    for(int i = 0 ; i < size ; i++){
        cin >> AliceMarks[i] ;
    }
    
    for(int i = 0 ; i < size ; i++){
        cin >> BobMarks[i] ;
    }
    
    for(int i = 0 ; i < size ; i++){
        if(AliceMarks[i] > BobMarks[i]){
            AliceScore++ ;
        }
        else if(BobMarks[i] > AliceMarks[i]){
            BobScore++ ;
        }
    }
    
    cout << AliceScore << " " << BobScore ;
    
}
