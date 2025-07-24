#include<bits/stdc++.h>
using namespace std ;

void selection_sort(int arr[],int size){
    int min_index;
    for(int i = 0 ; i < size - 1; i++){
        min_index = i ;
        for(int j = i + 1 ; j < size ; j++){
            if(arr[j] < arr[min_index]){
                min_index = j ;
            }
        }
        swap(arr[i],arr[min_index]);
    }
    
    for(int i = 0 ; i < size ;i++){
        cout << arr[i] << " " ;
    }
}

void bubble_sort(int arr[],int size){
    bool swapped = false ;
    
    for(int i = size ; i > 0; i--){
        for(int j = 0 ; j < i ; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j],arr[j + 1]);
                swapped = true ;
            }
        }
        if(swapped == false){
            break ;
        }
    }
    
    for(int i = 0 ; i < size ;i++){
        cout << arr[i] << " " ;
    }
}
int main()
{
    int size = 10;
    int arr[size] = {5,4,2,7,1,15,3,10,8,6};
    
    
    // selection_sort(arr,size);
    // cout << endl ;
    
    // bubble_sort(arr,size);
    // cout << endl ;
    
    
    
    ;
    return 0;
}
