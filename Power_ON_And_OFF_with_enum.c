#include <stdio.h>

typedef enum button{OFF , ON} Button;
Button press(Button currentt);
void print_button(Button currentt);


int main()
{

Button power = ON;
print_button(power);
power = press(power);
print_button(power);
power = press(power);
print_button(power);
power = press(power);
power = press(power);
print_button(power);



    return 0;
}
Button press(Button current)
{
    if(current == ON) return OFF;
    else if(current == OFF) return ON;
}

void print_button(Button currentt)
{
    if(currentt == ON) printf("ON\n");
    else if(currentt == OFF) printf("OFF\n");
}