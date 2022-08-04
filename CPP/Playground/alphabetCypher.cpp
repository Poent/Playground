#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string a;
    getline(cin, a);
    string c;
    getline(cin, c);
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string answer;

    for(int i = 0; i < c.length(); i++){
        for(int i2 = 0; i < a.length(); i2++){
            if(c[i] == a[i]){
                //answer += alpha[a];
                std::cout << alpha[i2];
                break;
            }
        }

    }




    cout << "answer" << endl;
}