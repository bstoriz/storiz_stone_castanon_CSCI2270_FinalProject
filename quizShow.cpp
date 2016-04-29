#include "quizShow.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "stdlib.h"

using namespace std;

quizShow::quizShow(){
    //ctor
}
quizShow::~quizShow(){
    //dtor
}

/*
Each quiz topic has a separate .txt file that contains the question and corresponding answer.
Each function calls it's corresponding .txt file
*/

void quizShow::topicArt(){

    readFile("topicArt.txt", 3);
}

void quizShow::topicEnglish(){
    readFile("topicEnglish.txt", 3);
}

void quizShow::topicCompSci(){
    readFile("topicCompSci.txt", 3);
}

void quizShow::topicPhysics(){
    readFile("topicPhysics.txt", 3);
}

void quizShow::topicChemistry(){
    readFile("topicChemistry.txt", 3);
}

void quizShow::topicGeography(){
    readFile("topicGeography.txt", 3);
}
void quizShow::topicHistory(){
    readFile("topicHistory.txt", 3);

}

void quizShow::topicMath(){
    readFile("topicMath.txt", 3);
}

void quizShow::topicScience(){
    readFile("topicScience.txt", 3);
}

void quizShow::topicRandomTrivia(){
    readFile("topicRandom.txt", 3);
}

//Reads in the right file with the given number of questions
void quizShow::readFile(char *fileName, int numQuestions) {
    topicQuestion tq;
    string answers[3];
    ifstream inFile;
    string line;
    inFile.open(fileName);
    if (inFile.good()) {
        string question1, question2, question3, answer11, answer12, answer13, answer21, answer22, answer23, answer31, answer32, answer33, correctAnswer1, correctAnswer2, correctAnswer3;
        //stuff for question1
        getline(inFile, question1);
        tq.question1 = question1;

        getline(inFile, answer11);
        tq.answer11 = answer11;

        getline(inFile, answer12);
        tq.answer12 = answer12;

        getline(inFile, answer13);
        tq.answer13 = answer13;

        getline(inFile, correctAnswer1);
        tq.correctAnswer1 = atoi(correctAnswer1.c_str()); //int answer = atoi(token1.c_str()); //atoi vs stoi to be more accessible to people not using c++ 11
        //stuff for question2

        getline(inFile, question2);
        tq.question2 = question2;

        getline(inFile, answer21);
        tq.answer21 = answer21;

        getline(inFile, answer22);
        tq.answer22 = answer22;

        getline(inFile, answer23);
        tq.answer23 = answer23;

        getline(inFile, correctAnswer2);
        tq.correctAnswer2 = atoi(correctAnswer2.c_str()); //int answer = atoi(token1.c_str()); //atoi vs stoi to be more accessible to people not using c++ 11

        //stuff for question3
        getline(inFile, question3);
        tq.question3 = question3;

        getline(inFile, answer31);
        tq.answer31 = answer31;

        getline(inFile, answer32);
        tq.answer32 = answer32;

        getline(inFile, answer33);
        tq.answer33 = answer33;

        getline(inFile, correctAnswer3);
        tq.correctAnswer3 = atoi(correctAnswer3.c_str()); //int answer = atoi(token1.c_str()); //atoi vs stoi to be more accessible to people not using c++ 11

        int userChoiceAnswer;
        cout << tq.question1 << endl;
        cout << tq.answer11 << endl;
        cout << tq.answer12 << endl;
        cout << tq.answer13 << endl;
        totalNumberOfQuestions++;
        //cin.ignore();
        cin >> userChoiceAnswer;
        answers[0] = userChoiceAnswer;

        if(userChoiceAnswer == tq.correctAnswer1){
            //delete from list
            numberOfCorrect++;
        }

        cout << tq.question2 << endl;
        cout << tq.answer21 << endl;
        cout << tq.answer22 << endl;
        cout << tq.answer23 << endl;
        totalNumberOfQuestions++;
       // cin.ignore();
        cin >> userChoiceAnswer;
        answers[1] = userChoiceAnswer;
        if(userChoiceAnswer == tq.correctAnswer2){
            //delete from list
            numberOfCorrect++;
        }

        cout << tq.question3 << endl;
        cout << tq.answer31 << endl;
        cout << tq.answer32 << endl;
        cout << tq.answer33 << endl;
        totalNumberOfQuestions++;
        //cin.ignore();
        cin >> userChoiceAnswer;
        answers[2] = userChoiceAnswer;
        if(userChoiceAnswer == tq.correctAnswer3){
            //delete from list
            numberOfCorrect++;
        }
        inFile.close();

    }
    else {
        cout << "Could not read file." << endl;
    }
}

void quizShow::printScore() {
    int totalnumberWrong= totalNumberOfQuestions - numberOfCorrect;

    cout<<"You answered "<<totalNumberOfQuestions<<" questions."<<endl;
    cout<<"You got " <<numberOfCorrect<< " questions right."<<endl;
    cout<<"You got "<<totalnumberWrong<<" wrong."<<endl;

    if (totalNumberOfQuestions != 0) {
        double score = (double(numberOfCorrect) / totalNumberOfQuestions);
        cout << "Your score is " << score * 100 << "%." << endl;

    } else {
        cout << "No questions have been answered." << endl;
    }
}
