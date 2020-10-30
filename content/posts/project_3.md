---
title: "Project_3"
date: 2020-10-29T20:25:00+08:00
draft: false
---

## 任务 1：建立一个简单电路

1. 设计与门验证电路

1. 画真值表验证与门功能

    | InA | INB | Out |
    | -- | - | --- |
    | 0	| 0	| 0 |
    | 0	| 1	| ？|
    | 1	| 0	| ？|
    | 1	| 1 | ？|
1. 选做题：
    * 如何用 XOR 门作非门。
    * 串联、并联三极管，结果是什么门？

## 解:
1. ![ 与门图片 ](https://raw.githubusercontent.com/LinsenTaixian/images/master/homework_images/project_3/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE(247).png)
1. 如表
    | InA | INB | Out |
    | -- | - | --- |
    | 0	| 0	| 0 |
    | 0	| 1	| 0 |
    | 1	| 0	| 0 |
    | 1	| 1 | 1 |
1. 如下
    * 将 XOR 门的一个引脚接高电平,另一个作为输入, 这时就是一个非门
    * 串联是与门，并联是或门
## 任务 2：验证电路等价

1. 分别建立电路 A（B+C）和 AB+AC 在一个界面上。用 A，B，C 用三个开关控制输入，用两个 LED 表示输出。


1. 并枚举所有可能输入，用真值表记录结果。
    | A	| B	| C	| O1 | O2 |
    | - | - | - | -- | -- |
    | 0 | 0	| 0	| ？ | ？|
    | 0	| 0	| 1	| ？ | ？|

解:
1. 如图: ![等价电路图](https://raw.githubusercontent.com/LinsenTaixian/images/master/homework_images/project_3/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE(248).png)
1. 如下表
    | A	| B	| C	| O1 | O2 |
    | - | - | - | -- | -- |
    | 0 | 0	| 0	| 1 | 1 |
    | 0	| 0	| 1	| 0 | 0 |
    | 0 | 1	| 0	| 0 | 0 |
    | 0	| 1	| 1	| 0 | 0 |
    | 1 | 0	| 0	| 0 | 0 |
    | 1	| 0	| 1	| 1 | 1 |
    | 1 | 1	| 0	| 1 | 1 |
    | 1	| 1	| 1	| 1 | 1 |
    
## 任务 3：理解存储电路

1. 按课件 S-R latch 搭建电路，例如：

1. 顺序按Set，Reset，并填写以下表格

    | ~Set | ~Reset | Q（X）| ~Q（Y）|
    | -- | -- | -- | -- |
    | 1	| 1	| 0	| 1 |
    | 0	| 1	| 	|   |
    | 1	| 1	|   | 	|
    | 1	| 0	|   | 	|
    | 1	| 1	| 	|   |

## 解:
1. 如图 ![S-R锁存器](https://raw.githubusercontent.com/LinsenTaixian/images/master/homework_images/project_3/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE(249).png)
1. 
    | ~Set | ~Reset | Q（X）| ~Q（Y）|
    | -- | -- | -- | -- |
    | 1	| 1	| 0	| 1 |
    | 0	| 1	| 1	| 0 |
    | 1	| 1	| 1 | 0 |
    | 1	| 0	| 0 | 1 |
    | 1	| 1	| 0 | 1 |

## 任务 4：设计全加电路

1. 画出一位的全加电路
1. 画出二位的全加电路

## 解:
1. 如图: 
    ![一位全加器图1](https://raw.githubusercontent.com/LinsenTaixian/images/master/homework_images/project_3/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE(250).png)
    ![一位全加器图2](https://raw.githubusercontent.com/LinsenTaixian/images/master/homework_images/project_3/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE(251).png)
    ![一位全加器图3](https://raw.githubusercontent.com/LinsenTaixian/images/master/homework_images/project_3/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE(252).png)
1. 如图: 
    ![二位全加器图1](https://raw.githubusercontent.com/LinsenTaixian/images/master/homework_images/project_3/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE(253).png)
    ![二位全加器图2](https://raw.githubusercontent.com/LinsenTaixian/images/master/homework_images/project_3/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE(254).png)
    ![二位全加器图3](https://raw.githubusercontent.com/LinsenTaixian/images/master/homework_images/project_3/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE(255).png)