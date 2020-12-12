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
