//
//  main.cpp
//  A struct 4 names
//
//  Created by Khalid  on 9/8/17.
//  Copyright © 2017 Khalid Alghamdi. All rights reserved.
//

#include <iostream>
using namespace std;




struct NUM{
    double num;
    


};
int main()

{

    NUM Namber;
    
    float slope, intercept;
    float x1, y1, x2, y2;
    float dx, dy;
    cout << "Enter x1: ";
    cin >> x1;
    
    cout << "Enter x2: ";
    cin >> x2;

    cout << "Enter y1: ";
    cin >> y1;


    cout << "Enter y2: ";
    cin >> y2;
    
    dx = x2 - x1;
    dy = y2 - y1;
    slope = dy / dx;
    intercept = y1 - slope * x1;
    
    
    cout << "("<< x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") : Y = ";
    cout << slope << "X " << ((intercept < 0) ? ' ' : '+') << intercept << "\n";


    
 
    
    
    return 0;
}
