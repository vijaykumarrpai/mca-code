#include <iostream>
#define PI 3.1415

using namespace std;

class Cylinder{
    float area, r;

    public:
        void calc();
};

void Cylinder::calc()
{
    printf("Enter radius of cylinder: \n");
    scanf("%f", &r);

    area = (1.0 / 3.0) * PI * r * r;

    cout << "Area of cylinder: " << area << endl;
}

class Cone{
    float area, r;

    public:
        void calc();
};

void Cone::calc()
{
    printf("Enter radius of cone: \n");
    scanf("%f", &r);

    area = (4.0 / 3.0) * PI * r * r * r;
    cout << "Area of cone: " << area << endl;
}

class Circle{
    float area, r;

    public:
        void calc();
};

void Circle::calc()
{
    printf("Enter radius of circle: \n");
    scanf("%f", &r);

    area = PI * r * r;
    cout << "Area of circle: " << area << endl;
}

int main()
{
    Cylinder cy;
    Cone co;
    Circle ci;

    cy.calc();
    co.calc();
    ci.calc();
}