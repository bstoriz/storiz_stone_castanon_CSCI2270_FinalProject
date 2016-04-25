/*
Final Project for CSCI 2270 Brendan Storiz, Carolyn Castanon, Brandon Stone

This program is a text based quiz game written in C++. The user uses the program main menu to navigate to a subject in which they would like to answer questions on.
Based on the main menu choice, the program navigates to a linked list of questions based on the subject selected.
The user selects the answer to the multiple choice question. If the user gets the answer correct, the question is removed from the linked list.
If the user chooses an incorrect answer, the question is moved to the end of the linked list. The game is over when all questions are answered correctly.
After the user answers are correct, the program will display the number of questions the user answered correctly vs the total number of questions asked.
*/

#include <iostream>
#include "quizShow.h"

using namespace std;

int main(){
    quizShow *qs = new quizShow();
    bool powerSwitch = true; //allows main menu to re-appear until user quits
    int mainMenuChoice;
    while(powerSwitch == true){ //while the user hasn't chosen quit...
        cout << "====== Welcome ======" << endl << endl; //standard welcome banner
        cout << "Choose a number to take the corresponding quiz" << endl; //user prompt
        //initial ideas for quiz topics. i honestly have no ideas what will be "fun" to quiz on
        cout << "1. History" << endl;
        cout << "2. Math" << endl;
        cout << "3. Science" << endl;
        cout << "4. Random Trivia" << endl;
        cout << "5. Quit" << endl;
        cin >> mainMenuChoice;
        if(mainMenuChoice == 1){
            qs->topicHistory();
        }
        if(mainMenuChoice == 2){
            qs->topicMath();
        }
        if(mainMenuChoice == 3){
            qs->topicScience();
        }
        if(mainMenuChoice == 4){
            qs->topicRandomTrivia();
        }
        if(mainMenuChoice == 5){ //standard exit message, ends the while loop, exits program.
            cout << "Thanks for playing!" << endl;
            powerSwitch = false;
            return 0;
        }
    }
}
