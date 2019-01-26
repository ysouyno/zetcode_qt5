#include <iostream>
#include "brick.h"

Brick::Brick(int x, int y)
{
  image.load("brick.png");
  destroyed = false;
  rect = image.rect();
  rect.translate(x, y);
}

Brick::~Brick()
{
  std::cout << ("Brick deleted") << std::endl;
}

QRect Brick::getRect()
{
  return rect;
}

void Brick::setRect(QRect rect)
{
  this->rect = rect;
}

QImage &Brick::getImage()
{
  return image;
}

bool Brick::isDestroyed()
{
  return destroyed;
}

void Brick::setDestroyed(bool destroyed)
{
  this->destroyed = destroyed;
}
