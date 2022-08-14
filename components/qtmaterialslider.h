#ifndef QTMATERIALSLIDER_H
#define QTMATERIALSLIDER_H

#include <QAbstractSlider>
#include <QScopedPointer>

#define QT_MATERIAL_SLIDER_MARGIN 30

class QtMaterialSliderPrivate;

class QtMaterialSlider : public QAbstractSlider
{
    Q_OBJECT

    Q_PROPERTY(QColor thumbColor WRITE setThumbColor READ thumbColor)
    Q_PROPERTY(QColor trackColor WRITE setTrackColor READ trackColor)
    Q_PROPERTY(QColor disabledColor WRITE setDisabledColor READ disabledColor)

public:
    explicit QtMaterialSlider(QWidget *parent = 0);
    ~QtMaterialSlider();

    void setUseThemeColors(bool value);
    bool useThemeColors() const;

    void setThumbColor(const QColor &color);
    QColor thumbColor() const;

    void setTrackColor(const QColor &color);
    QColor trackColor() const;

    void setDisabledColor(const QColor &color);
    QColor disabledColor() const;

    void setPageStepMode(bool pageStep);
    bool pageStepMode() const;

    QSize minimumSizeHint() const;

    void setInvertedAppearance(bool value);

protected:
    void sliderChange(SliderChange change);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void leaveEvent(QEvent *event);

    void updateThumbOffset();

    const QScopedPointer<QtMaterialSliderPrivate> d_ptr;

private:
    Q_DISABLE_COPY(QtMaterialSlider)
    Q_DECLARE_PRIVATE(QtMaterialSlider)
};

#endif // QTMATERIALSLIDER_H
