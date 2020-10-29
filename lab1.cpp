#include <cmath>
#include <iostream>
class informer
{
public:
    informer() { std::cout << "informer-zaczynamy! \n"; }
    ~informer() { std::cout << "informer-destrukcjaaa! \n"; }
};
class Wektor2D
{
public:
    // informer inf;
    Wektor2D() {}
    Wektor2D(double xx, double yy)
    {
        x = xx;
        y = yy;
    }
    ~Wektor2D() { std::cout << "Zniszczone! \n"; }

    void print()
    {
        std::cout << "[" << x << "; " << y << "]"
                  << "\n";
    }
    double norm() { return std::sqrt(x * x + y * y); }
    void   setX(double xx) { x = xx; }
    void   setY(double xx) { y = xx; }
    double getX() { return x; }
    double getY() { return y; }

private:
    double x, y;
};
Wektor2D operator+(Wektor2D A,Wektor2D B)
{

    return Wektor2D(A.getX() + B.getX(), A.getY() + B.getY());
}
std::ostream& operator<<(std::ostream& ostr, Wektor2D& Wa)
{
    ostr << "[" << Wa.getX() << ", " << Wa.getY() << "]";
    return ostr;
}
int main()
{
    /*
        class Human
        {
        public:
            int    age;
            double height;
        };

        Human Alice;
        Alice.age    = 22;
        Alice.height = 155.6;

        std::cout << Alice.age << "   " << Alice.height;
        */

    Wektor2D W(3, 4), V(2, 2), H;
    // W.setX(3);
    // W.setY(4);
    // W.x = 4;
    // W.y = 4;

    H = W + V;
    std::cout << W << V << H << "\n";

    // std::cout << H.norm() << "\n";
}
