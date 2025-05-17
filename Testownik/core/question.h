#ifndef QUESTION_H
#define QUESTION_H

#include <QString>
#include <QStringList>

class Question
{
private:
    QString text;
    QStringList options;
    int correctOprionIndex;
public:
    Question();
    virtual ~Question() = 0;

    virtual bool isCorrect(int optionIndex) const = 0;
    virtual QString getText() const = 0;
    virtual QStringList getOptions() const = 0;
    virtual int getCorrectIndex() const = 0;
};

#endif // QUESTION_H
