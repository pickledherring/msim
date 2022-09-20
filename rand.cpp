#include <random>
#include <iostream>
using namespace std;

uniform_real_distribution<> rand_floats(0, 1);
random_device dev;
mt19937 rng(dev());

int main(int argc, char *argv[]) {
    for (int i = 0; i < 5; i++) {
        cout<<rand_floats(rng)<<"\n";
    }
}