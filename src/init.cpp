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


// main function
int main() {

    cout << "Main function established." << endl;

    return 0;
}