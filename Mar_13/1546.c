#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float N, max_num = 0, total = 0, temp_N;
    int idx = 0;
    float *score;

    scanf("%f", &N);

    temp_N = N;
    score = (float *)malloc(sizeof(float) * N);

    while (N--)
    {
        scanf("%f", &score[idx]);
        if (max_num < score[idx])
            max_num = score[idx];
        idx++;
    }

    while (idx--)
    {
        score[idx] = score[idx] / max_num * 100;
        total += score[idx];
    }

    printf("%.4f\n", (total / temp_N));

}