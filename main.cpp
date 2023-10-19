#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double diagonal, length, width, area;
    int choice;

    cout << "Enter the length of the diagonal in inches: ";
    cin >> diagonal;

    cout << "Enter which type of TV you would like to view the dimensions for: " 
    << endl << "1. Traditional TV area." << endl << "2. LCD TV Area" << endl 
    << "3. Both types of TVs area";
    cin >> choice;

    cout << fixed << showpoint << setprecision(2);

    if(choice==1 || choice==3){
      double temporary = pow(diagonal,2);
      temporary /= 25;
      double x = sqrt(temporary);
      length = 4*x;
      width = 3*x;
      area = length*width;
      cout << "Traditional TV: " << endl;
      cout << "Length: " << length << endl << "Width: " << width << endl 
      << "Area: " << area << endl;
    }
    if(choice==2 || choice==3){
      double temporary = pow(diagonal,2);
      temporary /= 337;
      double x = sqrt(temporary);
      length = 16*x;
      width = 9*x;
      area = length*width;
      cout << "LCD TV: " << endl;
      cout << "Length: " << length << endl << "Width: " << width << endl 
      << "Area: " << area << endl;
    }

    return 0;
}
