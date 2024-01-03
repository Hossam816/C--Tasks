#include <iostream>
#include <graphics.h>

using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point()
    {
        x=y=0;
    };
    Point(int num)
    {
        x=y=num;
    };
    Point(int X, int Y)
    {
        x=X;
        y=Y;
    };

    /*Setters & Getters*/
    int getX(){return x;};
    void setX(int X){x=X;};
    int getY(){return y;};
    void setY(int Y){y =Y;};

    void Draw() {
        cout<<"X= "<<x<<"  "<<"Y= "<<y<<endl;
    }
};

/*Class line*/

class Line {
private:
    Point startPoint; //startPoint is object came from Point class
    Point endPoint;//startPoint is object came from Point class
public:

    //set Default Constructor
    Line():startPoint(),endPoint(){}
    //set Constructor with set and get all points
//    Line(int x1, int y1,int x2,int y2){
//
//        startPoint.setX(x1);
//        startPoint.setY(y1);
//        endPoint.setX(x2);
//        endPoint.setX(y2);
//    }

    //set Constructor by chain with point constructor

    Line(int x1, int y1,int x2,int y2):startPoint(x1,y1), endPoint(x2,y2){}

    //set Constructor that take two point i can't do chain here because ther is no constructor take point object as a parameter

    Line(Point point1, Point point2)
    {
        startPoint.setX(point1.getX());
        startPoint.setY(point1.getY());
        endPoint.setX(point2.getX());
        endPoint.setY(point2.getY());
    }


    //Draw line direct in draw function
    void Draw() {
        line(startPoint.getX(), startPoint.getY(), endPoint.getX(),endPoint.getY());
    }
};

class Circle{
private:
    Point centerPoint;
    int Radius;
public:
    //Default Constructor
    Circle(){Radius=0;};

    //set Constructor with set and get all points
    Circle(int x, int y, int r){
        centerPoint.setX(x);
        centerPoint.setY(y);
        Radius = r;
    }
    //set circle values with constrcutor that take point object as para and set all point de l'circle
    Circle(Point center, int r)
    {
        centerPoint.setX(center.getX());
        centerPoint.setY(center.getY());
        Radius=r;
    }

    //set and get radius
    int getRadius(){return Radius;}
    void getRadius(int r){Radius = r;}

    //Draw Circle

    void Draw(){
        circle(centerPoint.getX(),centerPoint.getY(),Radius);
    }

};


int main() {

    initwindow(750, 620, "test");

    Point point1(10,20);
    point1.Draw();

    Point point2(100,200);
    point2.Draw();

    Line line(point1,point2);
    line.Draw();

    Circle cir(point2, 35);
    cir.Draw();

    Circle cir2(400,500,69);
    cir2.Draw();

    rectangle(400,600,400,600);



    getch();
    closegraph();


    return 0;
}
