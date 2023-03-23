// program that creates and edits a txt file

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string getIcon(int number){
    switch (number)
    {
    case 0: //inactive
        return " ✕✕ ";
    
    case 1: //bomb player 1 
    case 2: // bomb player 2 
        return " 💣 ";
    
    case 3: //player 1 soldier
    case 4: //player 2 soldier
        return " 🕴 ";

    default://empty
        return " '' ";
        break;
    }
}

//funcion que imprime la matriz en un archivo txt agregandole coordenadas a los ejes 
void printMatrix(int** matrix, int rows, int columns){
    ofstream myfile;
    myfile.open("example.txt");
    for(int i = 0; i < rows; i++){
        // agrega los numeros de filas 
        if(i < 10){
            if(i == 0 ){
                myfile <<" #|";
            }
            else{
                myfile << " " << i  << "| ";
            }
        }
        else{
            myfile << i << "| ";
        }
        // agrega los numeros de columna
        if(i == 0){ 
            for (int k = 0; k < columns; k++){
                if(k < 10){
                    myfile << "  " << k << " ";
                }
                else{
                    myfile << "  "<< k;
                }
            }
            myfile << endl;
            myfile << " " << 0 << "| ";
        }

        for(int j = 0; j < columns; j++){
            //agrego la informacion real
            string icon = getIcon(matrix[i][j]);
            myfile << icon;
        } 

        myfile << endl;
    }

    myfile.close();
}


int main()
{
    ofstream myfile;
    myfile.open("example.txt");
    myfile << "Writing this to a file";
    myfile.close();
   //declare a matrix of ints of 20x20 
   // fill the matrix with 0s   
    // print the matrix in the file example.txt
    int rows = 20;
    int columns = 20;
    int** matrix = new int*[rows];
    for(int i = 0; i < rows; i++){
        matrix[i] = new  int[columns];
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            matrix[i][j] = 5;
        }
    }
    //fill matrix randomly with 4 soldiers 
    for(int i = 0; i < 4; i++){
        int x = rand() % rows;
        int y = rand() % columns;
        matrix[x][y] = 3;
    }
    // fill matrix randomly with 8 bombs
    for(int i = 0; i < 8; i++){
        int x = rand() % rows;
        int y = rand() % columns;
        matrix[x][y] = 1;
    }
    //fill matrix randomly with 10 inactive spaces
    for(int i = 0; i < 10; i++){
        int x = rand() % rows;
        int y = rand() % columns;
        matrix[x][y] = 0;
    }

    printMatrix(matrix,rows,columns);

    //delete matrix
    for(int i = 0; i < rows; i++){
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}