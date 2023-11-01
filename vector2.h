

class Vector2
{
    public:

    double x;
    double y = x = 0;

    Vector2(double x, double y);
    Vector2();
    Vector2 operator+ (Vector2 &v);
    Vector2 operator* (Vector2 &v);
    Vector2 operator- (Vector2 &v);
    Vector2 produtoEscalar(const Vector2 &v);


};