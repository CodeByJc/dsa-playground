#include <bits/stdc++.h>
using namespace std;
bool sorted(int arr[], int size){ 
    bool isSsorted = true ;
    int i = 0 ;
    while(i < size - 1){
        if(arr[i] > arr[i+ 1]){
            isSsorted = false ;
        }
        if(isSsorted == false) return isSsorted ;
        i++; 
    }
    return isSsorted ;
}

// void selection_sort(int arr[],int size){
//     int min_index;
//     for(int i = 0 ; i < size - 1; i++){
//         min_index = i ;
//         for(int j = i + 1 ; j < size ; j++){
//             if(arr[j] < arr[min_index]){
//                 min_index = j ;
//             }
//         }
//         swap(arr[i],arr[min_index]);
//     }
    
//     for(int i = 0 ; i < size ;i++){
//         cout << arr[i] << " " ;
//     }
// }

// void bubble_sort(int arr[],int size){
//     bool swapped = false ;
    
//     for(int i = size ; i > 0; i--){
//         for(int j = 0 ; j < i ; j++){
//             if(arr[j] > arr[j + 1]){
//                 swap(arr[j],arr[j + 1]);
//                 swapped = true ;
//             }
//         }
//         if(swapped == false){
//             break ;
//         }
//     }
    
//     for(int i = 0 ; i < size ;i++){
//         cout << arr[i] << " " ;
//     }
// }

// void insertion_sort(int arr[],int size){
//     for(int i = 1 ; i < size ; i++){
//         int j = i ;
//         while(j > 0 && arr[j - 1] > arr[j]){ 
//             swap(arr[j],arr[j - 1]);
//             j--;
//         }
//     }
//     for(int i = 0 ; i < size ;i++){
//         cout << arr[i] << " " ;
//     }
// }

// void merge(int arr[], int low, int mid, int high) {
//     vector<int> temp;
//     int left = low, right = mid + 1;

//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         } else {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while (right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     for (int i = 0; i < (int)temp.size(); i++) {
//         arr[low + i] = temp[i];  // Copy back to original array
//     }
// }

// void merge_sort(int arr[], int low, int high) {
//     if (low >= high) return;  // Base case

//     int mid = (low + high) / 2;
//     merge_sort(arr, low, mid);
//     merge_sort(arr, mid + 1, high);
//     merge(arr, low, mid, high);
// }

// int find_occurrence(int arr[], int size,) {
//     int hash[13] = {0};
//     for (int i = 0; i < size; i++) {
//         hash[arr[i]]++;
//     }
//     return hash[n];
// }

// void remove_duplicate(int arr[],int size){
//     int j = 0;
//     for(int i = 1 ; i < size - 1 ; i++){
//         if(arr[j] != arr[i]){
//             arr[j + 1] = arr[i] ;
//             j++;
//         }
//     }
    
//     for(int i = 0 ; i < j + 1 ;i++){
//         cout << arr[i] << " " ;
//     }
// }


void reverse(int arr[],int start, int end){
    while (start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void left_rotate_by(int arr[], int size, int num){
    if (size <= 1) return; 
    num = num % size;    
    if (num == 0) return;
    
    int temp = arr[0] ;
    
    reverse(arr,0, num - 1) ;
    reverse(arr,num, size - 1) ;
    reverse(arr, 0, size - 1);
}

int main()
{
    int size = 8;
    int arr[size] = {5,4,5,3,4,3,2,1};
    int num = 7 ;
    
    
    // selection_sort(arr,size);
    // cout << endl ;
    
    // bubble_sort(arr,size);
    // cout << endl ;
    
    
    // insertion_sort(arr,size);
    // cout << endl ;

    // merge_sort(arr,0,size - 1);

    // for(int i = 0 ; i < size ;i++){
    //     cout << arr[i] << " " ;
    // }
    
    // if(sorted(arr,size)) cout << "Sorted" ; else cout << "Not Sorted";
    
    // remove_duplicate(arr,size) ;
    
    left_rotate_by(arr,size,num) ;
    
    for(int i = 0 ; i < size ;i++){
        cout << arr[i] << " " ;
    }
    return 0;
}
