---
title: "快速幂运算和矩阵快速幂运算"
date: 2020-09-27T01:29:21+08:00
draft: false
---
# 快速幂运算和矩阵快速幂运算

## 快速幂运算

题:既求一个数的n次方,其中n特别大, 最后的结果对k取余

例如$ a^{22}$ 其中$ 22$的二进制表示为$ 10110$, 所以可以通过一直计算$ x$的平方, 然后在n的二进制为一的地方乘以res, 就可以得到下面的额算法



```c++
typedef long long ll;
ll mod_pow(ll x, ll n, ll mod_k){
    ll res = 1;
    while(n > 0){
        if(n&1) res = x*x%mod_k;
        x = x*x%mod_k;
        n>>= 1;
    }
    return res;
}
```



或者:

或者也可以采用另外一种理解使用递归函数$n$ 为偶数时, 其递归是$a^n = (a^2)^{\frac{n}{2}}$ , 如果是奇数, 也可以递归成 $ a^n = {(a^2)}^{\frac{n- 1}{2}}\times a$ , 就是下面的代码所示      



```c++
typedef long long ll;
ll mod_pow(ll x, ll n, ll mod_k){
    if(n == 0) return 1;
    ll res = mod_pow(x*x%mod_k, n/2, mod_k);
    if(n&1) res = res*x%mod_k;
    return res;
}
```



## 矩阵的快速幂运算

两个矩阵的快速运算为

```c++
int ** mat(int** A, int** B, int size){
    int ** C = (int**)malloc(sizeof(int*)*size);
    for(int i= 0; i< size;i++){
        C[i] = (int*)malloc(sizeof(int)*size);
    }
    for(int i = 0; i < size;i++){
        for(int j = 0; j < size;j++){
            C[i][j] = 0;
            for(int k = 0;k < size;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    return C;
```



快速幂运算为

```c++
int ** fun(int ** A, int size, int n){
    int ** rec = (int**)malloc(sizeof(int*)*size);
    for(int i= 0; i< size;i++){
        C[i] = (int*)malloc(sizeof(int)*size);
    }
    for(int i = 0; i < size;i++){
        for(int j = 0;j < size;j++){
            rec[i][j] = i == j ? 1 : 0;
        }
    }
    while(n){
        if(n&1) mat(rec, A);
        mat(A, A);
        n>>= 1;
    }
    return rec;
}
```



### 例题:

罗姆的常系数齐次线性递推

空间限制:32MB

时间限制:1000ms

------

#### 背景故事

*出题人遇到了被偷了徽章的艾米莉亚，他们一起寻找徽章，最后锁定在一家赃物店里，却没有想到，两人相继进店，相继被杀。*

*出题人发现自己拥有死亡回归的能力，读档复活了。出题人又遇见了艾米莉亚，然而艾米莉亚却一副不认识出题人的样子，出题人一脸茫然。*

*不知所措的出题人决定先去店里赎回徽章。来到店里，这里只有罗姆老爷爷，和一个小女孩。*

*罗姆：“你拿什么来赎？”*

#### 题目描述


