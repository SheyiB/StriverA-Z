#include<bits/stdc++.h>
using namespace std;

void pattern1(int N){
    for(int i = 0; i<N; i++){
        
        for(int j = 0; j<N; j++ ){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int N){
    for(int i = 0; i<N; i++){
        
        for(int j = 0; j< i+1; j++ ){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n){
    for(int i = 0; i<n; i++){
        
        for(int j = 1; j<= i+1; j++ ){
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n){
    for(int i = 1; i<n+1; i++){
        
        for(int j = 0; j<= i-1; j++ ){
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n){
    for(int i = n; i>0; i--){
        
        for(int j = 0; j< i; j++ ){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n){
    for(int i = n; i>0; i--){
        
        for(int j = 1; j< i+1; j++ ){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++ ){
            cout << " ";
        }
        for (int j = 0; j < 2*i + 1; j++ ){
            cout << "*";
        }
        for (int j = 0; j < n-i-1; j++ ){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n){
    for(int i = n-1; i > -1; i--){
        for (int j = 0; j < n-i-1; j++ ){
            cout << " ";
        }
        for (int j = 0; j < 2*i + 1; j++ ){
            cout << "*";
        }
        for (int j = 0; j < n-i-1; j++ ){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n){

       for(int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++ ){
            cout << " ";
        }
        for (int j = 0; j < 2*i + 1; j++ ){
            cout << "*";
        }
        for (int j = 0; j < n-i-1; j++ ){
            cout << " ";
        }
        cout << endl;
    }

    for(int i = n-1; i > -1; i--){
        for (int j = 0; j < n-i-1; j++ ){
            cout << " ";
        }
        for (int j = 0; j < 2*i + 1; j++ ){
            cout << "*";
        }
        for (int j = 0; j < n-i-1; j++ ){
            cout << " ";
        }
        cout << endl;
    }   
}

void pattern10(int n){
    int x = 1;
    for(int i = 1; i<2*n; i++){
        
        if (i < n){
            for(int j = 0; j< x; j++ ){
            cout << "* ";
            }
            x++;
                
        }
        else{
            for(int j = x; j > 0 ; j-- ){
            cout << "* ";
            }
            x--;    
        }

        cout << endl;

        
    }
}

void pattern11(int n){
    for(int i = 1; i < n+1; i++){
        for (int j = i; j > 0; j--){
            if (j%2 == 0){
                cout << 0;
            }
            else{
                cout << 1;
            }
        }
        cout << endl;
    }
}

void pattern12(int n){
 
    for(int i = 1; i < n+1; i++){
        for (int j = 1; j < i+1; j++ ){
            cout << j;
        }
        for (int j = 0; j < 2*(n - i); j++ ){
            cout << " ";
        }
        for (int j = i; j > 0; j-- ){
            cout << j;
        }
        cout << endl;
    }

}

void pattern13(int n){
    int val = 1;
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < i+1; j++){
            cout << val << " ";
            val++;
        }
        cout << endl;
    }

}

void pattern14(int n){

    for(int i = 0; i < n; i++){
        for(char j = 'A'; j <= 'A' + i; j++){
            cout << j << " ";

        }
        cout << endl;
    }

}


void pattern15(int n){

    for(int i = n; i > 0; i--){
        for(char j = 'A'; j < 'A' + i; j++){
            cout << j << " ";

        }
        cout << endl;
    }

}


void pattern16(int n){
    char k = 'A';
    for(int i = 0; i < n; i++){
        for(char j = 'A'; j <= 'A' + i; j++){

            cout << k  << " ";

        }
        k++;
        cout << endl;
    }

}

void pattern17(int n){    
    for(int i = 1; i<n+1 ; i++){
        char x = 'A';
        for(int k = 0 ; k< n-i+1; k++){
            cout << " ";
        }
        for(int k = 1 ; k< 2*i ; k++){
            if (k < i ){
                cout << x ;
                x++;
            }   
            else{
                cout << x;
                x--;
            }
         
        }
        for(int k = 0 ; k< n-i+1; k++){
            cout << " ";
        }
        cout << endl;
    }
}


void pattern18(int n){
    
    for(int i = 0; i < n; i++){
    char k = 'E';
        for(int j = i; j >  -1; j--){
            char x = k - j;
            cout << x  << " ";
            
        }
        ;
        cout << endl;
    }

}

void pattern19(int n){
    for(int i = 0; i < n ; i++){
        for (int j = 0; j < n-i; j++){
            cout << "*";
        }
        for (int j = 0; j < i*2; j++){
            cout << " ";
        }
        for (int j = 0; j < n-i; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = n-1; i > -1 ; i--){
        for (int j = 0; j < n-i; j++){
            cout << "*";
        }
        for (int j = 0; j < i*2; j++){
            cout << " ";
        }
        for (int j = 0; j < n-i; j++){
            cout << "*";
        }
        cout << endl;
    }

}


void pattern20(int n){

    for(int i = n-1; i > -1 ; i--){
        for (int j = 0; j < n-i; j++){
            cout << "*";
        }
        for (int j = 0; j < i*2; j++){
            cout << " ";
        }
        for (int j = 0; j < n-i; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 1; i < n ; i++){
        for (int j = 0; j < n-i; j++){
            cout << "*";
        }
        for (int j = 0; j < i*2; j++){
            cout << " ";
        }
        for (int j = 0; j < n-i; j++){
            cout << "*";
        }
        cout << endl;
    }

}

void pattern21(int n){
    // for(int i = 0; i < n; i++){
    //     cout << "*";
    // }
    // cout << endl;

    // for(int i = 0; i < n-2; i++){
    //     cout << "*";
    //     for(int x = 0; x < n-2; x++  ){
    //         cout<< " ";
    //     }
    //     cout << "*";
    //     cout << endl;    
    // }
    
    // for(int i = 0; i < n; i++){
    //     cout << "*";
    // }
    // cout << endl;
    for (int i = 0; i< n; i++){
        for (int j= 0; j < n; j++){
            if (i == 0|| j == 0 || i == n-1 || j == n-1){
                cout << "*";
            }
            else{
                cout<< " ";
            }
        
        }
    cout << endl;
    }
}

void pattern22(int n){
    for(int i = 0; i< 2*n-1; i++){
        for (int j = 0; j < 2*n-1; j++){
            int top = i;
            int bottom = (2*n-2)-i ;
            int left = j;
            int right = (2*n-2) -j;

            cout << n - min(bottom, min(top, min( left, right))) << " " ;

        }
        cout << endl;
    }

}
int main(){



    //pattern1(5);
    //pattern2(5);
    //pattern3(5);
    //pattern4(5);
    //pattern5(5);
    //pattern6(5);
    //pattern7(5);
    //pattern8(5);
    //pattern9(5);
    //pattern10(5);
    //pattern11(5);
    //pattern12(9);
    //pattern13(5);
    //pattern15(5);
    //pattern16(5);
    //pattern17(4);
    //pattern18(5);
    //pattern19(5);
    //pattern20(5);
    pattern21(5);
    //pattern22(5);
  
  
    return 0;
}