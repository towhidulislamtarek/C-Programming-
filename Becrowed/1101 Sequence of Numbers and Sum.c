#include <stdio.h>

int main()
{

    int M, N;
    int i;
    int temp, x = 0;

    while (1)
    {

        scanf("%d%d", &M, &N);
        if (M <= 0)
            break;
        if (N <= 0)
            break;

        if (M > N)
        {
            temp = M;
            M = N;
            N = temp;
        }
        for (i = M; i <= N; i++)
        {
            printf("%d ", i);
            x += i;
        }
        printf("Sum=%d\n", x);
    }
    return 0;
}