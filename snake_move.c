/* 
	snake_move.c
	
	2018.11.30
	Created by sysu-18342026
	
	Use 'w'(up),'s'(down),'a'(left),'d'(right) to move and eat the gold.
	Be careful not to hit yourseld as well as the wall(*)!
	
	Happy playing!
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SNAKE_MAX_LENGTH 10
#define SNAKE_HEAD 'H'
#define SNAKE_BODY 'X'
#define BLANK_CELL ' '
#define SNAKE_FOOD '$'
#define WALL_CELL '*'

//output the initial map,food and snake.
void output();
void creatrandomfood();

//use 'w'(up),'s'(down),'a'(left),'d'(right) and 'Enter' to move.
void snakemove();

//When the snake hits itself or hits the wall,the game will be over.
int gameover();


//the begining
char map[12][12] = {
					"***********",
    				"*XXXXH    *",
    				"*         *",
    				"*         *",
    				"*         *",
    				"*         *",
    				"*         *",
    				"*         *",
    				"*         *",
    				"*         *",
    				"***********",
					};

//the initial position and length	        
int snake_length = 5;
int snake_x[SNAKE_MAX_LENGTH] = {5, 4, 3, 2, 1};
int snake_y[SNAKE_MAX_LENGTH] = {1, 1, 1, 1, 1};
int food_x;
int food_y;