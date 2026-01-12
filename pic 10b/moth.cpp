/*
PIC 10A Homework 7,moth.cpp
Author: Yadong Wu
Discussion Section: 2C
Date: 3/10/2023
*/

#include "moth.h"

// implement the member functions of the Moth class below
Moth::Moth(double initial_position){
    position = initial_position;
}
void Moth::move_to_light(double light_position){
    position = (position + light_position)/2;
}
double Moth::get_position() const{
    return position;
}


