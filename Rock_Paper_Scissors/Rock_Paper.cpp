#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

char getComputerMove(){
    srand(time(0));
    int move;
    move = rand()%3;

    if(move == 0){
        return 'r';
    }

    else if(move == 1){
        return 'p';
    }
    else{
        return 's';
    }
}

int results(char playerMove , char ComputerMove){
    if(playerMove == ComputerMove){
        return 0;
    }
    else if(playerMove == 'p' && ComputerMove == 'r'){
        return 1;
    }
    else if(playerMove == 'p' && ComputerMove == 's'){
        return -1;
    }
    else if(playerMove == 's' && ComputerMove == 'r'){
        return -1;
    }
    else if(playerMove == 's' && ComputerMove == 'p'){
        return 1;
    }
    else if(playerMove == 'r' && ComputerMove == 's'){
        return 1;
    }
    else if(playerMove == 'r' && ComputerMove == 'p'){
        return -1;
    }
}

int main(){
    char playerMove;
    cout<<"Enter your choice ('p','s','r')"<<endl;
    cin>> playerMove;
    while(1){
    if(playerMove == 'p' || playerMove == 's' || playerMove == 'r'){
        break;
    }
    else{
        cout<<"Invalid input"<<endl;
    }
    }

    char ComputerMove;
    ComputerMove = getComputerMove();

    int result = results(playerMove , ComputerMove);
    if(result == 0){
        cout<<"game draw"<<endl;
    }
    else if (result == 1){
        cout<<"player won" << endl;
    }
    else{
        cout<< "computer won"<< endl;
    }

    return 0;
}