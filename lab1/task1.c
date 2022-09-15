#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Rus");
	float h, r,ppp,pbp,v;
    const double pi = 3.14;
    printf("enter the height:");
    scanf_s("%f", &h);
    printf("enter the radius:");
    scanf_s("%f", &r);
    pbp = pi * 2 * r * h;
    ppp = pbp + 2 * pi * r * r;
    v = pi * r * r * h;
    printf("площадь боковой поверхности цилиндра: %.2f\n",pbp);
    printf("площадь полной поверхности цилиндра: %.2f\n", ppp);
    printf("объем цилиндра: %.2f\n", v);
    return 0;
}