![a photo about the question](https://github.com/LinsenTaixian/images/blob/master/images1/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE(233).png)
<!-- 
出题人：“当当当当！看这个手机，它有很神奇的能力，它能算递推数列哦！”

罗姆：“递推数列？这个老夫也会，老夫识得斐波那契数列，就是 f1=1, f2=1, fn=fn−1+fn−2f1=1, f2=1, fn=fn−1+fn−2，这个数列是 1,1,2,3,5,8,13⋯1,1,2,3,5,8,13⋯”

出题人：“很好。常系数齐次线性递推就是一种扩展，定义 f1=a1, f2=a2,⋯,fk=akf1=a1, f2=a2,⋯,fk=ak，当 n>kn>k 时，有 fn=c1fn−1+c2fn−2+⋯+ckfn−kfn=c1fn−1+c2fn−2+⋯+ckfn−k。

“比如，令 k=2, a1=a2=c1=c2=1k=2, a1=a2=c1=c2=1，那么它就成了斐波那契数列。

“现在给你 a1,⋯,aka1,⋯,ak 这 kk 个初始项、c1,⋯,ckc1,⋯,ck 这 kk 个递推系数，以及 nn，你能求出 fnfn 吗？注意 nn 很大哟~你不会了吧~”

罗姆：“这。。老夫还真不会，你这破盒子就能算对了？”

你作为出题人手机这个程序的编写者，是时候向罗姆爷展现你的能力了！

由于答案可能很大，你只需要输出答案对 109+7109+7 取模。易证，对于乘法运算：(a×b)modp=((amodp)×(bmodp))modp(a×b)modp=((amodp)×(bmodp))modp，对于加法运算：(a+b)modp=((amodp)+(bmodp))modp(a+b)modp=((amodp)+(bmodp))modp。即，对于你的程序中跟答案直接相关的加法和乘法运算，每次运算完之后都对 109+7109+7 取模，这样就不会溢出 long long 了。 -->

**本题附有提示，但在阅读提示前请务必进行充分的独立思考，否则对你的学习能力提升没有意义。**

#### 输入格式

第一行两个正整数 k,nk,n。（1≤k≤201≤k≤20，k≤n≤1018k≤n≤1018）

第二行 kk 个整数，表示 a1,⋯,aka1,⋯,ak。

第三行 kk 个整数，表示 c1,⋯,ckc1,⋯,ck。（1≤ai,ci≤1091≤ai,ci≤109）

#### 输出格式

一行，一个整数，表示 fnfn 对 109+7109+7 取模。

#### 样例输入1

2 6

1 1

1 1

#### 样例输出1

8

#### 样例输入2

3 6

1 2 3

3 2 1

#### 样例输出2

181

#### 提示1

聪明的你一定学过线性代数，我们来简单应用一下。

考虑斐波那契数列 fn=fn−1+fn−2fn=fn−1+fn−2，我们构造一个向量 *[Math Processing Error]*，把它乘一个矩阵 *[Math Processing Error]*，会得到什么呢？ *[Math Processing Error]*

会发现 ff 的下标往前推进了一位！这就产生了递推！

聪明的你一定想到了扩展到常系数齐次线性递推要怎么做。

#### 提示2

给定 x,yx,y，而 yy 很大，要怎么求 xyxy 呢？

如果 yy 是偶数，你可以先求 xy2xy2，然后给它平方一下；

如果 yy 是奇数，你可以先求 xy−12xy−12，然后给它平方一下，然后再乘个 xx。

聪明的你一定知道这样做的时间复杂度是多少。

#### 提示3

离散课本里好像还给出了一种直接解特征方程的方法呢！哪个方法比较好呢？课本里的方法能不能用在这个题里呢？两种方法有什么联系呢？能不能互相推导出来呢？

聪明的你一定被激发了学习的热情！



### 分析:




$$
\begin{bmatrix}
a_{k + 1}\\
a_{k}\\
a_{k - 1}\\
\vdots\\
a_2\\
\end{bmatrix}
=
\begin{bmatrix}
c_k& c_{k - 1}& \cdots&c_2& c_1\\
1&0&\cdots&0&0\\
0& 1& \cdots& 0&0\\
\vdots&\vdots&\ddots&\vdots&\vdots\\
0&0&\cdots&1&0
\end{bmatrix}
\begin{bmatrix}
a_k\\
a_{k - 1}\\
a_{k - 2}\\
\vdots\\
a_1
\end{bmatrix}
$$

所以可以令:
$$
A=
\begin{bmatrix}
c_k& c_{k - 1}& \cdots&c_2& c_1\\
1&0&\cdots&0&0\\
0& 1& \cdots& 0&0\\
\vdots&\vdots&\ddots&\vdots&\vdots\\
0&0&\cdots&1&0
\end{bmatrix}
$$
那么就有:
$$
a^n = A^{n- k}\times
\begin{bmatrix}
a_k\\
a_{k - 1}\\
a_{k - 2}\\
\vdots\\
a_1
\end{bmatrix}
$$
那么就可以用快速矩阵来计算$A^{n - k}$ 了



### 题解代码

```c++
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

long long int mat1[20][20], mat2[20][20];
long long int mod = 0, ans = 0;
long long int tem[20];
long long int k = 0, n = 0;

void mut(int mo){
    int thistime[20][20];
    if(mo == 1){
        for(int i = 0; i < k;i++){
            for(int j = 0; j < k;j++){
                thistime[i][j] = 0;
                for(int r = 0; r < k;r++){
                    thistime[i][j] = (thistime[i][j] + mat1[i][r]*mat1[r][j])%mod;
                }
            }
        }
        for(int i = 0; i < k;i++){
            for(int j = 0; j < k;j++){
                mat1[i][j] = thistime[i][j];
            }
        }
    }
    else{
        for(int i = 0; i < k;i++){
            for(int j = 0; j < k;j++){
                thistime[i][j] = 0;
                for(int r = 0; r < k;r++){
                    thistime[i][j] = (thistime[i][j] + mat2[i][r]*mat1[r][j])%mod;
                }
            }
        }
        for(int i = 0; i < k;i++){
            for(int j = 0; j < k;j++){
                mat2[i][j] = thistime[i][j];
            }
        }
    }
}

void pow_mod(void){
    while(n >0){
        if(n&1) mut(2);
        mut(1);
        n >>= 1;
    }
}

int main(){
    mod = pow(10,9) + 7;
    scanf("%lld %lld", &k, &n);
    n = n - k;
    for(int i = 0; i < k;i++){
        scanf("%lld", &tem[i]);
    }
    for(int i = 0; i < k;i++){
        scanf("%lld", &mat1[0][i]);
    }
    for(int i = 1; i < k;i++){
        mat1[i][i - 1] = 1;
    }
    for(int i = 0; i < k;i++){
        mat2[i][i] = 1;
    }
    pow_mod();
    for(int i = 0;i < k;i++){
        ans = (ans + tem[k - i - 1]*mat2[0][i])%mod;
    }
    printf("%lld\n", ans);
    return 0;
}
```



```c++
输入:
3 6
1 2 3
3 2 1
输出:
181
```

