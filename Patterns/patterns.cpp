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
int main(){

    //pattern1(5);
    //pattern2(5);
    //pattern3(5);
    //pattern4(5);
    //pattern5(5);
    pattern6(5);

    return 0;
}