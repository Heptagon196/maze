#include "Error.h"
#include <iostream>
using namespace std;

void __Error(string msg) {
    color(RED, BLACK);
    cout << "Error: ";
    clearcolor();
    cout << msg << endl;
    showcursor();
    exit(1);
}

void __Warning(string msg) {
    color(PURPLE, BLACK);
    cout << "Warning: ";
    clearcolor();
    cout << msg << endl;
}