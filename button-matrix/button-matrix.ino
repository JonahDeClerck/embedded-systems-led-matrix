#define c1 10
#define c2 9
#define c3 8

#define r1 7
#define r2 6
#define r3 5
#define r4 4

void setup()
{
    Serial.begin(9600);

    pinMode(c1, OUTPUT);
    pinMode(c2, OUTPUT);
    pinMode(c3, OUTPUT);

    pinMode(r1, OUTPUT);
    pinMode(r2, OUTPUT);
    pinMode(r3, OUTPUT);
    pinMode(r4, OUTPUT);

    digitalWrite(r1, 0);
    digitalWrite(r2, 0);
    digitalWrite(r3, 0);
    digitalWrite(r4, 0);
}

void loop()
{
    for(int c=0; c<4; c++)
    {
        for(int r=0; r<4; r++)
        {
            selectCol(c);
            selectRow(r);
            check(r);
        }
    }
}

void selectCol(int c)
{
    if(c == 1) pinMode(c1, INPUT_PULLUP); else pinMode(c1, OUTPUT);
    if(c == 1) pinMode(c2, INPUT_PULLUP); else pinMode(c2, OUTPUT);
    if(c == 1) pinMode(c3, INPUT_PULLUP); else pinMode(c3, OUTPUT);
}

void selectRow(int r)
{
    if(r == 1) digitalWrite(r1, 0); else digitalWrite(r1, 1);
    if(r == 2) digitalWrite(r2, 0); else digitalWrite(r2, 1);
    if(r == 3) digitalWrite(r3, 0); else digitalWrite(r3, 1);
    if(r == 4) digitalWrite(r4, 0); else digitalWrite(r4, 1);
}

void check(int r)
{
    if(r == 1 && !digitalRead(c1)) Serial.println('1');
    if(r == 2 && !digitalRead(c1)) Serial.println('4');
    if(r == 3 && !digitalRead(c1)) Serial.println('7');
    if(r == 4 && !digitalRead(c1)) Serial.println('x');

    if(r == 1 && !digitalRead(c2)) Serial.println('2');
    if(r == 2 && !digitalRead(c2)) Serial.println('5');
    if(r == 3 && !digitalRead(c2)) Serial.println('8');
    if(r == 4 && !digitalRead(c2)) Serial.println('y');

    if(r == 1 && !digitalRead(c3)) Serial.println('3');
    if(r == 2 && !digitalRead(c3)) Serial.println('6');
    if(r == 3 && !digitalRead(c3)) Serial.println('9');
    if(r == 4 && !digitalRead(c3)) Serial.println('z');
}