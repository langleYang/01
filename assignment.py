# 机械优化设计中，为求最优解需要进行数学规划
# 求得任意函数后需要对其极值进行查找，最为简单的情形是求一元函数的极值问题（一维搜索）
# 一维搜索中，最常用的方法有外推法（搜索区的确定）和黄金分割法（用于搜索区间的试探，直至找出极值）


def f(x) :
    y =x**2- 7 * x - 20  # 所取的一元函数
    return y

# 外推法

h = float(input("input 步长h\n"))  # 输入搜索步长
y1 = float(input("input 起始点y1\n"))  # 输入起始点
a1 = 0
a2 = h
y1=f(a1)
y2 = f(a2)

if y2>y1:
    h=-h;a3=a1;y3=y1
    a1=a2;y1=y2;a2=a3;y2=y3

a3=a2+h;y3=f(a3)

while y3<y2:
    h = 2 * h
    a1=a2;y1 =y2;a2=a3;y2=y3
    a3=a2 + h;y3=f(a3)
y1=f(a1);y2=f(a2);y3=f(a3)

print("a1 = %.2f,a2 = %.2f,a3 = %.2f\ny1 = %.2f,y2 = %.2f,y3 = %.2f\n"%(a1,a2,a3,y1,y2,y3))

# 黄金分割法

k=0.618
e=float(input("input 精度e\n"))  # 所需的精度

if a3>a1:a=a1;b=a3
else : a=a3;b=a1

a1=b-k*(b-a);y1=f(a1)
a2=a+k*(b-a);y2=f(a2)

while 1:

    if y1>=y2:
        a=a1;a1=a2;y1=y2;
        a2=a+k*(b-a);y2=f(a2)
    elif y1<y2:
        b=a2;a2=a1;y2=y1
        a1=b-k*(b-a);y1=f(a1)

    print('%.6f,%.6f\n'%(a,b))              # 用于显示求极值的具体过程

    m=float(abs((b-a)/b)); n=float(abs((y2-y1)/y2))
    if(m<e and n<e):
        break
x=(a+b)/2;y=f(x)
print('a* = %.6f, f(a*) = %.6f'%(x,y))

input() #防闪退

# 输入示例 h=0.1 y1=0 e=0.00001
