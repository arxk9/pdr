/**
    CS 2150, timer.h
    Purpose: header file for timer class

    @author Alan Zheng (az4xfp)
    @version 1.1 02/28/2020
*/

// This timer typically has 1/1000000 second (1 micro-second) accuracy
// under most Linux distributions

#ifndef TIMER_H
#define TIMER_H

#include <iostream>
#include <string>
#include <time.h>
#include <sys/time.h>

using namespace std;

class timer {
private:
    timeval startVar, stopVar;
    bool running;

public:
    timer() : running(0) {}
    ~timer() {}
    timer(timer & myTimer);
    int start();
    int stop();
    string toString();
    ostream & print(ostream &theStream);
    double getTime();
};

ostream & operator<<(ostream & theStream, timer & theTimer);

#endif
