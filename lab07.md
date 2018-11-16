# 任务1

（2）1.PC的全称是program counter
程序计数器，是用来计数的，指示指令在存储器的存放位置，也就是个地址信息。

IR的全称应该是Instructinon register
指令寄存器是用来存放指令的，存放当前正在执行的指令，包括指令的操作码，地址码，地址信息。


2.ACC（Accumulator）是累加器A缩写。累加器A是一个具有特殊用途的二进制8位寄存器，专门用来存放操作数或运算结果。在CPU执行某种运算前，两个操作数中的一个通常应放在累加器A中，运算完成后累加器A中便可得到运算结果。

3.PC从RAM中取指令LOD #1 → 将指令经IR传入Decoder → 将1传入MUX→ALU→ACC

4.PC从RAM中取指令ADD a → 将指令经IR传入Decoder → 将a传入ALU→ACC

5.操作顺序不同

（3）1.00010100 00000111 分别为寻址与操作（如题干中的LOD操作）

2.用以储存数据与指令

3.16





![在这里插入图片描述](https://img-blog.csdnimg.cn/2018111621095654.PNG?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjQ3OTA5Mg==,size_16,color_FFFFFF,t_70)
![在这里插入图片描述](https://img-blog.csdnimg.cn/20181116211003496.PNG?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjQ3OTA5Mg==,size_16,color_FFFFFF,t_70)
![在这里插入图片描述](https://img-blog.csdnimg.cn/20181116211012580.PNG?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjQ3OTA5Mg==,size_16,color_FFFFFF,t_70)

4.
```
#include<stdio.h>

int main()

{

int w = 1;

int x = 2;

int z = w + x;

return 0;

}
``` 


# 任务2
（1）1.该程序可使整数x从1开始自增，直到x=10,并得到每一个不同的a值相加的值y。


![在这里插入图片描述](https://img-blog.csdnimg.cn/20181116211042788.PNG?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjQ3OTA5Mg==,size_16,color_FFFFFF,t_70)
```
2.#include<stdio.h>

int main()

{

int x = 1,y=0;

while(x!=10){

    y=y+x;

    x++;
}

printf("%d",y);

return 0;

}
``` 

(2)

1.
```
#include<stdio.h>

int main()

{

int x = 1,y=0;

while(x!=10){

    y=y+x;

    x++;
}

printf("%d",y);

return 0;

}
```

3.高级语言如c语言等主要面向对象，让人看得懂；而机器语言（低级语言）是让“机器”看得懂，并执行相应的操作。

另外cpusim运行的速度好慢啊= =