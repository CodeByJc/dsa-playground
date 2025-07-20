#include <iostream>
using namespace std ;

void pattern1(int n){
    
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cout  << "*" ;
        }
        cout << endl ;
    }
}

void pattern2(int n){
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < i + 1 ; j++){
            cout  << "*" ;
        }
        cout << endl ;
    }
}

void pattern3(int n){
    int num ;
    for (int i = 0 ; i < n ; i++){
        num = 1 ;
        for (int j = 0 ; j < i + 1 ; j++){
            cout  << num ;
            num ++ ;
        }
        cout << endl ;
    }
}

void pattern4(int n){
    int num = 1 ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < i + 1 ; j++){
            cout  << num ;
        }
        num ++ ;
        cout << endl ;
    }
}

void pattern5(int n){
    for (int i = n ; i > 0 ; i--){
        for (int j = 0 ; j < i  ; j++){
            cout  << "*" ;
        }
        cout << endl ;
    }
}

void pattern6(int n){
    int num ;
    for (int i = n ; i > 0 ; i--){
        num = 1 ;
        for (int j = 0 ; j < i  ; j++){
            cout  << num ;
            num++ ;
        }
        cout << endl ;
    }
}

void pattern7(int n){
    for (int i = 0 ; i < n ; i++){
        
        //space ;
        
        for(int space  = 0 ; space < n - i - 1 ; space++){
            cout << " ";
        }
        
        //star
        
        for(int star  = 0 ; star < 2 * i + 1  ; star++){
            cout << "*";
        }
        
        //space
        
        for(int space  = 0 ; space < n - i - 1 ; space++){
            cout << " ";
        }
        cout << endl ;
    }
}

void pattern8(int n){
    for (int i = n ; i > 0 ; i--){
        
        //space ;
        
        for(int space  = 0 ; space < n - i ; space++){
            cout << " ";
        }
        
        //star
        
        for(int star  = 0 ; star < 2 * i - 1  ; star++){
            cout << "*";
        }
        
        //space
        
        for(int space  = 0 ; space < n - i ; space++){
            cout << " ";
        }
        cout << endl ;
    }
}

void pattern9(int n){
    pattern7(n);
    pattern8(n);
}

void pattern10(int n){
    for(int i = 0 ; i < (n * 2) - 1 ; i++){
        //star
        int star = i + 1 ;
        if(i >= n) star = 2 * n - (i+ 1) ;
        for(int j = 0 ; j < star ; j++){
            cout << "*";
        }
        cout << endl ;
    }
}

void pattern11(int n){
    int start ;
    
    for(int i = 0 ; i < n ; i++){
        start = 1 ;
        if(i % 2 == 0){
            start = 1 ;
        }
        else{
            start = 0 ;
        }
        
        for(int j = 0 ; j < i + 1 ; j++){
            cout  << start ;
            start = 1 - start ;
        }
        cout << endl ;
    }
}

void pattern14(int n){
    char a;
    
    for( int i = 0 ; i < n ; i++){
        
        a = 'A' ;
        
        for(int j = 0 ; j < i + 1 ; j++){
            cout << a ;
            a++;
        }
        cout<< endl ;
    }
}

void pattern15(int n){
    char a;
    
    for( int i = n ; i > 0 ; i--){
        
        a = 'A' ;
        
        for(int j = 0 ; j < i  ; j++){
            cout << a ;
            a++;
        }
        cout<< endl ;
    }
}

void pattern16(int n){
    char a;
    a = 'A' ;
    
    for( int i = 0 ; i < n ; i++){
        
        for(int j = 0 ; j < i + 1  ; j++){
            cout << a ;
        }
        a++;
        cout<< endl ;
    }
}

void pattern18(int n){
    char a;
    a = 'E' ;
    for( int i = 0 ; i < n ; i++){
        
        for(int j = 0 ; j < i + 1  ; j++){
            cout << a ;
            if(j < i ) a++;
        }
        a = a - (i + 1);
        cout<< endl ;
    }
}

int main()
{
    int n ;
    
    cin >> n ;
        
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern18(n);
    return 0;
}
