#include <stdio.h>
void read(int a[10][10], int r[2]);
void triplet_conversion(int a[10][10], int s[10][3], int m, int n);
void addition(int s1[10][3], int s2[10][3], int c[10][3]);
void display(int a[10][3]);
void read(int a[10][10], int r[2])
{
    int m, n, i, j;
    printf("Enter the number of rows and columns of the matrix: \n");
    scanf("%d%d", &m, &n);
    r[0] = m;
    r[1] = n;
    printf("Enter the matrix elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void triplet_conversion(int a[10][10], int s[10][3], int m, int n)
{
    int i, j, k = 1;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                s[k][0] = i;
                s[k][1] = j;
                s[k][2] = a[i][j];
                k++;
            }
        }
    }
    s[0][0] = m;
    s[0][1] = n;
    s[0][2] = k - 1;
}
void addition(int s1[10][3], int s2[10][3], int c[10][3])
{
    int a = s1[0][2], b = s2[0][2];
    int i = 1, j = 1, k = 1;
    while (i <= a && j <= b)
    {
        if (s1[i][0] < s2[j][0])
        {
            c[k][0] = s1[i][0];
            c[k][1] = s1[i][1];
            c[k][2] = s1[i][2];
            i++;
            k++;
        }
        else if (s1[i][0] > s2[j][0])
        {
            c[k][0] = s2[j][0];
            c[k][1] = s2[j][1];
            c[k][2] = s2[j][2];
            j++;
            k++;
        }
        else if (s1[i][1] < s2[j][1])
        {
            c[k][0] = s1[i][0];
            c[k][1] = s1[i][1];
            c[k][2] = s1[i][2];
            i++;
            k++;
        }
        else if (s1[i][1] > s2[j][1])
        {
            c[k][0] = s2[j][0];
            c[k][1] = s2[j][1];
            c[k][2] = s2[j][2];
            j++;
            k++;
        }
        else
        {
            c[k][0] = s1[i][0];
            c[k][1] = s1[i][1];
            c[k][2] = s1[i][2] + s2[j][2];
            i++;
            j++;
            k++;
        }
    }
    while (i <= a)
    {
        c[k][0] = s1[i][0];
        c[k][1] = s1[i][1];
        c[k][2] = s1[i][2];
        i++;
        k++;
    }
    while (j <= b)
    {
        c[k][0] = s2[j][0];
        c[k][1] = s2[j][1];
        c[k][2] = s2[j][2];
        j++;
        k++;
    }
    c[0][0] = s1[0][0];
    c[0][1] = s1[0][1];
    c[0][2] = k - 1;
}
void display(int a[10][3])
{
    int m = a[0][2], i, j;
    for (i = 0; i < m + 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    int a[10][10], b[10][10], c[10][3], s1[10][3], s2[10][3], r1[2], r2[2];
    printf("First Matrix \n");
    read(a, r1);
    printf("Second Matrix \n");
    read(b, r2);
    if (r1[0] == r2[0] && r1[1] == r2[1])
    {
        triplet_conversion(a, s1, r1[0], r1[1]);
        triplet_conversion(b, s2, r2[0], r2[1]);
        printf("Triplet forms of first matrix is: \n");
        display(s1);
        printf("Triplet forms of second matrix is: \n");
        display(s2);
        addition(s1, s2, c);
        printf("The sum of the two sparse matrices is: \n");
        display(c);
    }
}