#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

/*******************************************************************************
 * Function prototype
*******************************************************************************/

void towerHanoi(int n, string from, string aux, string to, int& numMoves)
{
    // TO DO: Implement your code
    if (n == 1) {
        cout << "Move disk from " << from << " to " << to << endl;
        numMoves++;
        return;
    }
    towerHanoi(n - 1, from, aux, to, numMoves);
    cout << "Move disk from " << from << " to " << to << endl;
    numMoves++;
    towerHanoi(n - 1, aux, to, from, numMoves);

}

/*******************************************************************************
 * Description:
 * Starting point of the program. Calls a function to recursively determine
 * solutions for the first 5 instances of the Tower of Hanoi problem.
 * 
 * Input:
 * N/A
 *
 * Output:
 * An integer to signal to the OS the exit code.
*******************************************************************************/

int main() {
    // solve the first 5 cases of the Tower of Hanoi problem
    for (int i = 1, numMoves = 0; i <= 5; i++, numMoves = 0) {
        cout << setfill('-') << setw(40) << "" << endl;
        cout << "Trying n = " << i << endl << endl;
        towerHanoi(i, "Rod #1", "Rod #2", "Rod #3", numMoves);
        cout << endl << "Number of Moves = " << numMoves << endl;
    }

    // terminate
    return 0;
}
