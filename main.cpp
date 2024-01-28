#include "Paper.hpp"
#include <iostream>

using namespace std;

int main() {
    Paper paper = Paper('X');

    paper.fold();
    paper.fold();

    cout << paper.number << endl;

    return 0;
}