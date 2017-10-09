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

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

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
        AdHocSquare(double side); 
        void set_side(double side); 
        double get_area();
    private: 
        double side;
        double area;
        bool side_changed;
    };
}

