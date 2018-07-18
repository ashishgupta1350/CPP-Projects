#include<QTCore/QFile>
#include<QTCore/QTextStream>

#include "findtext.h"
#include "ui_findtext.h"

FindText::FindText(QWidget *parent) : QWidget(parent), ui(new Ui::FindText)
{
    ui->setupUi(this);
    getTextFile();
}

FindText::~FindText()
{
    delete ui;
}

void FindText::on_goButton_clicked()
{
       QString word=ui->lineEdit->text();
       ui->textEdit->find(word,QTextDocument::FindWholeWords);
}
void FindText::getTextFile(){
    //loads text and searches the term
    QFile myFile(":/sometextfile.txt");
    myFile.open(QIODevice::ReadOnly);
    QTextStream textStream(&myFile);
    QString line=textStream.readAll();
    myFile.close();
    ui->textEdit->setPlainText(line);
    QTextCursor textCursor = ui->textEdit->textCursor();
    textCursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor,1);
    return;
}
