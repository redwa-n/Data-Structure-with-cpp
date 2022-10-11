#include <iostream>
using namespace std;

class Room
{
   private:
        double length;
        double breadth;
        double height;

   public:
       void setLength(double len)
           {
               length = len;
           }
       void setBreadth(int brth)
           {
               breadth = brth;
           }
        void setHeight(int hgt)
           {
               height = hgt;
           }
        double getLength()
           {
               return length;
           }
        double getBreadth()
           {
               return breadth;
           }
        double getHeight()
           {
               return height;
           }

        void getData(double len, double brth, double hgt)
        {
            length = len;
            breadth = brth;
            height = hgt;
        }

        void ShowInfo()
        {
            cout << "length = " << length << endl;
            cout << "breadth = " << breadth << endl;
            cout << "height = " << height << endl;
        }

        double calculateArea()
        {
            return length * breadth;
        }

        double calculateVolume()
        {
            return length * breadth * height;
        }
};

int main()
{
    Room R1;

    R1.setLength(42.5);
    R1.setBreadth(30.8);
    R1.setHeight(19.2);

    cout << "length = " << R1.getLength() << endl;
    cout << "breadth = " << R1.getBreadth() << endl;
    cout << "height = " << R1.getHeight() << endl;
    /**
    R1.getData(42.5, 30.8, 19.2);
    R1.ShowInfo();
    **/
    cout << "Area of Room =  " << R1.calculateArea() << endl;
    cout << "Volume of Room =  " << R1.calculateVolume() << endl;

    return 0;
}
