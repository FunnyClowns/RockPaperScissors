#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

using num_t = int;

int main () {

string replay;
replay = " ";
   do {
     srand(time(NULL));

    int programNum = (rand() % 3) + 1;
    int playerNum = 0, whileValue = 0;
    string playerString;

    cout << endl;
    
    cout << "==== Rock Paper Scissors Game ===="  <<endl;

    do {
        if (!whileValue) {
            whileValue += 1;
            cout << "Choose one (Rock, Paper, Scissors) : ";
            getline(cin, playerString);
        } else {
            cout << "Choose one first (Rock, Paper, Scissors) : ";
            getline(cin, playerString);
        }
    } while(playerString.empty());
    do {
        if (playerString == "rock" || playerString == "Rock"){
        playerNum = 1;
    } else if (playerString == "paper" || playerString == "Paper"){
        playerNum = 2;
    } else if (playerString == "scissors" || playerString == "Scissors"){
        playerNum = 3;
    } else {
        cout << "Please only choose between (Rock, Paper, Scissors) : ";
        getline(cin, playerString);
    }
    }while(!playerNum);
    cout << endl;

    cout << "==================================" <<endl;
    /*
    Rock = 1
    Paper = 2
    Scissors = 3
    */
    if 
    //Rock
    (playerNum == 1 && programNum == 1) {
        cout << "Its a draw !" << endl;
        cout << "Because the program chose Rock and so did you!" << endl;
    } else if (playerNum == 1 && programNum == 2) {
        cout << "You lose :(" << endl;
        cout << "Because the program chose Paper and you are Rock." << endl;
    } else if (playerNum == 1 && programNum == 3) {
        cout << "You win !!" << endl;
        cout << "Because the program chose Scissors and you are Rock!" << endl;
    }
    
    // Paper
    
    else if (playerNum == 2 && programNum == 1) {
        cout << "You win !!" << endl;
        cout << "Because the program chose Rock and you are Paper!" << endl;
    } else if (playerNum == 2 && programNum == 2) {
        cout << "Its a draw !" << endl;
        cout << "Because the program chose Paper and so did you!" << endl;
    } else if (playerNum == 2 && programNum == 3) {
        cout << "You lose :(" << endl;
        cout << "Because the program chose Scissors and you are Paper." << endl;
    }

    // Scissors

    else if (playerNum == 3 && programNum == 1) {
        cout << "You lose :(" << endl;
        cout << "Because the program chose Rock and you are Scissors." << endl;
    } else if (playerNum == 3 && programNum == 2) {
        cout << "You win !!" << endl;
        cout << "Because the program chose Paper and you are Scissors!" << endl;
    } else if (playerNum == 3 && programNum == 3) {
        cout << "Its a draw !" << endl;
        cout << "Because the program chose Scissors and so did you!" << endl;
    }
    cout << endl;

    cout << "============ REPLAY ? ============" << endl;
    cout << "Type (Y / N) : ";
    getline(cin, replay);
    cout << endl;

   } while(replay == "y" || replay == "Y");

   cout << "Thanks for playing :)" << endl;
}