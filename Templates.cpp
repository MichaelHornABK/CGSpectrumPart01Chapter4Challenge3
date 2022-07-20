template <typename Type>
Type Maximum(Type a, Type b)
{
    if (a > b)
        return a;
    return b;
}

template <typename Type>
class Point
{
public:
    Type x;
    Type y;

    Point(Type x = 0, Type y = 0)
        :x(x)
        , y(y)
    {

    }

    Type getLargerCoordinate()
    {
        if (x > y)
        {
            return x;
        }
        else return y;
    }

    Type getSmallerCoordinate()
    {
        if (x < y)
        {
            return x;
        }
        else return y;
    }
};