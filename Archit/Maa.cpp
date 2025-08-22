#include <iostream.h>
#include <conio.h>

// Function overloads
int marksheet(int a, float b) {
    return a + b;
}

int marksheet(int a, int b) {
    return a - b;
}

int marksheet(int a, int b, float c) {
    return a * b * c;
}

void main() {
    clrscr();

    cout << "function1: " << marksheet(10, 10.0f) << endl;  // Calls int, float
    cout << "function2: " << marksheet(2, 10) << endl;      // Calls int, int
    cout << "function3: " << marksheet(10, 20, 3.0f) << endl; // Calls int, int, float
    cout << "function4: " << marksheet(20, 4) << endl;      // Calls int, int again

    getch();
}
