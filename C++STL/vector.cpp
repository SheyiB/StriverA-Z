#include<bits/stdc++.h>
using namespace std;


int main(){
    
    // Similar to array but dynamic, not neccessary to specify size, it will adjust as elements are added
    vector <int> myVector;

    // For adding element to vector
    myVector.push_back(1);
    // For adding element to vector but faster
    myVector.emplace_back(2);
    myVector.emplace_back(31);
    myVector.emplace_back(29);
    myVector.emplace_back(12);
    myVector.emplace_back(23);
    myVector.emplace_back(40);
    myVector.emplace_back(12);
    myVector.emplace_back(30);
    myVector.emplace_back(20);
    myVector.emplace_back(9);
    


    // Creating a vector pair
    vector <pair <int, int>> myPairVector ;

    //When using Push back to add to vector you need specify item properly
    myPairVector.push_back({5,4});
    myPairVector.push_back({6,3});
    myPairVector.push_back({7,2});
    myPairVector.push_back({8,1});
    myPairVector.push_back({9,0});

    //When using emplace back, no need to specify
    myPairVector.emplace_back(7,9);

    vector<string> stringVec('S');

    stringVec.emplace_back('J', 'K');
    
    vector<int> k(5,10);

    vector<int> h(k);

    cout << myVector.at(0) << " This guy " << stringVec[0]  << endl;

    //Iterators

    vector<int>::iterator myit = myVector.begin();


    // Goes just one place after last element
    vector<int>::iterator myit = myVector.end();


    cout << "My Lorde" << *(myit) << endl;

    return 0;
}