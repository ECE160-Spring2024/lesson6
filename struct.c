#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main()
{
    struct point pt = {-1, 3};
    printf("%d %d\n", pt.x, pt.y);

    double dist;
    dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);
    printf("dist=%f", dist);

    return 0;
}
