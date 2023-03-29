#include "character_map.h"

#define y1 6
#define y2 5
#define y3 4 
#define y4 3
#define y5 2

#define x1 A3
#define x2 A2
#define x3 A1
#define x4 A0
#define x5 15

void setup()
{
    pinMode(y1, OUTPUT);
    pinMode(y2, OUTPUT);
    pinMode(y3, OUTPUT);
    pinMode(y4, OUTPUT);
    pinMode(y5, OUTPUT);

    pinMode(x1, OUTPUT);
    pinMode(x2, OUTPUT);
    pinMode(x3, OUTPUT);
    pinMode(x4, OUTPUT);
    pinMode(x5, OUTPUT);

    digitalWrite(x1, 1);
    digitalWrite(x2, 1);
    digitalWrite(x3, 1);
    digitalWrite(x4, 1);
    digitalWrite(x5, 1);

    digitalWrite(y1, 0);
    digitalWrite(y2, 0);
    digitalWrite(y3, 0);
    digitalWrite(y4, 0);
    digitalWrite(y5, 0);

}

void loop()
{
    embedded_systems(4);
}

//functionals

void selectRow(int r)
{
    if(r == 1) digitalWrite(x1, 0); else digitalWrite(x1, 1);
    if(r == 2) digitalWrite(x2, 0); else digitalWrite(x2, 1);
    if(r == 3) digitalWrite(x3, 0); else digitalWrite(x3, 1);
    if(r == 4) digitalWrite(x4, 0); else digitalWrite(x4, 1);
    if(r == 5) digitalWrite(x5, 0); else digitalWrite(x5, 1);
}

void set_led_in_active_row(int c, int state)
{
    if(c == 1) digitalWrite(y1, state);
    if(c == 2) digitalWrite(y2, state);
    if(c == 3) digitalWrite(y3, state);
    if(c == 4) digitalWrite(y4, state);
    if(c == 5) digitalWrite(y5, state);
}

void allOff()
{
    digitalWrite(y1, 0);
    digitalWrite(y2, 0);
    digitalWrite(y3, 0);
    digitalWrite(y4, 0);
    digitalWrite(y5, 0);
}

void display( int input [5] [5], int t)
{
    for(int k=0; k< (t *100); k++)
    {
        for(int i=0; i<5; i++)
        {
            selectRow(i+1);
            for(int j=0; j<5; j++)
            {
                set_led_in_active_row(j+1, input[i][j]);
                allOff();
            }
        }
        
    }
    allOff();
    delay(50);
}

//display functions

void cycleAll(int time)
{
    display(a, time);
    display(b, time);
    display(c, time);
    display(d, time);
    display(e, time);
    display(f, time);
    display(g, time);
    display(h, time);
    display(i, time);
    display(j, time);
    display(k, time);
    display(l, time);
    display(m, time);
    display(n, time);
    display(o, time);
    display(p, time);
    display(q, time);
    display(r, time);
    display(s, time);
    display(t, time);
    display(u, time);
    display(v, time);
    display(w, time);
    display(x, time);
    display(y, time);
    display(z, time);
    
    display(n0, time);
    display(n1, time);
    display(n2, time);
    display(n3, time);
    display(n4, time);
    display(n5, time);
    display(n6, time);
    display(n7, time);
    display(n8, time);
    display(n9, time);

    display(hash, time);
    display(colon, time);
}

void embedded_systems(int time)
{
    display(e, time);
    display(m, time);
    display(b, time);
    display(e, time);
    display(d, time);
    display(d, time);
    display(e, time);
    display(d, time);

    delay(250);

    display(s, time);
    display(y, time);
    display(s, time);
    display(t, time);
    display(e, time);
    display(m, time);
    display(s, time);

    delay(500);
}

void discord_name(int time)
{
    display(j, time);
    display(o, time);
    display(n, time);
    display(a, time);
    display(h, time);
    display(hash, time+2);
    display(n9, time);
    display(n7, time);
    display(n9, time);
    display(n7, time);

    delay(500);
}

