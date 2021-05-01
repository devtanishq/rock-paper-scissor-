// #include <iostream>
// #include <time.h>
#include <bits/stdc++.h>
using namespace std;

const int ROCK = 1;
const int PAPER = 2;
const int SCISSOR = 3;

int userChoice = 0;

int getComputerChoice(){
    srand (time(NULL));
    int compChoice = rand() % 3 + 1;
    return compChoice;
}

void determineWinner(int userChoice, int compChoice){
    if (userChoice == ROCK && compChoice == PAPER){
        cout << "Computer won!, Paper wraps Rock"<<endl;
    }
    else if (userChoice == PAPER && compChoice == SCISSOR){
        cout << "Computer won!, Scissor cuts Paper"<<endl;
    }
    else if (userChoice == SCISSOR && compChoice == ROCK){
        cout << "Computer Won!, Rock smashes Scissor"<<endl;
    }
    else if (userChoice == ROCK && compChoice == SCISSOR){
        cout << "You Won!, Rock Smashes Scissor"<<endl;
    }
    else if (userChoice == PAPER && compChoice == ROCK){
        cout << "You Won!, Paper Wraps Rock"<<endl;
    }
    else if (userChoice == SCISSOR && compChoice == PAPER){
        cout << "You Won!, Scissor cuts Paper"<<endl;
    }
    else {
        cout << "Tie"<<endl;
    }
}

void displayChoice(int choice){
    string result;
    if (choice == ROCK){
        result = "Rock";
    }
    else if (choice == PAPER){
        result = "Paper";
    }
    else {
        result = "Scissor";
    }
    cout << result<<endl;
}

int main() {
    cout << ""<<endl;
    cout << "    Rock Paper Scissor"<<endl;
    cout <<  "        Game Menu"<<endl;
    cout <<  "        ---------"<<endl;
    cout << "     1." << '\t' << "  Rock (Type 1 if Rock)"<<endl;
    cout << "     2." << '\t' << "  Paper (Type 2 if Paper)"<<endl;
    cout << "     3." << '\t' << "  Scissor (Type 3 if Scissor)"<<endl;

    cout << "Enter your Choice: ";
    cin >> userChoice;
    cout<<""<<endl;
    cout << "   You selected: ";
    displayChoice(userChoice);
    cout<<""<<endl;

    int compChoice = getComputerChoice();
    cout << "   Computer selected: ";
    displayChoice(compChoice);
    cout<<""<<endl;

    determineWinner(userChoice, compChoice);
    // cout<<""<<endl;
    cout << "-----------------------------------------------"<<endl;

    string t;
    cout << "(Very Bad) (Bad) (Good) (Very Good) (Excellent)"<<endl;
    cout << "How was your Experience: ";
    cin >> t;
    // cout<<""<<endl;
    cout << "Thank you For being here"<<endl;
    
}