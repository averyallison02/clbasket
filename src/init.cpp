#include <iostream>
#include <time.h>

using namespace std;

class Player {

    public:
        string name;
        string number;
        int pass;
        int shoot;
        int drib;
        int per_d;
        int ins_d;
        int steal;
};

/*
function doRand
returns a random number from 0 to 99 for other functions to use
*/
int doRand() {

    srand(time(NULL));
    return rand() % 100;
}

/*
function stringInput
returns user input that uses a prompt
*/
string stringInput(string prompt) {

   string message;
   
   cout << prompt << ": ";
   getline(cin,message);

   return message; 
}

bool doTurn(bool currentTeam) {

    if (currentTeam) {

        bool shotBall = false;
        while (!shotBall) {

        }
    }
}

// main function
int main() {

    cout << "Main function established." << endl;

    return 0;
}