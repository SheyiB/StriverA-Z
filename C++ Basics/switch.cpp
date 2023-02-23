#include<bits/stdc++.h>
using namespace std;

int main(){

    int month;
    cout << "What is the Month Number of the Year";

    cin >> month;

    switch(month){
        case 1:
            cout << "Oh! We're in January, my Uncle's birth month";
            break;
        case 2:
            cout << "Oh! We're in February, my babe's birth month";
            break;
        case 3:
            cout << "Oh! We're in March, my guy's birth month";
            break;
        case 4:
            cout << "Oh! We're in April, my friend's birth month";
            break;
        case 5:
            cout << "Oh! We're in May, my birth month";
            break;
        case 6:
            cout << "Oh! We're in June, my love's birth month";
            break;
        case 7:
            cout << "Oh! We're in July, my hero's birth month";
            break;
        case 8:
            cout << "Oh! We're in August, my bro's birth month";
            break;
        case 9:
            cout << "Oh! We're in September, Oscar's birth month";
            break;
        case 10:
            cout << "Oh! We're in October, my baby's birth month";
            break;
        case 11:
            cout << "Oh! We're in November, my bro's birth month";
            break;
        case 12:
            cout << "Oh! We're in December, my sweet cousin's birth month";
            break;
        default:
            cout << "Invalid input";
    }

    return 0;
}