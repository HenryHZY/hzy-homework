/* 
	2018.11.30
	Created by sysu-18342026
	Use 'w','s','a','d' to move and eat the gold.
	Be careful not to hit yourseld as well as the wall(*)!
	Happy playing!
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max_length 20
#define snake_head 'H'
#define snake_body 'x'
#define blank_cell ' '
#define snake_food '$'
#define wall_cell  '*'

//Use 'w'(up),'s'(down),'a'(left),'d'(right) to move.
void snakeHeadMove(int m,int n);
void snakemove(void);

//Put a gold randomized on a blank cell.
void put_money(void);

//hit yourself or hit the wall
int gameover(void);
void output(void);

//the begining
char map[12][12]=
     {"***********",
      "*xxxxH    *",
      "*         *",
      "*         *",
      "*         *",
      "*         *",
      "*         *",
      "*         *",
      "*         *",
      "*         *",
      "*         *",
      "***********"};
      
//the initial position and length	        
int snake_x[max_length]={1,2,3,4,5};
int snake_y[max_length]={1,1,1,1,1};
int snake_length=5;