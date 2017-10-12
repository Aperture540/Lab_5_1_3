/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agendron
 *
 * Created on October 9, 2017, 12:38 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class AdHocSquare 
{
public:
    AdHocSquare(double side);
    void set_side(double side);
    double get_area();
private:
    double side;
};

class LazySquare 
{
public:
    LazySquare(double side);
    void set_side(double side);
    double get_area();
private:
    double side;
    double area;
    bool side_changed;
};

AdHocSquare::AdHocSquare(double side)
{
    this->side = side;
};

double AdHocSquare::get_area()
{
    this->side = side;
    return side * side;
};

LazySquare::LazySquare(double side)
{    
    if(this->side != side)
    {
        this->side = side;
        this->side_changed = true;
    }
    else
    {
        side_changed = false;
    }
};

double LazySquare::get_area()
{
    if(this->side_changed)
    {
        this->side = side;
        this->area = side * side;
        this->side_changed = false;
        return area;
    }
    else
    {
        return area;
    }
}


int main()
{
    AdHocSquare ahs(4.0);
    
    LazySquare ls(5.0);
    
    cout << "AdHocSquare = " << ahs.get_area() << endl;
    cout << "LazySquare = " << ls.get_area() << endl;
    
    return 0;
}

