#include <iostream>
using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup() 
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw() 
{
    system("cls");
    for (int i = 0; i < width; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#";
            
                cout << " ";

            if (j == width - 1)
                cout << "#";
            
        }
        cout << endl;
        
    }
    
    

}

void Input() 
{

}

void Logic() 
{

}

int main() 
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        //Sleep(10); sleep(10);
    }
    
    return 0;
}