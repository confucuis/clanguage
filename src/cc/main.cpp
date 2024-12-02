#include <iostream>
#include <main.hpp>

int main()
{
    //std::cout << "hello world" << std::endl;
    std::printf("hello world\n");

    int8  m = -5;
    int16 a = -10;
    int32 b = -20;
    int64 c = -30;

    uint8 n  = 5;
    uint16 d = 10;
    uint32 e = 20;
    uint64 f = 30;

    float32 g = 2.5;
    float64 h = 8.9;

    std::string s = "hello world";

    std::printf("%d\n", m);
    std::printf("%d\n", n);
    std::printf("%d\n", a);
    std::printf("%d\n", b);
    std::printf("%d\n", c);
    std::printf("%d\n", d);
    std::printf("%d\n", e);
    std::printf("%d\n", f);
    std::printf("%f\n", g);
    std::printf("%f\n", h);
    std::printf("%s\n", s.c_str());

    return 0;
}

// + - * / %
// ++ -- 
// += -= *= /= %=
// && || !
// &  |  ^
// ~
// << >>
