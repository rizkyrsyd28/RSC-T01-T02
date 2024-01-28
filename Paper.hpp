#ifndef FOO_HPP
#define FOO_HPP

#include <iostream>

class Paper {
    private: 
        // attribute private
        char name;
        int n_fold;
    
    public:
        // ctor
        Paper(char c);
        // dtor
        ~Paper();

        // attribute public
        int number;

        // method public
        void fold();
};

#endif