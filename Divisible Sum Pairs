#include<iostream>
using namespace std;
int main()
{
    int n , k;
    cin >> n ;
    cin >> k ;
    int ar[n] ;
    int pair_sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        cin >> ar[i];
    }
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if((ar[i] + ar[j]) % k == 0){
                pair_sum++;
            }
        }
    }
    cout << pair_sum ;
    

    return 0;
}
