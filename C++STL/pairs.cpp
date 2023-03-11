#include<bits/stdc++.h>
using namespace std;


int main(){
    pair <int, int > p = {3,4};

    cout << "The number pairs are" << p.first << "&" << p.second << endl;

    pair <string, string> couple = {"Ronaldo", "Georgina"};
    
    cout << "The Couples are" << couple.first << "&" << couple.second << endl;


    pair <string , pair < string, int> > person = {"Talms", {"France", 28}};
        
    cout << "His name is" << person.first << "and he lives in" << person.second.first << " and he is " << person.second.second << "years old" << endl;

    pair <string, int> studentList [] = { {"Tide", 23}, {"Suli", 20}};

    cout << "The second student in the list is " << studentList[1].first << " and she is " << studentList[1].second << " years old";

    return 0;
}