---
title: "Project_8"
date: 2021-01-04T23:33:38+08:00
draft: false
---
我写了四个文件: snake.h文件, sanke_eat.c文件,sanke_move.c文件和一个readme.md文件


snake.h文件内容如下:

```
#ifndef _SNAKE_H_
#define _SNAKE_H_

// 定义地图中的各种符号
#define SNAKE_HEAD 'H'
#define SNAKE_BODY 'X'
#define BLANK ' '
#define WALL '*'
#define FOOD '$'

// 定义🐍的状态
int LIFE = 1;

// 🐍的身体和头的坐标
int snake_i[100] = {1, 1, 1, 1, 1};
int snake_j[100] = {1, 2, 3, 4, 5};
int snake_size = 5;

// 分别表示上下左右的运动方向
int dir_i[4] = {-1, 1, 0, 0};
int dir_j[4] = {0, 0, -1, 1};

// 初始地图
char map[12][12] = {
    "***********", "*XXXXH    *", "*         *", "*         *",
    "*         *", "*         *", "*         *", "*         *",
    "*         *", "*         *", "***********",
};

// 运动函数
void move(char a);
// 打印函数
void print();
// 产生食物void
void creat_food();

#endif

```

snake_eat.c代码如下:

```
/*
 * @Descripttion:
 * @version: 1.0
 * @Author: linsen
 * @Date: 2020-12-11 18:27:01
 * @LastEditors: linsen
 * @LastEditTime: 2020-12-12 12:26:06
 * @solve: false
 */
#include "snake.h"
#include <stdio.h>
#include <stdlib.h>

// 打印地图
void print() {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
}

// 产生食物
void creat_food() {
    while (1) {
        int foodi = rand() % 10 + 1;
        int foodj = rand() % 10 + 1;
        if (map[foodi][foodj] == BLANK) {
            map[foodi][foodj] = FOOD;
            break;
        }
    }
}

// 运动
void move(char way) {
    int numb = 0;
    if (way == 'w')
        numb = 0;
    else if (way == 's')
        numb = 1;
    else if (way == 'a')
        numb = 2;
    else if (way == 'd')
        numb = 3;
    switch (map[snake_i[snake_size - 1] + dir_i[numb]]
               [snake_j[snake_size - 1] + dir_j[numb]]) {

        // 运动遇到空白地

    case BLANK: {
        int i = 0;
        map[snake_i[i]][snake_j[i]] = BLANK;
        for (; i < snake_size - 1; i++) {
            snake_i[i] = snake_i[i + 1];
            snake_j[i] = snake_j[i + 1];
        }
        map[snake_i[i]][snake_j[i]] = SNAKE_BODY;
        snake_i[i] += dir_i[numb];
        snake_j[i] += dir_j[numb];
        map[snake_i[i]][snake_j[i]] = SNAKE_HEAD;
    } break;

        // 遇到🐍身体（回头）
    case SNAKE_BODY:
        // 遇到墙

    case WALL:
        LIFE = 0;
        break;
        // 食物

    case FOOD:
        map[snake_i[snake_size - 1]][snake_j[snake_size - 1]] = SNAKE_BODY;
        snake_i[snake_size] = snake_i[snake_size - 1] + dir_i[numb];
        snake_j[snake_size] = snake_j[snake_size - 1] + dir_j[numb];
        map[snake_i[snake_size]][snake_j[snake_size]] = SNAKE_HEAD;
        snake_size++;
        // 吃了之后产生新的食物

        creat_food();
        break;
    default:
        break;
    }
}
```

snake_move.c代码如下:
```
#include "snake.h"
#include "snake_eat.c"
#include <stdio.h>

// 打印地图
void print();
// 产生食物
void creat_food();
// 移动
void move(char a);

// 🐍存活与否
// int LIFE = 1;

int main() {
    char way = 'a';
    printf("welcome to the snake game!\n");
    creat_food();
    while (LIFE) {
        print();
        scanf("%s", &way);
        move(way);
    }
    printf("gameover\n");
    return 0;
}

```

readme.md内容如下:

```
### 第八次的project
提交了四个文件，一个readme，一个snak.h文件,一个snake_eat.c文件和一个sanke_move.c文件
```