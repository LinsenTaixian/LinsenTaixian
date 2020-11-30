---
title: "Homework_9"
date: 2020-11-15T14:34:37+08:00
draft: false
---

1. Bubble Sort the list: 33, 56, 17, 8, 95, 22。Make sure the final result is from small to large. Write out the list after the 2nd pass. (10 points)
2. Give a sorted array as list={60,65,75,80,90,95}. Design an algorithm to
insert the value of x into the sorted array. Then test the algorithm with
value 50,67,99.
思考：为什么选择插入点在list头上、中间、尾巴上的三个数作为算
法测试的数据，你能解释吗？
3. What is the state of the stack after the following sequence of Push and Pop operations?
Push “anne”; Push “get”; Push “your” ; Pop; Push “my” Push “gun” 


解：
1. 如下：
第一遍：22 33 95 56 17 8
第二遍；8 17 22 33 56 95
2. 插入时，先从左边开始查找到要插入的数据的位置，然后在链表中加入一个存储了要插入数据的节点。

    插入50：易知是在开始处插入，则在头节点后面加入一个节点即可，即：{50,60,65,75,80,90,95}
    插入67：找到插入位置是65和75之间，即{50,60,65,67,75,80,90,95}
    插入99: 找到插入位置是95之后,即{50,60,65,67,75,80,90,95,99}
    思考: 呃,因为这三个点是特殊点,很有代表性,这三种情况如果没有问题,那么其他点应该也没有问题.
3. 如下:
    Push “anne”; Push “get”; Push “your” ; Pop; Push “my” Push “gun” 
    stack: anne
    stack: anne get
    stack: anne get your
    stack: anne get
    stack: anne get my
    stack: anne get my gun