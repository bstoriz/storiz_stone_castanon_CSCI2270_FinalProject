#ifndef QUIZSHOW_H
#define QUIZSHOW_H
#include <string>

struct topicQuestion{
    std::string question;
    std::string answer1;
    std::string answer2;
    std::string answer3;
    int correctAnswer;
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
        int numberOfCorrect = 0;
};

#endif // QUIZSHOW_H
