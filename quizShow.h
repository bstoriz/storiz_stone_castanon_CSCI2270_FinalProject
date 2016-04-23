#ifndef QUIZSHOW_H
#define QUIZSHOW_H
#include <string>

/*
Right now each quiz topic has their own .txt files. the information is organized as shown below
string question,string answer choice1,string answer choice2,string answer choice 3,int correct answer

the idea is to read in the appropriate .txt file for a chosen quiz topic and use a comma delimiter to separate the info into the struct shown in this file.
the program will print the question and three answers and compare the user input with what is in the last slot of the .txt file.
*/

struct topicQuestion{
    std::string question; //read in from file and printed
    std::string answer1; //read in from file and printed
    std::string answer2; //read in from file and printed
    std::string answer3; //read in from file and printed
    int correctAnswer; //read in from file and compared to user input
};

class quizShow
{
    public:
        quizShow();
        ~quizShow();
        void topicHistory();
        void topicMath();
        void topicScience();
        void topicRandomTrivia();
    protected:

    private:
        int totalNumberOfQuestions = 0; //initialized to 0 and will increment as questions are displayed
        int numberOfCorrect = 0; //initialized to 0 and will increment as the questions are deleted from the linked list
};

#endif // QUIZSHOW_H
