#include<bits/stdc++.h>
using namespace std;


//Void Function - A function that returns nothing
void hello(){
    cout << "Hi, Welcome to my Program!" << endl;
}

// Functions that return a value. Functions can also take in values
int dob(int age){
    int dob = 2023-age;
    return dob;
}

//Illustrating pass by value - Perform operation on a copy of the passed value
void getSquare(int userValue){
    userValue = userValue * userValue;
    cout << "The square of the value you supplied is " << userValue << endl;
}

//Illustrating pass by Reference - Perform operation directly on the passed value
void increaseValue(int &userValue){
    userValue = userValue + userValue;
    cout << "The increase of the value you supplied is " << userValue << endl;
}

//Illustrating that when you pass in array to a function it passes by reference
void increaseIndexArray(int yourArray[]){
    yourArray[0] += 100;
}

int main(){
    hello();
    int yourage;
    int myValue = 8;
    cout << "How old are you? ";
    cin >> yourage;
    int birthyear = dob(yourage);
    cout << "You were born in the year " << birthyear << endl;
    getSquare(myValue);
    cout << "Your value is " << myValue << endl;
    increaseValue(myValue);
    increaseValue(myValue);
    cout << "Your value is " << myValue << endl;
    int sampleArray[3];
    sampleArray[0] = 1;
    sampleArray[1] = 2;
    sampleArray[2] = 3;

     cout << "Index Array is " << sampleArray[0] << endl ; 

    increaseIndexArray(sampleArray);

    cout << "Index Array is " << sampleArray[0] << endl ; 

    return 0;
}