// coordinates_distance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <math>

using namespace std;

int main()
{
    double x1, y1, x2, y2, distance;

    cout << "Enter the x and y co-ordiantes of the first point (eg: x y): ";
    cin >> x1 >> y1;

    cout << "Enter the x and y co-ordiantes of the second point (eg: x y): ";
    cin >> x2 >> y2;

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    cout << "The distance between the two points is " << distance << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
