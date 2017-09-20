#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QChar>
//#include <QVector>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
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
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

protected:
    virtual void changeEvent(QEvent *evt);

private:
    Ui::MainWindow *ui;
    QChar en2ruConvertArray[69][2];

    void ArrayFill();
    void StringChecking(QString strForChecking);

    LangLayoutType currentLayoutInString;

    QString En2Ru(QString str4convert);
    QString Ru2En(QString str4convert);
};

#endif // MAINWINDOW_H
