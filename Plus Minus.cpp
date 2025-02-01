#include<iostream>
using namespace std;

int main(){
    int size ;
    float pos = 0 , neg = 0, zero = 0 ;
    cin >> size ;
    int arr[size] ;
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i] ;
        if(arr[i] > 0){
            pos++ ;
        }
        else if(arr[i] < 0){
            neg++ ;
        }
        else{
            zero++ ;
        }
    }
    cout << pos/size << endl ;
    cout << neg/size << endl ;
    cout << zero/size  ;
    exit(0);
}
