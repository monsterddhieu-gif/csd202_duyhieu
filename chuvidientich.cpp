#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
        double length;
        double width;
    public:
        Rectangle(){}
        void getInformation(){
            cin >> length;
            cin >> width;
        }
        double getArea(){
            return length*width;
        }
        double getPerimeter(){
            return (length+width)*2;
        }
        void display(){
            cout << "Area: " << this->getArea() << endl;
            cout << "Perimeter: " << this->getPerimeter() << endl;
        }
};

int main(){
    Rectangle s1;
    s1.getInformation();
    s1.display();
    return 0;
}