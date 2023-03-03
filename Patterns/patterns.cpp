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
    pattern14(5);
    return 0;
}