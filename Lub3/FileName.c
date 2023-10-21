#include <stdio.h>
#include <locale.h>
#include <math.h>
main() {
	task1();
}
task1() {
	setlocale(LC_ALL, "RUS");
	int a, b,c,p,s;
	printf("Введите значение первой стороны\n");
	scanf("%i",&a);
	printf("Введите значение второй стороны\n");
	scanf("%i", &b);
	c = sqrt(a * a + b * b);
	p = a + b + c;
	s = (a * b)/2;
	printf("Третья сторона равна: %i \nПериментр равен:%i\n Площадь равна:%i ",c,p,s);
}
//a=4 b=3 c=5 p=12 s=6