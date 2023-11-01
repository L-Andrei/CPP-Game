
class Vector2
{
    public:

    double x;
    double y;

    Vector2(double x1, double y1);
    Vector2();
    Vector2 & operator= (Vector2 &v);
    Vector2 & operator+ (Vector2 &v);
    double & operator* (Vector2 &v);
    Vector2 & operator- (Vector2 &v);
    Vector2 produtoEscalar(const Vector2 &v);


};