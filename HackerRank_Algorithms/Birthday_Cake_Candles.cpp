#include <iostream>
using namespace std ;

int birthdayCakeCandles(int candles[], int size){
    
    int max = 0 , max_total = 0 ;
    
    for(int index = 0 ; index < size ; index++){
        if(candles[index] > max){
            max = candles[index];
            max_total = 1 ;
        }
        else if(candles[index] == max){
            max_total ++ ; 
        }
        
    }
    return max_total ;
}

int main() {
    int size;
    cin >> size;

    int candles[size]; 
    
    for(int index = 0; index < size; index++) {
        cin >> candles[index];
    }

    int result = birthdayCakeCandles(candles, size);
    cout << result;

    return 0;
}
