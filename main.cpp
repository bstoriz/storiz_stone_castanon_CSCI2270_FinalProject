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

    bool answered1 = true; //switches are used to make sure the player doesnt pick the same category
    bool answered2 = true;
    bool answered3 = true;
    bool answered4 = true;
    bool answered5 = true;
    bool answered6 = true;
    bool answered7 = true;
    bool answered8 = true;
    bool answered9 = true;
    bool answered10 =true;



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
        cout << "11. Print Score" << endl;
        cout << "12. Quit" << endl;
        cin >> mainMenuChoice;
        cout << endl;
        if(mainMenuChoice == 1)
        {
                if(answered1==true)
                {
                    qs->topicArt();
                    answered1=false;
                }
                else
                {
                    cout<<"You already answered these questions"<<endl;
                    cout<<"Please choose another category"<<endl;
                }
        }

        if(mainMenuChoice == 2)
        {

                if( answered2 == true)
                {
                    qs->topicEnglish();
                    answered2=false;
                }
                else
                {
                    cout<<"You already answered these questions"<<endl;
                    cout<<"Please choose another category"<<endl;
                }
        }

        if(mainMenuChoice == 3)
        {

                if(answered3==true)
                {
                    qs->topicCompSci();
                    answered3=false;
                }
                else
                {
                    cout<<"You already answered these questions"<<endl;
                    cout<<"Please choose another category"<<endl;
                }
        }

        if(mainMenuChoice == 4)
        {

                if(answered4==true)
                {
                   qs->topicPhysics();
                   answered4=false;
                }
                else
                {
                    cout<<"You already answered these questions"<<endl;
                    cout<<"Please choose another category"<<endl;
                }

        }

        if(mainMenuChoice == 5)
        {

                if(answered5==true)
                {
                   qs->topicChemistry();
                   answered5=false;
                }
                else
                {
                    cout<<"You already answered these questions"<<endl;
                    cout<<"Please choose another category"<<endl;
                }
        }

        if(mainMenuChoice == 6)
        {

                if(answered6==true)
                {
                   qs->topicGeography();
                   answered6=false;
                }
                else
                {
                    cout<<"You already answered these questions"<<endl;
                    cout<<"Please choose another category"<<endl;
                }
        }

        if(mainMenuChoice == 7)
        {
                if(answered7==true)
                {
                   qs->topicHistory();
                   answered7=false;
                }
                else
                {
                    cout<<"You already answered these questions"<<endl;
                    cout<<"Please choose another category"<<endl;
                }
        }

        if(mainMenuChoice == 8)
        {
                if(answered8==true)
                {
                   qs->topicMath();
                   answered8=false;
                }
                else
                {
                    cout<<"You already answered these questions"<<endl;
                    cout<<"Please choose another category"<<endl;
                }
        }

        if(mainMenuChoice == 9)
        {

                if(answered9==true)
                {
                    qs->topicScience();
                    answered9=false;
                }
                else
                {
                    cout<<"You already answered these questions"<<endl;
                    cout<<"Please choose another category"<<endl;
                }
        }

        if(mainMenuChoice == 10)
        {
                if(answered10==true)
                {
                    qs->topicRandomTrivia();
                    answered10 = false;
                }
                else
                {
                    cout<<"You already answered these questions"<<endl;
                    cout<<"Please choose another category"<<endl;
                }
        }

        if(mainMenuChoice == 11) {
            qs->printScore();
        }
        if(mainMenuChoice == 12){ //standard exit message, ends the while loop, exits program.
            cout << "Thanks for playing!" << endl;
            powerSwitch = false;
            return 0;
        }
    }
    return 0;
}
