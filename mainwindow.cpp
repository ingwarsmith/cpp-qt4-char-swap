#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->mainToolBar->setShown(false);
    ui->menuBar->setShown(false);
    ui->statusBar->setShown(false);

    currentLayoutInString = Unknown;

    ArrayFill();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ArrayFill()
{
    en2ruConvertArray[0][0] = trUtf8("q").at(0); en2ruConvertArray[0][1] = trUtf8("й").at(0);
    en2ruConvertArray[1][0] = trUtf8("Q").at(0); en2ruConvertArray[1][1] = trUtf8("Й").at(0);
    en2ruConvertArray[2][0] = trUtf8("w").at(0); en2ruConvertArray[2][1] = trUtf8("ц").at(0);
    en2ruConvertArray[3][0] = trUtf8("W").at(0); en2ruConvertArray[3][1] = trUtf8("Ц").at(0);
    en2ruConvertArray[4][0] = trUtf8("e").at(0); en2ruConvertArray[4][1] = trUtf8("у").at(0);
    en2ruConvertArray[5][0] = trUtf8("E").at(0); en2ruConvertArray[5][1] = trUtf8("У").at(0);
    en2ruConvertArray[6][0] = trUtf8("r").at(0); en2ruConvertArray[6][1] = trUtf8("к").at(0);
    en2ruConvertArray[7][0] = trUtf8("R").at(0); en2ruConvertArray[7][1] = trUtf8("К").at(0);
    en2ruConvertArray[8][0] = trUtf8("t").at(0); en2ruConvertArray[8][1] = trUtf8("е").at(0);
    en2ruConvertArray[9][0] = trUtf8("T").at(0); en2ruConvertArray[9][1] = trUtf8("Е").at(0);
    en2ruConvertArray[10][0] = trUtf8("y").at(0); en2ruConvertArray[10][1] = trUtf8("н").at(0);
    en2ruConvertArray[11][0] = trUtf8("Y").at(0); en2ruConvertArray[11][1] = trUtf8("Н").at(0);
    en2ruConvertArray[12][0] = trUtf8("u").at(0); en2ruConvertArray[12][1] = trUtf8("г").at(0);
    en2ruConvertArray[13][0] = trUtf8("U").at(0); en2ruConvertArray[13][1] = trUtf8("Г").at(0);
    en2ruConvertArray[14][0] = trUtf8("i").at(0); en2ruConvertArray[14][1] = trUtf8("ш").at(0);
    en2ruConvertArray[15][0] = trUtf8("I").at(0); en2ruConvertArray[15][1] = trUtf8("Ш").at(0);
    en2ruConvertArray[16][0] = trUtf8("o").at(0); en2ruConvertArray[16][1] = trUtf8("щ").at(0);
    en2ruConvertArray[17][0] = trUtf8("O").at(0); en2ruConvertArray[17][1] = trUtf8("Щ").at(0);
    en2ruConvertArray[18][0] = trUtf8("p").at(0); en2ruConvertArray[18][1] = trUtf8("з").at(0);
    en2ruConvertArray[19][0] = trUtf8("P").at(0); en2ruConvertArray[19][1] = trUtf8("З").at(0);
    en2ruConvertArray[20][0] = trUtf8("[").at(0); en2ruConvertArray[20][1] = trUtf8("х").at(0); //!!!
    en2ruConvertArray[21][0] = trUtf8("{").at(0); en2ruConvertArray[21][1] = trUtf8("Х").at(0);
    en2ruConvertArray[22][0] = trUtf8("]").at(0); en2ruConvertArray[22][1] = trUtf8("ъ").at(0);
    en2ruConvertArray[23][0] = trUtf8("}").at(0); en2ruConvertArray[23][1] = trUtf8("Ъ").at(0);
    en2ruConvertArray[24][0] = trUtf8("a").at(0); en2ruConvertArray[24][1] = trUtf8("ф").at(0);
    en2ruConvertArray[25][0] = trUtf8("A").at(0); en2ruConvertArray[25][1] = trUtf8("Ф").at(0);
    en2ruConvertArray[26][0] = trUtf8("s").at(0); en2ruConvertArray[26][1] = trUtf8("ы").at(0);
    en2ruConvertArray[27][0] = trUtf8("S").at(0); en2ruConvertArray[27][1] = trUtf8("Ы").at(0);
    en2ruConvertArray[28][0] = trUtf8("d").at(0); en2ruConvertArray[28][1] = trUtf8("в").at(0);
    en2ruConvertArray[29][0] = trUtf8("D").at(0); en2ruConvertArray[29][1] = trUtf8("В").at(0);
    en2ruConvertArray[30][0] = trUtf8("f").at(0); en2ruConvertArray[30][1] = trUtf8("а").at(0);
    en2ruConvertArray[31][0] = trUtf8("F").at(0); en2ruConvertArray[31][1] = trUtf8("А").at(0);
    en2ruConvertArray[32][0] = trUtf8("g").at(0); en2ruConvertArray[32][1] = trUtf8("п").at(0);
    en2ruConvertArray[33][0] = trUtf8("G").at(0); en2ruConvertArray[33][1] = trUtf8("П").at(0);
    en2ruConvertArray[34][0] = trUtf8("h").at(0); en2ruConvertArray[34][1] = trUtf8("р").at(0);
    en2ruConvertArray[35][0] = trUtf8("H").at(0); en2ruConvertArray[35][1] = trUtf8("Р").at(0);
    en2ruConvertArray[36][0] = trUtf8("j").at(0); en2ruConvertArray[36][1] = trUtf8("о").at(0);
    en2ruConvertArray[37][0] = trUtf8("J").at(0); en2ruConvertArray[37][1] = trUtf8("О").at(0);
    en2ruConvertArray[38][0] = trUtf8("k").at(0); en2ruConvertArray[38][1] = trUtf8("л").at(0);
    en2ruConvertArray[39][0] = trUtf8("K").at(0); en2ruConvertArray[39][1] = trUtf8("Л").at(0);
    en2ruConvertArray[40][0] = trUtf8("l").at(0); en2ruConvertArray[40][1] = trUtf8("д").at(0);
    en2ruConvertArray[41][0] = trUtf8("L").at(0); en2ruConvertArray[41][1] = trUtf8("Д").at(0);
    en2ruConvertArray[42][0] = trUtf8(");").at(0); en2ruConvertArray[42][1] = trUtf8("ж").at(0);
    en2ruConvertArray[43][0] = trUtf8(":").at(0); en2ruConvertArray[43][1] = trUtf8("Ж").at(0);
    en2ruConvertArray[44][0] = trUtf8("\'").at(0); en2ruConvertArray[44][1] = trUtf8("э").at(0);
    en2ruConvertArray[45][0] = trUtf8("\"").at(0); en2ruConvertArray[45][1] = trUtf8("Э").at(0);
    en2ruConvertArray[46][0] = trUtf8("z").at(0); en2ruConvertArray[46][1] = trUtf8("я").at(0);
    en2ruConvertArray[47][0] = trUtf8("Z").at(0); en2ruConvertArray[47][1] = trUtf8("Я").at(0);
    en2ruConvertArray[48][0] = trUtf8("x").at(0); en2ruConvertArray[48][1] = trUtf8("ч").at(0);
    en2ruConvertArray[49][0] = trUtf8("X").at(0); en2ruConvertArray[49][1] = trUtf8("Ч").at(0);
    en2ruConvertArray[50][0] = trUtf8("c").at(0); en2ruConvertArray[50][1] = trUtf8("с").at(0);
    en2ruConvertArray[51][0] = trUtf8("C").at(0); en2ruConvertArray[51][1] = trUtf8("С").at(0);
    en2ruConvertArray[52][0] = trUtf8("v").at(0); en2ruConvertArray[52][1] = trUtf8("м").at(0);
    en2ruConvertArray[53][0] = trUtf8("V").at(0); en2ruConvertArray[53][1] = trUtf8("М").at(0);
    en2ruConvertArray[54][0] = trUtf8("b").at(0); en2ruConvertArray[54][1] = trUtf8("и").at(0);
    en2ruConvertArray[55][0] = trUtf8("B").at(0); en2ruConvertArray[55][1] = trUtf8("И").at(0);
    en2ruConvertArray[56][0] = trUtf8("n").at(0); en2ruConvertArray[56][1] = trUtf8("т").at(0);
    en2ruConvertArray[57][0] = trUtf8("N").at(0); en2ruConvertArray[57][1] = trUtf8("Т").at(0);
    en2ruConvertArray[58][0] = trUtf8("m").at(0); en2ruConvertArray[58][1] = trUtf8("ь").at(0);
    en2ruConvertArray[59][0] = trUtf8("M").at(0); en2ruConvertArray[59][1] = trUtf8("Ь").at(0);
    en2ruConvertArray[60][0] = trUtf8("<").at(0); en2ruConvertArray[60][1] = trUtf8("Б").at(0);
    en2ruConvertArray[61][0] = trUtf8(">").at(0); en2ruConvertArray[61][1] = trUtf8("Ю").at(0);
    en2ruConvertArray[62][0] = trUtf8("`").at(0); en2ruConvertArray[62][1] = trUtf8("ё").at(0);
    en2ruConvertArray[63][0] = trUtf8("~").at(0); en2ruConvertArray[63][1] = trUtf8("Ё").at(0);

    en2ruConvertArray[64][0] = trUtf8(",").at(0); en2ruConvertArray[64][1] = trUtf8("б").at(0);
    en2ruConvertArray[65][0] = trUtf8(".").at(0); en2ruConvertArray[65][1] = trUtf8("ю").at(0);

    en2ruConvertArray[66][0] = trUtf8("/").at(0); en2ruConvertArray[66][1] = trUtf8(".").at(0);
    en2ruConvertArray[67][0] = trUtf8("?").at(0); en2ruConvertArray[67][1] = trUtf8(",").at(0);

    en2ruConvertArray[68][0] = trUtf8(" ").at(0); en2ruConvertArray[68][1] = trUtf8(" ").at(0);
}

