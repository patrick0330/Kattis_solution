#include <bits/stdc++.h>

using namespace std;

int main() {
    string n, t;
    int counter  = 1;
    while(cin >> n && cin >> t) {
        cout << "Case " << counter << ": ";

        counter++;

        int unique = 1;

        if(n == "A#") {
            unique = 0;
            cout << "Bb";
        }
        else if(n == "Bb") {
            unique = 0;
            cout << "A#";
        }
        else if(n == "C#") {
            unique = 0;
            cout << "Db";
        }
        else if(n == "Db") {
            unique = 0;
            cout << "C#";
        }
        else if(n == "D#") {
            unique = 0;
            cout << "Eb";
        }
        else if(n == "Eb") {
            unique = 0;
            cout << "D#";
        }
        else if(n == "F#") {
            unique = 0;
            cout << "Gb";
        }
        else if(n == "Gb") {
            unique = 0;
            cout << "F#";
        }
        else if(n == "G#") {
            unique = 0;
            cout << "Ab";
        }
        else if(n == "Ab") {
            unique = 0;
            cout << "G#";
        }

        if(unique == 0) {
            cout << " " << t << endl;
        }
        else {
            cout << "UNIQUE" << endl;
        }

        
    }
}
