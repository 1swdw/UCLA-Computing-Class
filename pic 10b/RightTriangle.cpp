/*
PIC 10A Homework 7,RightTriangle.cpp
Author: Yadong Wu
UID: 705944816
Discussion Section: 2C
Date: 3/10/2023
*/
# include <iostream>
# include <cmath>
using namespace std;

// define the class RightTriangle below

class RightTriangle {
public:
     //defualt constructor
     RightTriangle();
    //other constructor
     RightTriangle(double a, double b);
    
     //mutator
     double get_hypotenuse() const;
     double get_perimeter() const;
     double get_area() const;
     void resize(double factor);
private:
     double a_cathtus;
     double b_cathtus;
};

// implement the member functions of RightTriangle class below
RightTriangle::RightTriangle(){
     a_cathtus = 1;
     b_cathtus = 1;
}
RightTriangle::RightTriangle(double a, double b){
     a_cathtus = a;
     b_cathtus = b;

}
void RightTriangle::resize(double factor){
     a_cathtus = a_cathtus * factor;
     b_cathtus = b_cathtus * factor;
}

double RightTriangle::get_hypotenuse() const{
     double hypotenuse = sqrt(a_cathtus*a_cathtus + b_cathtus*b_cathtus);
     return hypotenuse;
}

double RightTriangle::get_perimeter()const{
     double perimeter = a_cathtus + b_cathtus + sqrt(a_cathtus*a_cathtus + b_cathtus*b_cathtus);
     return perimeter;
}
double RightTriangle::get_area() const{
     double area = a_cathtus * b_cathtus * 1/2;
     return area;
}

// Do not modify the main function
int main() {
    
    cout << "Please input the lengths of two catheti of the right triangle: ";
    double length1;
    double length2;
    cin >> length1;
    cin >> length2;

    cout << "Please input the resizing factor: ";
    double fac;
    cin >> fac;

    if (length1 > 0 && length2 > 0) {
        RightTriangle triangle(length1, length2);
        cout << "The hypotenuse of the right triangle = " << triangle.get_hypotenuse() << endl;
        cout << "The perimeter of the right triangle = " << triangle.get_perimeter() << endl;
        cout << "The area of the right triangle = " << triangle.get_area() << endl;
        triangle.resize(fac);
        cout << "The hypotenuse of the right triangle after resizing = " << triangle.get_hypotenuse() << endl;
        cout << "The perimeter of the right triangle after resizing = " << triangle.get_perimeter() << endl;
        cout << "The area of the right triangle after resizing = " << triangle.get_area() << endl;
    }
    else {
        RightTriangle triangle;
        cout << "The hypotenuse of the right triangle = " << triangle.get_hypotenuse() << endl;
        cout << "The perimeter of the right triangle = " << triangle.get_perimeter() << endl;
        cout << "The area of the right triangle = " << triangle.get_area() << endl;
        triangle.resize(fac);
        cout << "The hypotenuse of the right triangle after resizing = " << triangle.get_hypotenuse() << endl;
        cout << "The perimeter of the right triangle after resizing = " << triangle.get_perimeter() << endl;
        cout << "The area of the right triangle after resizing = " << triangle.get_area() << endl;
    }
    



}










