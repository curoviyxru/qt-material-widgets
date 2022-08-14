#ifndef QTMATERIALICONBUTTON_H
#define QTMATERIALICONBUTTON_H

#include <QAbstractButton>

class QtMaterialIconButtonPrivate;

class QtMaterialIconButton : public QAbstractButton
{
    Q_OBJECT

public:
    explicit QtMaterialIconButton(const QIcon &icon, QWidget *parent = 0);
    ~QtMaterialIconButton();

    QSize sizeHint() const;

    void setUseThemeColors(bool value);
    bool useThemeColors() const;

    void setColor(const QColor &color);
    QColor color() const;

    void setDisabledColor(const QColor &color);
    QColor disabledColor() const;

protected:
    QtMaterialIconButton(QtMaterialIconButtonPrivate &d, QWidget *parent = 0);

    bool event(QEvent *event);
    bool eventFilter(QObject *obj, QEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);

    const QScopedPointer<QtMaterialIconButtonPrivate> d_ptr;

private:
    Q_DISABLE_COPY(QtMaterialIconButton)
    Q_DECLARE_PRIVATE(QtMaterialIconButton)
};

#endif // QTMATERIALICONBUTTON_H
