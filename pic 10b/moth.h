/*
PIC 10A Homework 7,moth.h
Author: Yadong Wu
Discussion Section: 2C
Date: 3/10/2023
*/
#ifndef MOTH_H
#define MOTH_H

// define the class Moth below
class Moth {
public:
    Moth(double initial_position);
    void move_to_light(double light_position);
    double get_position() const;
private:
    double position;
};


#endif
