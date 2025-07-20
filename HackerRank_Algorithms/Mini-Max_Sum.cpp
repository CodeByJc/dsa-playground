#include<iostream>
using namespace std;

int main(){
    long arr[5] ;
    long min , max , sum = 0 ;
    for(int i = 0 ; i < 5 ; i++){
        cin >> arr[i] ;
        sum += arr[i] ;
    }
    min = arr[1] ;
    max = min ;
    
    for(int i = 0 ; i < 5 ; i++){
        if(arr[i] < min){
            min = arr[i] ;
        }
        if(arr[i] > max){
            max = arr[i] ;
        }
    }
    
    cout << sum - max << " " << sum - min ; 
    
    exit(0);
}
