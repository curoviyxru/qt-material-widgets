#ifndef QTMATERIALDRAWER_H
#define QTMATERIALDRAWER_H

#include "lib/qtmaterialoverlaywidget.h"

class QtMaterialDrawerPrivate;
class QtMaterialDrawerStateMachine;

class QtMaterialDrawer : public QtMaterialOverlayWidget
{
    Q_OBJECT

public:
    explicit QtMaterialDrawer(QWidget *parent = 0);
    ~QtMaterialDrawer();

    void setDrawerWidth(int width);
    int drawerWidth() const;

    void setDrawerLayout(QLayout *layout);
    QLayout *drawerLayout() const;

    void setClickOutsideToClose(bool state);
    bool clickOutsideToClose() const;

    void setAutoRaise(bool state);
    bool autoRaise() const;

    void setOverlayMode(bool value);
    bool overlayMode() const;

    bool isClosed() const;

public slots:
    void openDrawer();
    void closeDrawer();

protected:
    bool event(QEvent *event);
    bool eventFilter(QObject *obj, QEvent *event);
    void paintEvent(QPaintEvent *event);

    const QScopedPointer<QtMaterialDrawerPrivate> d_ptr;

private:
    Q_DISABLE_COPY(QtMaterialDrawer)
    Q_DECLARE_PRIVATE(QtMaterialDrawer)
};

#endif // QTMATERIALDRAWER_H
