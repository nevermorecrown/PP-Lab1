#include "generator.h"
#include <iostream>
#include "experiments.h"

int main() {
    int N = 10000000;
    unsigned *V = new unsigned[N];
    run_experiments_for(V, N, randomize, 10, 100);
    return 0;
}