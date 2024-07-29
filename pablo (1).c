#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 20
#define HEIGHT 10
#define INITIAL_LENGTH 3
#define SNAKE_HEAD '@'
#define SNAKE_BODY '#'
#define FOOD '*'

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point body[WIDTH * HEIGHT];
    int length;
    int direction;
} Snake;

typedef struct {
    Point pos;
} Food;

enum Direction { UP = 1, RIGHT, DOWN, LEFT };

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void draw_border() {
    for (int x = 0; x < WIDTH + 2; ++x) {
        gotoxy(x, 0);
        printf("#");
        gotoxy(x, HEIGHT + 1);
        printf("#");
    }
    for (int y = 1; y < HEIGHT + 1; ++y) {
        gotoxy(0, y);
        printf("#");
        gotoxy(WIDTH + 1, y);
        printf("#");
    }
}

void draw_snake(Snake *snake) {
    for (int i = 0; i < snake->length; ++i) {
        gotoxy(snake->body[i].x + 1, snake->body[i].y + 1);
        printf(i == 0 ? "%c" : "%c", SNAKE_BODY);
    }
}

void draw_food(Food *food) {
    gotoxy(food->pos.x + 1, food->pos.y + 1);
    printf("%c", FOOD);
}

void update_snake(Snake *snake, Food *food, int *score) {
    Point prev_head = snake->body[0];
    Point prev_segment;

    switch (snake->direction) {
        case UP:
            snake->body[0].y--;
            break;
        case RIGHT:
            snake->body[0].x++;
            break;
        case DOWN:
            snake->body[0].y++;
            break;
        case LEFT:
            snake->body[0].x--;
            break;
    }

    for (int i = 1; i < snake->length; ++i) {
        prev_segment = snake->body[i];
        snake->body[i] = prev_head;
        prev_head = prev_segment;
    }

    if (snake->body[0].x == food->pos.x && snake->body[0].y == food->pos.y) {
        (*score)++;
        snake->length++;
        generate_food(food, snake);
    }
}

int check_collision(Snake *snake) {
    Point head = snake->body[0];

    if (head.x < 0 || head.x >= WIDTH || head.y < 0 || head.y >= HEIGHT) {
        return 1;
    }

    for (int i = 1; i < snake->length; ++i) {
        if (head.x == snake->body[i].x && head.y == snake->body[i].y) {
            return 1;
        }
    }

    return 0;
}

void generate_food(Food *food, Snake *snake) {
    int valid = 0;
    while (!valid) {
        valid = 1;
        food->pos.x = rand() % WIDTH;
        food->pos.y = rand() % HEIGHT;

        for (int i = 0; i < snake->length; ++i) {
            if (food->pos.x == snake->body[i].x && food->pos.y == snake->body[i].y) {
                valid = 0;
                break;
            }
        }
    }
}

void input(Snake *snake) {
    if (_kbhit()) {
        switch (_getch()) {
            case 72: // Arrow up
                if (snake->direction != DOWN) snake->direction = UP;
                break;
            case 77: // Arrow right
                if (snake->direction != LEFT) snake->direction = RIGHT;
                break;
            case 80: // Arrow down
                if (snake->direction != UP) snake->direction = DOWN;
                break;
            case 75: // Arrow left
                if (snake->direction != RIGHT) snake->direction = LEFT;
                break;
            case 'q': // Quit the game
                exit(0);
        }
    }
}

int main() {
    Snake snake;
    Food food;
    int score = 0;

    snake.length = INITIAL_LENGTH;
    snake.direction = RIGHT;

    for (int i = 0; i < INITIAL_LENGTH; ++i) {
        snake.body[i].x = WIDTH / 2 - i;
        snake.body[i].y = HEIGHT / 2;
    }

    generate_food(&food, &snake);

    while (1) {
        system("cls");
        draw_border();
        draw_snake(&snake);
        draw_food(&food);

        input(&snake);
        update_snake(&snake, &food, &score);

        if (check_collision(&snake)) {
            system("cls");
            printf("Game Over! Your score: %d\n", score);
            return 0;
        }

        Sleep(100); // Sleep for 100 milliseconds
    }

    return 0;
}

