# 数学规划中，一维搜索中外推法（搜索区的确定）、黄金分割法（用于搜索区间的试探）和二次插值（利用插值法确定函数的近似函数表达式从而求出极小值点）#
import math
def f(x):

h=float(input("input h\n"))
y1=float(input("input y1\n"))
a1=0;a_2=h;y_2=


'''printf("Input h0,y1\n");
scanf("%lf %lf", & h0, & y1);
a1 = 0, h = h0;
a2 = h, y2 = f(a2);
if (y2 > y1)
{
    h = -h, a3 = a1, y3 = y1;
a1 = a2, y1 = y2, a2 = a3, y2 = y3;
}
a3 = a2 + h, y3 = f(a3);
do
{
    h = 2 * h;
a1 = a2, y1 = y2, a2 = a3, y2 = y3;
a3 = a2 + h, y3 = f(a3);
}while (y3 < y2);
printf("%.2lf,%.2lf,%.2lf,%.2lf,%.2lf,%.2lf\n", a1, a2, a3, y1, y2, y3);

double
a, b, k, e, m, n;

k = 0.618;
printf("Input e\n");
scanf("%lf", & e);
erci(a1, a2, a3, e, y1, y2, y3, h);
if (a3 > a1){
a=a1, b=a3;
}
else a=a3, b=a1;
a1 = b - k * (b - a), y1 = f(a1);
a2 = a + k * (b - a), y2 = f(a2);
do
{
if (y1 >= y2)
{
    a = a1, a1 = a2, y1 = y2;
a2 = a + k * (b - a), y2 = f(a2);
}
else {
    b = a2, a2 = a1, y2 = y1;
a1 = b - k * (b - a), y1 = f(a1);
}
m = fabs((b - a) / b), n = fabs((y2 - y1) / y2);
}while (m >= e & n >= e);
printf("a*=%lf,y=%lf", (a + b) / 2, f((a + b) / 2));
return 0;
}
double
f(double
x)
{
double
y;
y = sin(x);
return y;
}
double
erci(double
a1, double
a2, double
a3, double
e, double
y1, double
y2, double
y3, double
h)
{
double
c1, c2, ap, yp, a0, y0;
c1 = (y3 - y1) / (a3 - a1), c2 = ((y2 - y1) / (a2 - a1) - c1) / (a2 - a3);
ap = 0.5 * (a1 + a3 - c1 / c2);
yp = f(ap);
while (fabs((y2 - yp) / y2) >= e){
if ((ap-a2) * h > 0){
if (y2 >= yp) a1=a2, y1=y2, a2=ap, y2=yp;
else a3=ap, y3=yp;
}
else {
if (y2 >= yp) a1=a2, y1=y2, a2=ap, y2=yp;
else a1=ap, y1=yp;
}
c1=(y3-y1) / (a3-a1), c2=((y2-y1) / (a2-a1)-c1) / (a2-a3);
ap=0.5 * (a1+a3-c1 / c2);
yp=f(ap);
}
if (y2 >= yp) a0=a2, y0=y2;
else a0=ap, y0=yp;
printf("a*=%lf,y*=%lf\n", a0, y0);
return 0;
}