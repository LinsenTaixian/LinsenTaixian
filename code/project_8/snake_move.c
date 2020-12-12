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