void MainWindow::StringChecking(QString strForChecking)
{
    bool ExistEnCharacters = false;
    bool ExistRuCharacters = false;

    for (int a1 = 0; a1 < strForChecking.length(); a1++)
    {
        for (int b1 = 0; b1 < 63; b1++)
        {
            if (strForChecking[a1] == en2ruConvertArray[b1][0])
            {
                ExistEnCharacters = true;
                break;
            }
        }
        for (int b1 = 0; b1 < 65; b1++)
        {
            if (strForChecking[a1] == en2ruConvertArray[b1][1])
            {
                ExistRuCharacters = true;
                break;
            }
        }
    }

    if (ExistEnCharacters == true && ExistRuCharacters == true)
    {
        currentLayoutInString = Unknown;
    }
    else if (ExistRuCharacters == true)
    {
        currentLayoutInString = Russian;
        //MessageBox.Show("Russian");
    }
    else if (ExistEnCharacters == true)
    {
        currentLayoutInString = English;
        //MessageBox.Show("English");
    }
    else
    {
        currentLayoutInString = EmptyString;
    }
}

QString MainWindow::En2Ru(QString str4convert)
{
    QString enStr = str4convert;
    QString ruStr = QString();

    QChar en_letter, ru_letter;

    bool keyboardQWERTYsymbol = false;

    for (int i = 0; i < enStr.length(); ++i)
    {
        for (int a2 = 0; a2 < 68; ++a2)
        {
            if (en2ruConvertArray[a2][0] == enStr[i])
            {
                en_letter = en2ruConvertArray[a2][0];
                ru_letter = en2ruConvertArray[a2][1];

                ruStr += QString(ru_letter);

                keyboardQWERTYsymbol = true;

                break;
            }
        }

        if (!keyboardQWERTYsymbol)
        {
            ru_letter = enStr[i];
            ruStr += QString(ru_letter);
        }
        else
        {
            keyboardQWERTYsymbol = false;
        }
    }

    return ruStr;
}

