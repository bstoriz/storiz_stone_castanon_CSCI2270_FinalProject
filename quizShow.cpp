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
    topicQuestion questions[3];
    ifstream inFile;
    string line;
    inFile.open(fileName);
    if (inFile.good()) {
        while (!inFile.eof()) {
            //Based off the number of questions, it will fill the struct with the proper questions and answers.
            for (int i = 0; i < 3; i++) {
                string question1, question2, question3, answer11, answer12, answer13, answer21, answer22, answer23, answer31, answer32, answer33, correctAnswer1, correctAnswer2, correctAnswer3;
                //stuff for question1
                getline(inFile, question1);
                questions[i].question1 = question1;

                getline(inFile, answer11);
                questions[i].answer11 = answer11;

                getline(inFile, answer12);
                questions[i].answer12 = answer12;

                getline(inFile, answer13);
                questions[i].answer13 = answer13;

                getline(inFile, correctAnswer1);
                questions[i].correctAnswer1 = atoi(correctAnswer1.c_str()); //int answer = atoi(token1.c_str()); //atoi vs stoi to be more accessible to people not using c++ 11
                //stuff for question2
                getline(inFile, question2);
                questions[i].question2 = question2;

                getline(inFile, answer21);
                questions[i].answer21 = answer21;

                getline(inFile, answer22);
                questions[i].answer22 = answer22;

                getline(inFile, answer23);
                questions[i].answer23 = answer23;

                getline(inFile, correctAnswer2);
                questions[i].correctAnswer2 = atoi(correctAnswer2.c_str()); //int answer = atoi(token1.c_str()); //atoi vs stoi to be more accessible to people not using c++ 11
                //stuff for question3
                getline(inFile, question3);
                questions[i].question3 = question3;

                getline(inFile, answer31);
                questions[i].answer31 = answer31;

                getline(inFile, answer32);
                questions[i].answer32 = answer32;

                getline(inFile, answer33);
                questions[i].answer33 = answer33;

                getline(inFile, correctAnswer3);
                questions[i].correctAnswer3 = atoi(correctAnswer3.c_str()); //int answer = atoi(token1.c_str()); //atoi vs stoi to be more accessible to people not using c++ 11
            }
            while(){//there are questions in the list
                int userChoiceAnswer;
                cout << questions[0].question1 << endl;
                cout << questions[0].answer11 << endl;
                cout << questions[0].answer12 << endl;
                cout << questions[0].answer13 << endl;
                cin.ignore();
                cin >> userChoiceAnswer;
                if(userChoiceAnswer == questions[0].correctAnswer1){
                    //delete from list
                }
                else{
                    //move wrong answer to end of list
                }

                cout << questions[0].question2 << endl;
                cout << questions[0].answer21 << endl;
                cout << questions[0].answer22 << endl;
                cout << questions[0].answer23 << endl;
                cin.ignore();
                cin >> userChoiceAnswer;
                if(userChoiceAnswer == questions[0].correctAnswer2){
                    //delete from list
                }
                else{
                    //move wrong answer to end of list
                }
                cout << questions[0].question3 << endl;
                cout << questions[0].answer31 << endl;
                cout << questions[0].answer32 << endl;
                cout << questions[0].answer33 << endl;
                cin.ignore();
                cin >> userChoiceAnswer;
                if(userChoiceAnswer == questions[0].correctAnswer3){
                    //delete from list
                }
                else{
                    //move wrong answer to end of list
                }
            }
            inFile.close();
        }
    }
    else {
        cout << "Could not read file." << endl;
    }
}
