
int main() {
	
	output();				//output the initial map and snake.
    creatrandomfood();		//output the random food.
    
    char direction;
    int flag=1;
    
    while (flag==1) {
    	
        scanf(" %c", &direction);		//input the moving direction
        
        snakemove();					//use 'w'(up),'s'(down),'a'(left),'d'(right) and 'Enter' to move.
        
        if (direction == 'w') {
            snake_y[0] -= 1;
            map[snake_y[0]][snake_x[0]] = SNAKE_HEAD;
        }
        
        if (direction == 's') {
            snake_y[0] += 1;
            map[snake_y[0]][snake_x[0]] = SNAKE_HEAD;
        }
        
        if (direction == 'a') {
            snake_x[0] -= 1;
            map[snake_y[0]][snake_x[0]] = SNAKE_HEAD;
        }
        
        if (direction == 'd') {
            snake_x[0] += 1;
            map[snake_y[0]][snake_x[0]] = SNAKE_HEAD;
        }
        
        if (snake_x[0] == food_x && snake_y[0] == food_y) {
            creatrandomfood();
            
            snake_length++;
            
            snake_x[snake_length - 1] = snake_x[snake_length - 2];
            snake_y[snake_length - 1] = snake_y[snake_length - 2];
            
            map[snake_y[snake_length - 1]][snake_x[snake_length - 1]] = SNAKE_BODY;
        }
        
        if (gameover()!=1) {								//When the snake hits itself or hits the wall,the game will be over.

            printf("GAMEOVER!\n\nTHANKS FOR PLAYING!\n");
            flag=0;
        } 
		
		else {
            output();
        }
    }
    
    return 0;
}



//output the initial map and snake.
void output() {
	int i,j;
	
    for (i = 0; i <= 11; i++) {
    	
        for (j = 0; j <= 11; j++) {
            printf("%c", map[i][j]);
        }
        	printf("\n");
    }
}

//output the random food.
void creatrandomfood() {
    srand((unsigned)(time(NULL)));
    
    food_x = rand() % 7;
    food_y = rand() % 7;
    
    while (map[food_y][food_x] != BLANK_CELL) {
        food_x = rand() % 7;
        food_y = rand() % 7;
        
    }
    map[food_y][food_x] = SNAKE_FOOD ;
}

//use 'w'(up),'s'(down),'a'(left),'d'(right) and 'Enter' to move.
void snakemove() {
    int i;
    
    map[snake_y[snake_length - 1]][snake_x[snake_length - 1]] = BLANK_CELL;
    
    for (i = snake_length - 1; i > 0; i--) {
        snake_x[i] = snake_x[i - 1];
        snake_y[i] = snake_y[i - 1];
        map[snake_y[i]][snake_x[i]] = SNAKE_BODY;
    }
}


//When the snake hits itself or hits the wall,the game will be over.
int gameover() {
	int i; 
	
    if (snake_x[0] == SNAKE_MAX_LENGTH || snake_x[0] == 0) {
        return 0;
    }
    
    if (snake_y[0] == SNAKE_MAX_LENGTH || snake_y[0] == 0) {
        return 0;
    }
    
    for (i = 1; i < snake_length; i++) {
        if (snake_x[0] == snake_x[i] && snake_y[0] == snake_y[i]) {
            return 0;
        }
    }
    
    return 1;
}