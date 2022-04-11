#include <iostream>

using namespace std; 

class Triangle
{
    public:

        Triangle(int initalsideA, int initalsideB, int initalsideC);
        ~Triangle();
        int Getsides();
        void Setsides(int sideA, int sideB, int sideC);
        void area(int sideA, int sideB, int sideC);
        void perimeter(int sideA, int sideB, int sideC);

    private:
        int trianglesideA;
        int trianglesideB;
        int trianglesideC;

};

Triangle::Triangle(int initalsideA, int initalsideB, int initialsideC)
{
    trianglesideA = initalsideA;
    trianglesideB = initalsideB;
    trianglesideC = initialsideC;
}
~Triangle()
{

}
Getsides()
{
    return trianglesideA, trianglesideB, trianglesideC;
}
Setsides(int sideA, int sideB, int sideC)
{
    trianglesideA = sideA;
    trianglesideB = sideB;
    trianglesideC = sideC;
}
area(int sideA, int sideB, int sideC)
{
    int triangleArea = sideA * sideB * sideC;
    cout << "The area of the triangle is: " << triangleArea;
}
perimeter(int sideA, int sideB, int sideC)
{
    int triangleperimeter = sideA + sideB + sideC;
    cout <<"The perimeter of the triangle is: " << triangleperimeter;
}

int main()
{
    Triangle t(10,5,9);
    t.Setsides(11,12,13);
    cout <<"The sides of the triangle are: " << t.Getsides() << endl;
    cout << t.area() << endl; 
    cout << t.perimeter() << endl;

    return 0;
}