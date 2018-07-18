#ifndef FINDTEXT_H
#define FINDTEXT_H

#include <QWidget>

namespace Ui {
class FindText; // namespace lets us group classes together
}

class FindText : public QWidget
{
    Q_OBJECT // rule to follow

public:
    explicit FindText(QWidget *parent = 0); // parent class is null. In the constructor the parent is null
    ~FindText();

private slots:
    void on_goButton_clicked();

private:
    Ui::FindText *ui;
    void getTextFile();
};

#endif // FINDTEXT_H
