#include<stdio.h>
int main()
{
    int started = 0;
    char command;
    printf("Enter 'h' for help\n");
   loop_1:
        while(started == 0)
    {
        printf("Enter command : ");
        scanf(" %c", &command);
        if(command == 'h')
        {
            printf("s > start\np > stop\nq > quit\n");
            continue;
        }
        else if(command == 'p')
        {
            printf("car already stopped\n");
            continue;
        }
        else if(command == 's')
        {
            started = 1;
            printf("Started\n");
        }
        goto loop_2;
        if(command == 'q')
            break;
    }
    loop_2:
        while(started == 1)
        {
            printf("Enter command : ");
            scanf(" %c", &command);
            if(command == 's')
            {
                printf("Car already started\n");
                continue;
            }
            else if(command == 'p')
            {
                started = 0;
                printf("stopped\n");
            }
            goto loop_1;
            if(command == 'q')
                break;
        }
    return 0;
}