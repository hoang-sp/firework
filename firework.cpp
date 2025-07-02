#include <graphics.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void drawFirework(int x, int y) {
    int color = rand() % 16;
    setcolor(color);
    for (int i = 0; i < 100; i++) {
     
        int radius = rand() % 50 + 50;
        float angle = (float)(rand() % 360) * M_PI / 180.0;
        int x_end = x + radius * cos(angle);
        int y_end = y + radius * sin(angle);

        line(x, y, x_end, y_end);
        delay(20); 
    }
}

int main() {
   
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    srand(time(0));
    
    setbkcolor(BLACK);
    cleardevice();

    for (int i = 0; i < 5; i++) {
        int x = rand() % getmaxx();
        int y = rand() % (getmaxy() / 2);
        drawFirework(x, y);
        delay(500);  
        cleardevice();  
    }

    delay(5000); 
    getch();  
    closegraph();

    return 0;
}
