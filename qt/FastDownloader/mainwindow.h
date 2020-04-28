#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);


private slots:
    void on_closeBtn_clicked();
    void on_minBtn_clicked();

    void on_newTaskBtn_clicked();

private:
    Ui::MainWindow *ui;
    // move window
    bool moveWindow;
    //press x,y
    int pressX, pressY;
};
#endif // MAINWINDOW_H
