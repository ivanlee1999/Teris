#pragma once
template <typename T>
class Vec2
{
public:
    Vec2() = default;
    Vec2(T x, T y) : x(x), y(y){};
    T getX() const {return x;};
    T getY() const {return y;};
    void setX(T xIn) {x = xIn;};
    void setY(T yIn) {y = yIn;};
public:
    Vec2 operator==(const Vec2& rhs) const{
        return x == rhs.x && y == rhs.y;
    }
    Vec2 operator+(const Vec2& rhs) const{
        return Vec2(x + rhs.x, y + rhs.y);
    }
    Vec2 operator+(const int& rhs) const{
        return Vec2(x + rhs, y + rhs);
    }
    Vec2 operator*(const int& rhs) const{
        return Vec2(x * rhs, y * rhs);
    }
    Vec2 operator-(const Vec2& rhs) const{
        return Vec2(x - rhs.x, y - rhs.y);
    }
    Vec2& operator+=(const Vec2& rhs){
        return *this = *this + rhs;
    }
    Vec2& operator-=(const Vec2& rhs){
        return *this = *this - rhs;
    }

private:
    T x;
    T y;
};

