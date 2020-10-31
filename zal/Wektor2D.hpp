class Wektor2D
{
   private:
    double     x, y;

public:
    Wektor2D() {
x=0;
y=0;

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
    void   setX(double xx) { x = xx; }
    void   setY(double xx) { y = xx; }
    double getX() { return x; }
    double getY() { return y; }
};
Wektor2D operator+(Wektor2D& A, Wektor2D& B)
{
    return Wektor2D(A.getX() + B.getX(), A.getY() + B.getY());
}
double operator*(Wektor2D& A, Wektor2D& B)
{
    return (A.getX() * B.getX() + A.getY() * B.getY());
}

