#include <iostream>
#include <string>

class Shape
{
public:
    double x()
    {
        return 0;
    }

    void setX(double x)
    {
        return mX = x;
    }

    double y()
    {
        return mY;
    }

    void setY(double y)
    {
       return mY = y;
    }

    virtual std::string name()
    {
        return "Shape";
    }
};
class Circle : public Shape
{
public:
    double radius()
    {
        mRadius = radius;
    }

    void setRadius(double radius)
    {
        mRadius = radius;
    }

    std::string name()
    {
        return "Circle";
    }

private:
    double mRadius;
};

class Rectangle
{

};

void printName(const Shape &s)
{
    std::cout << s.name()
}

using namespace std;

int main(int argc, char *argv[])
{
    Shape s; // Shape
    Circle c; // Circle
    Shape &ref = c; // Shape and if method virtual Circle

    Circle c;
    c.setX(10.0);
    c.setY(10.0);
    c.setRadius(3.0);
}

