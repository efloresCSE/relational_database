#ifndef RANDOM_H
#define RANDOM_H


#include "mylib.h"
using namespace std;

//Random class given by the Professor
class Random
{

public:
    Random();
    int GetNext(int lo, int hi);
private:
    //-----------------------------------------------------------------
    //static member variable keeps the random number
    //generator from being seeded everytime a
    // new Random object is instantiated.
    //Note the initialization of the static variable in the .cpp file.
    static int objectCount;
    //-----------------------------------------------------------------
};


#endif // RANDOM_H
