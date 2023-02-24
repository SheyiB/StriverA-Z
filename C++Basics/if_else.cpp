#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout << "How old are you now: ";
    cin >> age;
    if(age >= 100){
        cout << "You are a Centurion!";
    }
    /**
    else if(age >= 18 && age <= 30){
         cout << "You are an undergraduate";
    } **/
    else if(age >= 18){
        cout << "You are an Adult";
        if (age <=30){
            cout << " ,but could still be an undergraduate";
        }
    }
    else{
        cout << "You are underaged";
    }

    return 0;
}