#include "radioloadingindicator.h"

#include <QPainter>

RadioLoadingIndicator::RadioLoadingIndicator(QWidget *parent)
  : QWidget(parent)
{
  ui_.setupUi(this);
}

void RadioLoadingIndicator::paintEvent(QPaintEvent*) {
  QPainter p(this);

  p.setRenderHint(QPainter::Antialiasing, true);
  p.setOpacity(0.15);
  p.setBrush(palette().color(QPalette::Text));
  p.drawRoundedRect(rect(), 10, 10);
}
