#include <iostream>
using namespace std ;

int main()
{
    int size ;
    cin >> size ;
    int arr[size] ;
    int num, count;
    
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }
    for(int i = 0 ; i < size ; i++){
        
        num = arr[i] ;
        count = 0 ;
        for(int j = 0  ; j < size ; j++){
            if(arr[j] == num){
                count++ ;
            }
            
        }
        if(count == 1) {
            cout << num ;
            return 0;
        }
    }
}
