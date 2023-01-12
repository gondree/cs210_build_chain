#include <iostream>

struct MyStructType
{
    int x;
    int y;
};

struct foo(struct MyStructType a, struct MyStructType b) {
    struct MyStructType c;
    c.x = a.x;
    c.y = b.y;
    return c;
}

int main()
{
    struct MyStructType a = {0,1}, b = {2,3}, c = foo(a,b);
    std::cout << "Hello " << c.x << " " << c.y << std::endl;
}

