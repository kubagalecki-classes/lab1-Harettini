#include <cmath>
#include <iostream>
/*class informer
{
public:
    informer() { std::cout << "informer-zaczynamy! \n"; }
    ~informer() { std::cout << "informer-destrukcjaaa! \n"; }
};
class Wektor2D
{
private:
    static int num_wek;
    double     x, y;

public:
    // informer inf;
    Wektor2D() { num_wek++; }
    Wektor2D(double xx, double yy)
    {
        x = xx;
        y = yy;
        num_wek++;
    }
    ~Wektor2D()
    {

        num_wek--;
        populacja();
    }

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
    void static populacja() { std::cout << num_wek << "\n"; }
};
Wektor2D operator+(Wektor2D& A, Wektor2D& B)
{

    return Wektor2D(A.getX() + B.getX(), A.getY() + B.getY());
}
std::ostream& operator<<(std::ostream& ostr, Wektor2D& Wa)
{
    ostr << "[" << Wa.getX() << ", " << Wa.getY() << "]";
    return ostr;
}
int Wektor2D::num_wek = 0;*/
class Wektor2D
{
private:
    double x, y;

public:
    Wektor2D()
    {
        x = 0;
        y = 0;
    }
    Wektor2D(double xx, double yy)
    {
        x = xx;
        y = yy;
    }

    void print()
    {
        std::cout << "[" << x << "; " << y << "]"
                  << "\n";
    }
    void            setX(double xx) { x = xx; }
    void            setY(double xx) { y = xx; }
    double          getX() { return x; }
    double          getY() { return y; }
    friend Wektor2D operator+(Wektor2D& A, Wektor2D& B)
    {
        return Wektor2D(A.getX() + B.getX(), A.getY() + B.getY());
    }
    friend double operator*(Wektor2D& A, Wektor2D& B)
    {
        return (A.getX() * B.getX() + A.getY() * B.getY());
    }
};

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

    // Wektor2D W(3, 4), V(2, 2), H;
    // W.setX(3);
    // W.setY(4);
    // W.x = 4;
    // W.y = 4;
    // Wektor2D::populacja();
    // H = W + V;
    // std::cout << W << V << H << "\n";
    Wektor2D v1;           // Konstruktor domyślny, wektor o wsp. [0, 0]
    v1.setX(1.);           // setter
    v1.setY(1.);           // setter
    double x1 = v1.getX(); // getter
    double y1 = v1.getY(); // getter

    Wektor2D v2{2., 2.}; // Konstruktor nadający współrzędne

    Wektor2D sum = v1 + v2; // dodawanie wektorów

    double prod = v1 * v2; // iloczyn skalarny

    std::cout << x1 << "   " << y1 << "   " << sum.getX() << "   " << sum.getY() << "   " << prod;
    // std::cout << H.norm() << "\n";
}
