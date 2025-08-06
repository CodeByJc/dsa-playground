#include<iostream>
using namespace std;
int main()
{
    int game ;
    cin >> game ;
    int score[game] ;
    int min , max , c_min = 0 , c_max = 0 ;
    
    
    for(int i = 0 ; i < game ; i++){
        cin >> score[i];
    }
    min = max = score[0] ;
    
    for(int i = 1 ; i < game ; i++){
        if(score[i] < min){
            min = score[i] ;
            c_min++;
        }
        if(score[i] > max){
            max = score[i] ;
            c_max++;
        }
    }
    
    cout << c_max << " " << c_min ;
    
    return 0;
}
