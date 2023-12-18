# include<stdio.h>
typedef struct Time
{
    /* data */
    int hours;
    int minutes;
    int seconds;
}Time;


void add( Time t1,  Time t2)
{
    int h = t1.hours+ t2.hours ;

    int m = t1.minutes+ t2.minutes; 
    if (m>=59)
    {
        /* code */
        m = m-60;
        h++;
    }

    int s = t1.seconds+ t2.seconds; 
    if (s>=59)
    {
        /* code */
        s = s-60;
        m++;
    }
    printf("%d %d %d", h, m, s);
    
    
    // printf("%d", g);
}
void main(){
    Time t1, t2;
    printf("Enter T1: ");
    scanf("%d%d%d", &t1.hours, &t1.minutes, &t1.seconds);
    printf("Enter T2: ");
    scanf("%d%d%d", &t2.hours, &t2.minutes, &t2.seconds);
    add(t1, t2);
}