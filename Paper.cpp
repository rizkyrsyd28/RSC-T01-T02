#include "Paper.hpp"

using namespace std;

Paper::Paper(char c) {
    this->name = c;
    this->n_fold = 0;
    this->number = 100; 
    cout << "ctor" << c << endl;
}

Paper::~Paper() {
    cout << "dtor" << this->name << endl;
}

void Paper::fold() {
    n_fold += 1; 
    cout << "fold" << this->name << "(" << n_fold << ")" << endl;
}