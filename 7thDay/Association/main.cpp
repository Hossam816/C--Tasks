#include <iostream>
#include <graphics.h>


using namespace std;

class Point{ //composition means thaa all classes depends on others
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

/*Class Circle*/

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

//association idea we got two class has relation with each others but the two classes not depends  on others
//here that i'll make pointers that point to evrey class i had made previuse

class Picture{
private:
    Circle *ptrCircle;
    Line *ptrLine;
    int numOfCircls;
    int numOfLines;
public:
    //default constructor
    Picture()
    {
        ptrCircle = NULL;
        ptrLine =NULL;
        numOfCircls = 0;
        numOfLines = 0;
    }

    Picture(int numCircles, int numLines, Circle *ptrC, Line *ptrL)
    {
        numOfCircls = numCircles;
        numOfLines = numLines;
        ptrCircle = ptrC;
        ptrLine = ptrL;
    }

    void DrawCircles(int numCircles, Circle *ptrC){
        numOfCircls = numCircles;
        ptrCircle = ptrC;
    }

    void DrawLines(int numLines, Line *ptrL){
        numOfLines = numLines;
        ptrLine = ptrL;
    }

    void PaintShape() {
        //for-loop looping through pictures and draw it
        for(int i = 0; i<numOfCircls;i++){
            ptrCircle[i].Draw();
        }

        for(int i = 0; i<numOfLines;i++){
            ptrLine[i].Draw();
        }
    }


};

int main() {

    initwindow(750, 620, "test");

    Circle circles[3] = {
        Circle(10,52,30),
        Circle(20,32,30),
        Circle(30,42,30),
    };

    Line lines[3] = {
        Line(10,52,30,60),
        Line(20,32,30,50),
        Line(30,42,30,70),
    };

    Picture p(3,3,circles, lines);
    p.PaintShape();
    //p,DrawLines(num, ptr);

    getch();
    closegraph();

    return 0;
}
