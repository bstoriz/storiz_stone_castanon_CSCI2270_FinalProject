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
        cout << "1. Art" << endl;
        cout << "2. English" << endl;
        cout << "3. Computer Science" << endl;
        cout << "4. Physics" << endl;
        cout << "5. Chemistry" << endl;
        cout << "6. Geography" << endl;
        cout << "7. History" << endl;
        cout << "8. Math" << endl;
        cout << "9. Science" << endl;
        cout << "10. Random Trivia" << endl;
        cout << "11. Quit" << endl;
        cin >> mainMenuChoice;
        cout << endl;
        if(mainMenuChoice == 1){
            qs->topicArt();
        }
        if(mainMenuChoice == 2){
            qs->topicEnglish();
        }
        if(mainMenuChoice == 3){
            qs->topicCompSci();
        }
        if(mainMenuChoice == 4){
            qs->topicPhysics();
        }
        if(mainMenuChoice == 5){
            qs->topicChemistry();
        }
        if(mainMenuChoice == 6){
            qs->topicGeography();
        }
        if(mainMenuChoice == 7){
            qs->topicHistory();
        }
        if(mainMenuChoice == 8){
            qs->topicMath();
        }
        if(mainMenuChoice == 9){
            qs->topicScience();
        }
        if(mainMenuChoice == 10){
            qs->topicRandomTrivia();
        }
        if(mainMenuChoice == 11){ //standard exit message, ends the while loop, exits program.
            cout << "Thanks for playing!" << endl;
            powerSwitch = false;
            return 0;
        }
    }
    return 0;
}
