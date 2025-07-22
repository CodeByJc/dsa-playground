#include <bits/stdc++.h>
using namespace std ;

int find_max_element(int arr[],int size){
    int max_element = INT_MIN ;
    for(int i = 0 ; i < size ; i++){
        if( arr[i] > max_element){
            max_element = arr[i] ;
        }
    }
    return max_element ;
}

int find_second_max_element(int arr[],int size){
    int max_element = INT_MIN ;
    int second_max_element = INT_MIN ;
    for(int i = 0 ; i < size ; i++){
        if( arr[i] > max_element){
            second_max_element = max_element ;
            max_element = arr[i];
        }
        else if(arr[i] < max_element && arr[i] > second_max_element){
            second_max_element = arr[i] ;
        }
    }
    if (second_max_element == INT_MIN) {
        cout << "No valid second largest element (all elements may be equal or only one element)." << endl;
        return INT_MIN; 
        }
    return second_max_element ;
}

bool shorted(int arr[], int size){
    if(size < 2) return true ;
    for(int i = 1 ; i < size ; i++){
        if(arr[i] < arr [i - 1 ]){
            return false ;
        }
    }
    return  true ;
}



int main()
{
    int size = 3 ;
    int arr[size] =  {-5,-4,-3};
    
    cout << "Largest Element in array : " << find_max_element(arr,size) << endl;
    
    cout << "Second Largest Element in array : " <<  find_second_max_element(arr,size) << endl;
    
    cout << "Array shorted ? : " << shorted(arr,size) ;
    
    // remove_duplicate_element(arr, size);

    return 0;
}
