#include <stdio.h>

int main(void)
{
    double position[] =
    {
        0.0,
        1.2,
        2.5,
        3.9,
        5.4,
        7.0
    };

    int n =
        sizeof(position) /
        sizeof(position[0]);

    const double dt = 0.5;

    for (int i = 0; i < n - 1; i++)
    {
        double velocity =
            (position[i + 1] - position[i])
            / dt;

        printf("v[%d] = %.3f m/s\n",
               i, velocity);
    }

    return 0;
}