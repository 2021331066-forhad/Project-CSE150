#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<thread>
#include<chrono>

using namespace std;

enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
Direction dir;
bool gameOver;
const int height = 23; 
const int width = 23;  
int headX, headY, fruitX, fruitY, score;
int tailx[100], taily[100];
int tail_len;

void setup();
void draw();
void input();
void logic();
int main()
{
  return 0;
}
