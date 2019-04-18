#include <stdio.h>
#include <math.h>
static int test1( int param1, int param2 );
static int test2( int param1, int param2 );
int main( int argc, char **args )
{
    if ( argc == 1 )
    {
        test1( 2, 3 );
        test1( 10, 20 );
        test1( 100, 200 );
    }
    else
    {
        test2( 5, 3 );
        test2( 3, 7);
        test2( 5, 0 );
    }
    return 1;
}
static int test1( int param1, int param2 )
{
    int i = param1 + param2;
    int j = i + i / 2;
    int rcode = j * 4;
    return rcode;
}
static int test2( int param1, int param2 )
{
    int i = 3 * param1;
    int j = i / param2;
    int rcode = j / 4;
    return rcode;
}