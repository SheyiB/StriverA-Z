#include<bits/stdc++.h>
using namespace std;

int main(){
    //For arrays , data-type must be the same

    //1-Dimensional Array
    int myarr[5];

    cout << "Enter 5 numbers";
    cin >> myarr[0] >> myarr[1] >> myarr[2] >> myarr[3] >> myarr[4];

    cout << "The sum of the numbers you entered is " << myarr[0] + myarr[1] + myarr[2] + myarr[3] +  myarr[4] ;

    //2-Dimension Array
    int mydimarray[2][2];

    mydimarray[1][0] = 24;

    cout << endl << mydimarray[0][1] << " " << mydimarray[1][0] << endl;

    string e = "Elijah";
    int len = e.size();

    cout << "the first letter in " << e << " is " << e[0] << " and the last letter is " << e[len-1]<< endl;

    return 0;
}