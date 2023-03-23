// command line inputs in c++ that listens to new line 
// and space as delimiters 


#include <iostream>
#include <string>
#include <cstring>

using namespace std;


//move all the main code to a function that returns the users input in an object
//the object will have the soldier name and the direction to move
//the object will be passed to a function that will move the soldier
//the function will return a boolean value to confirm the movement
//the main function will print the result of the movement

bool moveSoldier(string* soldier, string* direction){
    //move the soldier to the direction
    //return a boolean value to confirm the movement
    
    cout << "Ingrese el soldado a mover: ";
    getline(cin, *soldier);

    cout << "Ingrese la direccion a mover: ";
    getline(cin, *direction);

   return true;
}

int main(int argc, char* argv[])
{

    string soldier,direction;
    moveSoldier(&soldier,&direction);
    cout << "El soldado " << soldier << " se movio a hacia " << direction << endl;


    return 0;
}
