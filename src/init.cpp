#include <iostream>
#include <time.h>

using namespace std;

/*
function doRand
returns a random number from 0 to 99 for other functions to use
*/
int doRand() {

    srand(time(NULL));
    return rand() % 100;
}

string stringInput(string prompt) {

   string message;
   
   cout << prompt << ": ";
   getline(cin,message);

   return message; 
}

// main function
int main() {

    cout << "Main function established." << endl;

    return 0;
}