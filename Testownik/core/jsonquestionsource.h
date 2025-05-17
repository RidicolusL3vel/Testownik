#ifndef JSONQUESTIONSOURCE_H
#define JSONQUESTIONSOURCE_H

#include "questionsource.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QVector>
#include <QString>
#include <QDebug>

class JSONQuestionSource : public QuestionSource
{
private:
    QString filePath;
    QVector<TextQuestion> questions;

    void loadQuestionsFromFile();
public:
    explicit JSONQuestionSource(const QString &path);
    QVector<TextQuestion> getQuestions() const override;
};

#endif // JSONQUESTIONSOURCE_H
