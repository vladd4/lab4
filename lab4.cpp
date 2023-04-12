#include "v_class.h"

int main()
{
    Vector v1;
    v1.setXY(-7, -1);
    cout << "Cordinates of vector 1: ";
    v1.printCord();
    v1 * 2;
    cout << "Cordinates of vector 1 after incrementing: ";
    v1.printCord();

    Vector v2(11, 5);
    cout << "Cordinates of vector 2: ";
    v2.printCord();

    Vector v3 = v1 - v2;
    cout << "Cordinates of vector 3: ";
    v3.printCord();
    v3.vectorLen();
  
    /*
     cout << "----------------" << endl;
    v1.printCord();
    v2.printCord();
    */
   
    
    
}