QString MainWindow::Ru2En(QString str4convert)
{
    QString enStr = QString();
    QString ruStr = str4convert;

    QChar en_letter, ru_letter;

    bool keyboardQWERTYsymbol = false;

    for (int i = 0; i < ruStr.length(); ++i)
    {
        for (int a2 = 0; a2 < 68; ++a2)
        {
            if (en2ruConvertArray[a2][1] == ruStr[i])
            {
                en_letter = en2ruConvertArray[a2][0];
                ru_letter = en2ruConvertArray[a2][1];

                enStr += QString(en_letter);

                keyboardQWERTYsymbol = true;

                break;
            }
        }

        if (!keyboardQWERTYsymbol)
        {
            en_letter = ruStr[i];
            enStr += QString(en_letter);
        }
        else
        {
            keyboardQWERTYsymbol = false;
        }
    }

    return enStr;
}

void MainWindow::on_pushButton_clicked()
{
    QString strForCheck = ui->lineEdit->text();

    StringChecking(strForCheck);

    if (currentLayoutInString == Unknown)
    {
        //MessageBox.Show("В строке присутствуют символы обеих раскладок клавиатуры",
        //    "Неверная строка");
        QMessageBox::critical(this,
                              trUtf8("Неверная строка"),
                              trUtf8("В строке присутствуют символы обеих раскладок клавиатуры"));
    }
    else
    {
        if (currentLayoutInString == English)
        {
            //En2Ru();
            //this.txt_StringForConversion.Text = StrForCheck;

            ui->lineEdit->setText(En2Ru(strForCheck));
        }
        else if (currentLayoutInString == Russian)
        {
            //Ru2En();
            //this.txt_StringForConversion.Text = StrForCheck;

            ui->lineEdit->setText(Ru2En(strForCheck));
        }
        //this.txt_StringForConversion.Select();
        //this.txt_StringForConversion.Copy();

        ui->lineEdit->selectAll();
        ui->lineEdit->copy();
    }
}

void MainWindow::changeEvent(QEvent *evt)
{
    if (evt->type() == QEvent::ActivationChange)
    {
        if (this->isEnabled())
        {
            ui->lineEdit->clear();
            ui->lineEdit->paste();
        }
    }

    evt->accept();
}
