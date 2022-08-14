#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedLayout>
#include <QListWidget>

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QStackedLayout *stack;
    QListWidget *list;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void currentItemChanged();
};

#endif // MAINWINDOW_H
