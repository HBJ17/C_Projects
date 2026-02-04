#include <stdio.h>

float volumeCube(float a)
{
    return a * a * a;
}

float volumeCuboid(float l, float b, float h)
{
    return l * b * h;
}

float volumeSphere(float r)
{
    return (4.0 / 3.0) * 3.14 * r * r * r;
}

float volumeCylinder(float r, float h)
{
    return 3.14 * r * r * h;
}

float volumeCone(float r, float h)
{
    return (1.0 / 3.0) * 3.14 * r * r * h;
}

int main()
{
    int choice;
    float a, l, b, h, r;

    printf("Choose the solid to calculate volume:\n");
    printf("1. Cube\n");
    printf("2. Cuboid\n");
    printf("3. Sphere\n");
    printf("4. Cylinder\n");
    printf("5. Cone\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter side of cube: ");
            scanf("%f", &a);
            printf("Volume of Cube = %.2f", volumeCube(a));
            break;

        case 2:
            printf("Enter length, breadth and height: ");
            scanf("%f %f %f", &l, &b, &h);
            printf("Volume of Cuboid = %.2f", volumeCuboid(l, b, h));
            break;

        case 3:
            printf("Enter radius of sphere: ");
            scanf("%f", &r);
            printf("Volume of Sphere = %.2f", volumeSphere(r));
            break;

        case 4:
            printf("Enter radius and height of cylinder: ");
            scanf("%f %f", &r, &h);
            printf("Volume of Cylinder = %.2f", volumeCylinder(r, h));
            break;

        case 5:
            printf("Enter radius and height of cone: ");
            scanf("%f %f", &r, &h);
            printf("Volume of Cone = %.2f", volumeCone(r, h));
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}


