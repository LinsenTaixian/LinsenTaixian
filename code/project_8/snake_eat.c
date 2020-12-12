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