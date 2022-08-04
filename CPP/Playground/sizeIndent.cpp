#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int size;
    cin >> size; cin.ignore();
    for (int i = 1; i < size; i++) {

        // i equals the number of asterisks to print
        

        //This is the number of indents to put before the asterisks..
        int indentation;
        cin >> indentation; cin.ignore();
        
        //print the indents....
        for(int b = 0; b < indentation; b++){
            cout << " ";
        }

        //print the stars
        for( int c = 0; c < i; c++){
            cout << "*";
        }

        cout <<  "\n";



    }
}