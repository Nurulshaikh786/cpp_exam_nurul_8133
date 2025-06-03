
// Create a base class Shape. Derive two classes:
// - Circle – to calculate area of a circle
// - Rectangle – to calculate area of a rectangle
// Use hierarchical inheritance and call appropriate area functions.
#include <iostream>
#define pie 3.14
using namespace std;
class Shape
{
    protected:
        float radius;
        float length;
        float breadth;
    public:
        void setCircle()
        {
            cout << "Enter the radius of circle: " ;
            cin >> radius;

        }
        void setRectangle()
        {
            cout << "Enter the length of rectangle: ";
            cin >> length;
            cout << "Enter the breadth of rectangle: " ;
            cin >> breadth;
        }


};
class Circle : public Shape{

    public:
    void area_circle()
    {
        float area = pie * radius * radius;
        cout << "Area of circle is : " << area << endl;
    }
};
class Rectangle : public Shape{
    public:
        void area_rectangle()
        {
            float area = length * breadth;
            cout << "Area of rectangle is : " << area << endl;
        }
};
int main()
{
    cout<<endl<<"--------- Area of circle -----------"<<endl;
    Circle area1;
    area1.setCircle();
    area1.area_circle();
    cout<<"------------------------------------"<<endl;

    cout<<endl<<"--------- Area of Rectangle -----------"<<endl;
    Rectangle area2;
    area2.setRectangle();
    area2.area_rectangle();
    cout<<"---------------------------------------"<<endl;
    return 0;
}

