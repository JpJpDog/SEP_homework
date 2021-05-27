#ifndef WORDLISTWIDGET_H
#define WORDLISTWIDGET_H

#include "WordTable.h"

#include <QWidget>
#include <QLabel>

class WordListWidget : public QWidget
{
    Q_OBJECT
public:
    explicit WordListWidget(QWidget *parent = nullptr, QString label = "");
    void newWord(QString word);
    void clear();

signals:

public slots:

private:
    QString label;
    QList<QString> words;
    int score;
    WordTable *wordTable;
    QLabel *scoreLabel;
};

#endif // WORDLISTWIDGET_H
