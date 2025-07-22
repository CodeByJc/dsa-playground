#include <bits/stdc++.h>
using namespace std ;

// int find_ocurr(int arr[],int size,int n){
//     int hash[13] = {0} ;
    
//     for(int i= 0 ; i < size ; i++){
//         hash[arr[i]] += 1 ;
//     }
    
//     return hash[n] ;
// }

int find_ocurr_ch(string jc,char c){
    int hash[256] = {0} ;
    
    for(int i=0 ; i < jc.size() ; i++){
        hash[jc[i]] ++ ;
    }
    
    return hash[c] ;
}

int main()
{
    // int size = 5;
    // int arr[size] = {1,5,5,5,5};
    
    // int hash[13] = {0} ;
    
    // int n ;
    // cin >> n ;
    // cout << "occurrence of " << n << " : " << find_ocurr(arr,size,n); 
    
    string jc ;
    cin >> jc ;
    
    char c ;
    cin >> c ;
    
    cout <<"occurrence of " << c << " : " << find_ocurr_ch(jc,c); 
    
    return 0;
}  
