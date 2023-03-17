#include<bits/stdc++.h>
using namespace std;


int main(){
    
    // Similar to array but dynamic, not neccessary to specify size, it will adjust as elements are added
    vector <int> myVector;

    // For adding element to vector
    myVector.push_back(1);
    // For adding element to vector but faster
    myVector.emplace_back(2);

    // Creating a vector pair
    vector <pair <int, int>> myPairVector ;

    //When using Push back to add to vector you need specify item properly
    myPairVector.push_back({4,5});

    //When using emplace back, no need to specify
    myPairVector.emplace_back(7,9);

    vector<string> stringVec('Shola');

    vector<int> k(5,10);


    vector<int> h(k);

    return 0;
}