 #include<bits/stdc++.h>
using namespace std ;

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

void merge(int arr[],int low, int mid, int high){
    vector<int> temp;
    int left , right ;
    left= low ;
    right = mid + 1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = 0; i < temp.size(); i++) {
        arr[low + i] = temp[i];  // Copy back to original array
    }
}

int merge_sort(int arr[],int low, int high){
    if(low < high){
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
    else if(low == high){
        cout << arr[low] ;
        return 0; // Base case for recursion

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
    
    
    // insertion_sort(arr,size);
    // cout << endl ;

    merge_sort(arr,0,size - 1);

    for(int i = 0 ; i < size ;i++){
        cout << arr[i] << " " ;
    }
    return 0;
}
