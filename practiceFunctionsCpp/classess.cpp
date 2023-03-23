//declare a class that is called soldier that has a two dimensional position and a method to move the position and a method to print the position
// also has a method to kill the soldier and a method to print the status of the soldier


#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class soldier{
    public:
        int x;
        int y;
        void moveSoldier(string direction){
            if(direction == "arriba"){
                x--;
            }
            else if(direction == "abajo"){
                x++;
            }
            else if(direction == "izquierda"){
                y--;
            }
            else if(direction == "derecha"){
                y++;
            }
            else if(direction == "diagonal superior derecha"){
                x--; y++;
            }
            else if(direction == "diagonal superior izquierda"){
                x--; y--;
            }
            else if(direction == "diagonal inferior derecha"){
                x++; y++;
            }
            else if(direction == "diagonal inferior izquierda"){
                x++; y--;
            }
            else{
                cout << "Direccion invalida" << endl;
            }
        }
        void printPosition(){
            cout << "Soldado en la posicion: " << x << "," << y << endl;
        }
    
};

// class llamada player que contiene un array de soldados y un numero de jugador 
//el jugador tiene un metodo para mover un soldado en una direccion y un metodo para depositar minas 

class player{
    public:
        int number;
        soldier* soldiers;
        int soldiersCount;
        void moveSoldier(int x,int y, string direction){
            for(int i = 0; i < soldiersCount; i++){
                if(soldiers[i].x == x && soldiers[i].y == y){
                    soldiers[i].moveSoldier(direction);
                }
            }
        }
        void placeMine(int x,int y){
            //place a mine in the position x,y

        }
        void printSoldiersPosition(){
            for(int i = 0; i < soldiersCount; i++){
                soldiers[i].printPosition();
            }
        }
};


//declare an enum with this possible values: player1Soldier, player2Soldier, player1Mine, player2Mine, empty, blocked


enum cellType{
    player1Soldier,
    player2Soldier,
    player1Mine,
    player2Mine,
    empty,
    blocked
};

//instance that enum 

cellType cell;

//declare a class called board that has a 2d array of cellType and a method to print the board

class board{
    public:
        cellType** board;
        int rows;
        int columns;
        void printBoard(){
            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    cout << board[i][j] << " ";
                }
                cout << endl;
            }
        }
};




