#include "quizShow.h"
#include <iostream>
#include <fstream>
#include <sstream>

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
    topicQuestion questions[numQuestions];
    ifstream inFile;
    string line;
    inFile.open(fileName);
    if (inFile.good()) {
        while (getline(inFile, line)) {
            //Based off the number of questions, it will fill the struct with the proper questions and answers.
            for (int i = 0; i < numQuestions; i++) {
                stringstream ss(line);

                string question1;
                getline(ss, question1, ',');
                questions[i].question = question1;

                string answer1, answer2, answer3;
                getline(ss, answer1, ',');
                getline(ss, answer2, ',');
                getline(ss, answer3, ',');
                questions[i].answer1 = answer1;
                questions[i].answer2 = answer2;
                questions[i].answer3 = answer3;

                string token1;
                getline(ss, token1, ',');
                int answer = stoi(token1);
                questions[i].correctAnswer = answer;
            }
        }
        inFile.close();
    } else {
        cout << "Could not read file." << endl;
    }
}
