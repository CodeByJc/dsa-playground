#include <iostream>
using namespace std ;

int main()
{
    int size ;
    cin >> size ;
    int grades[size] ;
    for(int i = 0 ; i < size ; i++){
        cin >> grades[i];
    }
    for(int i = 0 ; i < size ; i++){
        if(grades[i]>=38){
            int nextmultipleof5 = ((grades[i]/5)+ 1)*5 ;
            if(nextmultipleof5 - grades[i] < 3){
                grades[i] =nextmultipleof5;
            }
        }
    }
    for(int i = 0 ; i < size ; i++){
        cout << grades[i] << endl;
    }
}
