#include <fstream>
#include <iostream>
#include <thread>
#include "matriz.h"
#include "lectura.cpp"

using namespace std;

int main() {
    ifstream f;
    f.open("ejemplo1.txt");
    leer(f);
    return 0;
}