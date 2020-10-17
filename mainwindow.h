#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QChar>
#include <QMessageBox>

//namespace Ui {
//class MainWindow;
//}

class QLineEdit;
class QPushButton;

class MainWindow : public QWidget
{
    Q_OBJECT

    enum LangLayoutType
    {
        English,
        Russian,
        Unknown,
        EmptyString
    };

public:
    explicit MainWindow(QWidget *parent = 0);

private slots:
    void clickedPbtn();

protected:
    virtual void changeEvent(QEvent *evt);

private:
    //Ui::MainWindow *ui;
    QLineEdit *lned;
    QPushButton *pbtn;
    QChar en2ruConvertArray[69][2];

    void ArrayFill();
    void StringChecking(QString strForChecking);

    LangLayoutType currentLayoutInString;

    QString En2Ru(QString str4convert);
    QString Ru2En(QString str4convert);
};

#endif // MAINWINDOW_H
