// Daily Coding Problem #1
// Given a list of numbers and a number k;
// return true/false if any two numbers add up to k.
// Jackie A. Adair

#include <iostream>

using namespace std;

// nested loop that adds numbers and returns true if equal to k
bool checkAdd(int k, int *numList){
    for (int i = 0; i < 8; i++){
        for (int j = 1; j < 9; j++){
            if (numList[i] + numList[j] == k){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int numList[] = {3,4,1,6,4,1,7,4,1};
    int k = 13;
    cout << endl << endl << "There ";

    if (checkAdd(k, numList))
        cout << "are";
    else    
        cout << "are not";

    cout << " two numbers that add up to " << k << endl << endl;

    return 0;
}