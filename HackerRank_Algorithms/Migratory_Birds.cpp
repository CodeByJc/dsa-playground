#include <bits/stdc++.h>
using namespace std;

int migratoryBirds(int arr[],int size) {
    unordered_map<int, int> map;
    int max_freq = 0 ;
    int min_element = INT_MAX ;
    
    for (int i = 0; i < size; i++){
        map[arr[i]]++;
        if(map[arr[i]] > max_freq || (map[arr[i]] == max_freq && arr[i] < min_element)){
            max_freq = map[arr[i]] ;
            min_element = arr[i] ;
        }
    }
    return min_element ;
}

int main()
{
    int size ;
    
    cin >> size ;
    
    int arr[size] ;
    
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i] ;
    }
    
    cout << migratoryBirds(arr,size);
}
