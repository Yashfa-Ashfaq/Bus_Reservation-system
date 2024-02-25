#include <iostream>
#include <string>

using namespace std;

class Shape
{
protected:
    int length;
    int width;
    int height;
    public:
    Shape(int length = 10, int width = 20, int height = 30) : length{length}, width{width}, height{height}{

    } 
};

class Rectangle : public Shape{
    public:
int calArea(){
    return (length*width);
}

};

class Circle : public Shape{
    public:
int calArea(){
    int radius = 10;
    return (3.14*radius*radius);
}
};

class Triangle : public Shape{
    public:
int calPerimeter(){
    return (length+width+height);
}

};

int main(){
Shape shape(10,20,30);
Rectangle rec;
cout << "Area of the REctangle: " << rec.calArea() << endl;
Circle cir;
cout << "Area of the Circle: " << cir.calArea() << endl;
Triangle tri;
cout << "Perimeter of the Triangle: " << tri.calPerimeter() << endl;

}
