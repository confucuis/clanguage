#include <demo.h>
#include <types.h>

int main()
{

    hello();
    printf("hello world\n");


    i8 num = 12;
    u8 max = 250;
    f32 heigh = 3.2;
    f64 width = 4.8;
    string s = "hello";
    printf("num = %d, max = %d\n", num, max);
    printf("heigh = %f, width = %f\n", heigh, width);
    printf("s = %s\n", s);

    return 0;
}

// gcc -I./ *.c 
