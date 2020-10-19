# part1
Write out variables x, y and z in binary code
1. int8_t x = 67; int8_t y = -7; int8_t z = y - x

2. int8_t x = 0xd3;
3. uint8_t = 0xd3;
4. int8_t x = 127; int8_t y = -7; int8_t z = y – x;
5. float x = 1.125;
6. float x = 23.0;
7. float x = 0.45;

上述代码中，哪些出现溢出错误，哪些出现精度误差。

解：
1. x = 0100 0011；y = 1111 1001；z = 0100 1010
2. x = 1101 0011
3. x = 1101 0011
4. x = 0101 0111；y = 1111 1001；z = 1111 1010
5. x = 1.001
6. x = 1011 1.
7. x = 0.0111 0011

溢出：
* 2中的x
* 4中的z

精度误差：
* 7中的x

# part2
## Method of complements
In mathematics and computing, the method of complements is a technique to encode a symmetric range of positive and negative integers in a way that they can use the same algorithm (hardware) for addition throughout the whole range

## Byte
The byte is a unit of digital information that most commonly consists of eight bits.

## Integer (computer science)
In computer science, an integer is a datum of integral data type, a data type that represents some range of mathematical integers.

## Floating point
In computing, floating-point arithmetic (FP) is arithmetic using formulaic representation of real numbers as an approximation to support a trade-off between range and precision.

## 证明
仔细阅读” Method of complements”的内容，你将注意到nines‘ complement in the decimal 和 ones’ complement in binary 等概念.
1. 请证明：二进制的负数（two‘s complement of X）等于 X 的 ones’ complement ＋ 1（即，X每位求反加1）
2. Int8_t x = - 017; 请用8进制描述变量 x。在c中017即(017)8

解
1. 将一个二进制数与此二进制数的求反得到的数相加,得到的是一个全1的二进制数,此全1二进制数再加一,舍弃进位,得到一个全为0的二进制数,既x + two's complement of x = 0,则可知二进制的负数等于其求反加1.
1. x = 1 * 8 ^ 1 + 7 * 8 ^0;

阅读维基百科” Two‘s complement”的内容，特别是Sign extension小节内容。
1. C程序：int8_t x = -0x1f; int y = x; 请用16进制描述变量 x 和 y，并说明 int y = x 的计算过程。
2. 请用数学证明，为什么可以这么计算。

解:
1. x = 0xe1 ; y = 0xffe1; 将八位的x移到y的低八位, 然后剩下的高位以x中的最高位既1填充.
1. 当x为正数时显然正确, 仍然等于原码表示;当x是负数时, 高位用1填充得到的结果与将x的数用y的位数表示得到的结果一样,由此可知,这么计算是正确的
阅读维基百科” Floating point”的内容，
1. NaN 是什么？

解
1. Not a number 指示非法操作或者无法定义的结果。

