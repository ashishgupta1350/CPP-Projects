/********************************************************************************
** Form generated from reading UI file 'findtext.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDTEXT_H
#define UI_FINDTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindText
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *searchLabel;
    QLineEdit *lineEdit;
    QPushButton *goButton;

    void setupUi(QWidget *FindText)
    {
        if (FindText->objectName().isEmpty())
            FindText->setObjectName(QStringLiteral("FindText"));
        FindText->resize(400, 300);
        verticalLayout = new QVBoxLayout(FindText);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(FindText);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        searchLabel = new QLabel(FindText);
        searchLabel->setObjectName(QStringLiteral("searchLabel"));

        horizontalLayout->addWidget(searchLabel);

        lineEdit = new QLineEdit(FindText);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        goButton = new QPushButton(FindText);
        goButton->setObjectName(QStringLiteral("goButton"));

        horizontalLayout->addWidget(goButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FindText);

        QMetaObject::connectSlotsByName(FindText);
    } // setupUi

    void retranslateUi(QWidget *FindText)
    {
        FindText->setWindowTitle(QApplication::translate("FindText", "FindText", nullptr));
        searchLabel->setText(QApplication::translate("FindText", "Search For", nullptr));
        goButton->setText(QApplication::translate("FindText", "Go!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindText: public Ui_FindText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDTEXT_H
