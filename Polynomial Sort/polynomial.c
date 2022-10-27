#include <stdio.h>
struct poly
{
    int expo;
    int coeff;
} p1[10], p2[10], p3[20];

void read(struct poly a[10], int n)
{
    int i;
    printf("Enter the coefficent and exponents of each terms is decreasing order of exponents \n");
    for (i = 0; i < n; i++)
    {
        printf("Coefficent and exponenet of term %d \n", i + 1);
        scanf("%d%d", &a[i].coeff, &a[i].expo);
    }
}

void display(struct poly p3[], int k)
{
    int i;
    for (i = 0; i < k; i++)
    {
        printf("%dx^%d+ ", p3[i].coeff, p3[i].expo);
    }
    printf("%dx^%d\n", p3[i].coeff, p3[i].expo);
}

void add(struct poly p1[10], struct poly p2[10], struct poly p3[20], int n1, int n2)
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (p1[i].expo == p2[j].expo)
        {
            p3[k].coeff = p1[i].coeff + p2[j].coeff;
            p3[k].expo = p1[i].expo;
            i++;
            j++;
            k++;
        }
        else if (p1[i].expo > p2[j].expo)
        {
            p3[k].coeff = p1[i].coeff;
            p3[k].expo = p1[i].expo;
            i++;
            k++;
        }
        else
        {
            p3[k].coeff = p1[j].coeff;
            p3[k].expo = p1[j].expo;
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        p3[k].coeff = p1[i].coeff;
        p3[k].expo = p1[i].expo;
        i++;
        k++;
    }
    while (j < n2)
    {
        p3[k].coeff = p1[j].coeff;
        p3[k].expo = p1[j].expo;
        j++;
        k++;
    }
    printf("The sum of the two polynomials is \n p3= ");
    display(p3, k);
}

void main()
{
    int n1, n2;
    printf("Enter the number of terms in first polynomial: ");
    scanf("%d", &n1);
    read(p1, n1);
    printf("First Polynomial is \n p1 = ");
    display(p1, n1);
    printf("Enter the number of terms of second polynomial: ");
    scanf("%d", &n2);
    read(p2, n2);
    printf("Second Polynomial is \n p2 = ");
    display(p2, n2);
    add(p1, p2, p3, n1, n2);
}
