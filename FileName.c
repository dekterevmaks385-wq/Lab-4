#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void zadacha51()
{
    int n, i;
    long long sum;

    do
    {
        printf("Enter n (n >= 1): ");
        scanf("%d", &n);
    } while (n < 1);

    sum = 0;
    for (i = n; i <= 2 * n; i++)
    {
        sum = sum + (long long)i * i;
    }

    printf("Sum = %lld\n", sum);
}

void zadacha58()
{
    double x = 2, p, sum;
    int k;

    sum = 0;
    p = x;
    for (k = 1; k <= 11; k = k + 2)
    {
        sum = sum + p / k;
        p = p * x * x;
    }

    printf("S = %f\n", sum);
}

void zadacha77()
{
    double L = 4.5, d = 3.0, angle;
    double PI = 3.14159265358979;

    printf("d (m)   angle (deg)\n");
    while (d <= L)
    {
        angle = acos(d / L) * 180 / PI;
        printf("%.1f     %.2f\n", d, angle);
        d = d + 0.2;
    }
    printf("4.5     0.00\n");
}

void zadacha114()
{
    int C, count;

    do
    {
        printf("Enter C (C >= 1): ");
        scanf("%d", &C);
    } while (C < 1);

    count = 0;
    while (C >= 10000) { C = C - 10000; count++; }
    printf("10000 uah: %d\n", count);

    count = 0;
    while (C >= 1000) { C = C - 1000; count++; }
    printf("1000 uah: %d\n", count);

    count = 0;
    while (C >= 500) { C = C - 500; count++; }
    printf("500 uah: %d\n", count);

    count = 0;
    while (C >= 100) { C = C - 100; count++; }
    printf("100 uah: %d\n", count);

    count = 0;
    while (C >= 50) { C = C - 50; count++; }
    printf("50 uah: %d\n", count);

    count = 0;
    while (C >= 10) { C = C - 10; count++; }
    printf("10 uah: %d\n", count);

    count = 0;
    while (C >= 5) { C = C - 5; count++; }
    printf("5 uah: %d\n", count);

    count = 0;
    while (C >= 1) { C = C - 1; count++; }
    printf("1 uah: %d\n", count);
}

void zadacha175()
{
    long long a, p;

    printf("Enter numbers, 0 = end:\n");

    p = 1;
    scanf("%lld", &a);
    while (a != 0)
    {
        p = p * a;
        printf("%lld ", p);
        scanf("%lld", &a);
    }
    printf("0\n");
}

void zadacha266()
{
    int n, temp, first, digit, count;

    do
    {
        printf("Enter n (n >= 1): ");
        scanf("%d", &n);
    } while (n < 1);

    temp = n;
    while (temp >= 10)
    {
        temp = temp / 10;
    }
    first = temp;

    count = 0;
    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;
        if (digit == first)
        {
            count++;
        }
        temp = temp / 10;
    }

    printf("First digit = %d, it occurs %d time(s)\n", first, count);
}

void zadacha113()
{
    int k, m, n, a, b, c;

    do
    {
        printf("Enter k (k >= 3): ");
        scanf("%d", &k);
    } while (k < 3);

    printf("  m   n     a     b     c\n");
    for (m = 2; m < k; m++)
    {
        for (n = 2; n < m; n++)
        {
            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;
            printf("%3d %3d %5d %5d %5d\n", m, n, a, b, c);
        }
    }
}

void zadacha2()
{
    int n, i;

    do
    {
        printf("Enter n (n >= 1): ");
        scanf("%d", &n);
    } while (n < 1);

    printf("Divisors of %d: ", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void zadacha219()
{
    double x, eps, prev, cur;
    int n;
    int maxSteps = 50;

    printf("Enter x (x != 0): ");
    scanf("%lf", &x);

    do
    {
        printf("Enter eps (eps > 0): ");
        scanf("%lf", &eps);
    } while (eps <= 0);

    n = 1;
    cur = x;
    printf("a%d = %g\n", n, cur);

    do
    {
        prev = cur;
        cur = x / (2 * prev * prev);
        n++;
        printf("a%d = %g\n", n, cur);
    } while (fabs(cur - prev) >= eps && n < maxSteps);

    if (fabs(cur - prev) < eps)
    {
        printf("Found: n = %d\n", n);
    }
    else
    {
        printf("Not found in %d steps\n", maxSteps);
    }
}

void zadacha210()
{
    double eps, prev, cur;
    int n;

    do
    {
        printf("Enter eps (eps > 0): ");
        scanf("%lf", &eps);
    } while (eps <= 0);

    n = 1;
    cur = 0;
    printf("a%d = %.8f\n", n, cur);

    do
    {
        prev = cur;
        cur = atan(prev) + 1;
        n++;
        printf("a%d = %.8f\n", n, cur);
    } while (fabs(cur - prev) >= eps);

    printf("n = %d\n", n);
}

int main()
{
    int choice;

    do
    {
        printf("\n========== Lab 4 ==========\n");
        printf(" 1 - task 51\n");
        printf(" 2 - task 58\n");
        printf(" 3 - task 77\n");
        printf(" 4 - task 114\n");
        printf(" 5 - task 175\n");
        printf(" 6 - task 266\n");
        printf(" 7 - task 113\n");
        printf(" 8 - task 2\n");
        printf(" 9 - task 219\n");
        printf("10 - task 210\n");
        printf(" 0 - exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:  zadacha51();  break;
        case 2:  zadacha58();  break;
        case 3:  zadacha77();  break;
        case 4:  zadacha114(); break;
        case 5:  zadacha175(); break;
        case 6:  zadacha266(); break;
        case 7:  zadacha113(); break;
        case 8:  zadacha2();   break;
        case 9:  zadacha219(); break;
        case 10: zadacha210(); break;
        case 0:  printf("Bye!\n"); break;
        default: printf("Wrong choice\n");
        }
    } while (choice != 0);

    return 0;
}