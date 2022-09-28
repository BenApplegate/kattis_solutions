//This one requires some explanation

#include <bits/stdc++.h>
using namespace std;

//The cost function returns the number of crossings that are crossed when on a specific side and coming to a specific crossing
int cost(char currSide, char crossing){

    //If on the north, we cross a crossing if there is a B or N
    if(currSide == 'N'){
        switch(crossing){
            case 'B': return 1;
            case 'N': return 1;
            case 'S': return 0;
        }
    }

    //If on the south we cross a crossing if there is a B or an S
    else{
        switch(crossing){
            case 'B': return 1;
            case 'N' : return 0;
            case 'S': return 1;
        }
    }
    return -1;
}

int main(){
    string s; cin >> s;

    //I start by allocating two arrays one for the top and bottom
    //These arrays store the number of crossings crossed up to that point in the street on that side
    //The array is one bigger than the string because we have an initial condition
    int* t = new int[s.length()+1];
    int* b = new int[s.length()+1];
    t[0] = 0;

    //The bottom array starts with a value of one because if you want to start on the bottom you have to cross the crosswalk
    b[0] = 1;

    //Now we iterate once for every crossing
    for(int i = 1; i <= s.length(); i++){
        //For the top the number of crossings that we have crossed after this crosswalk is the minimum of the cost it would take to cross this crossing from the top
        //And the cost it would take to cross this crossing from the bottom and then switch to the top.
        //These values are both added to their side's previous total cost
        t[i] = min(t[i-1] + cost('N', s[i-1]), 1+b[i-1]+cost('S', s[i-1]));

        //We do the same method but the opposite sides for the bottom
        b[i] = min(b[i-1] + cost('S', s[i-1]), 1 + t[i-1]+cost('N', s[i-1]));

        //This effectively works as if we solve the problem recursively backward
    }

    cout << t[s.length()];

    delete t;
    delete b;
}