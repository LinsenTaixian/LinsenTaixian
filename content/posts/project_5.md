---
title: "Project_5"
date: 2020-11-15T14:55:19+08:00
draft: false
---


## 题目：
用伪代码描述算法。介绍“自顶向下，逐步求精”的编程方法，以你观察的洗衣机为案例，用伪代码描述洗衣机洗衣的程序。

### 答：
自上而下方法本质上是对系统进行分解，以便以逆向工程的方式深入了解其组成子系统。 采用自上而下的方法时，会对系统的概观进行规划和具体说明，但对于第一层子系统的细节则不予阐述。接着，对每个子系统进行更详细的细化，有时甚至在许多附加的子系统层级中进行细化，直到整个规范都简化为基本元素。 自上而下模型通常会借助于“黑盒子”来详细规定，使其更易于操作。 但是，黑盒子可能会无法阐明基本机制，或可能不够详细而无法实际验证模型。 自上而下的方法始于全局，由此分解至更小的部分。

伪代码：
洗衣过程：
set the water in >> soap the clothes >> wash the clothes >> dewatering the clothes >> stop the work

伪代码：

注水：
turn on the water_in_switch
set the water volume
while(water_input is less than the water volume)
 keep the water_in_switch open
while(water_input is more than the water volume or volume timeout)
  stop input water

浸泡：
set the soaping time
for(set the left time is zero ;the left time is less than the setting time; increase the left time)
 keep the clothes soaping
if(the left time is equal to the setting time)
  begin to wash

洗涤和漂洗：
set the washing times to 3
set the washing time to 20
for(set a to zero; a is less than setting times; add 1 to a;)
  if(the washing times is not the 1st time)
   pouring the water
   pouring in the new and clean water
do
  washing and motor runs
while(the pass time is less than the washing time)
pouring the water

脱水：
set the motor run’s frequency
set the running time
while the past time is less than the running time
 keep the motor running in the setting frequency

