#ifndef STARTSCREEN_H
#define STARTSCREEN_H

#include <QMainWindow>

namespace Ui {
class StartScreen;
}

class StartScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit StartScreen(QWidget *parent = 0);
    ~StartScreen();

private:
    Ui::StartScreen *ui;
};

#endif // STARTSCREEN_H
