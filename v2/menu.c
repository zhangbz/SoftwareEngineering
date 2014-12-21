#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

int Help();
int Time();
int Cal();
int Bc();
int Python();
int Ls();
int Quit();

#define CMD_MAX_LEN 128
#define DESC_LEN    1024
#define CMD_NUM     10

/* menu program */

static tDataNode head[] = 
{
    {"help", "this is help cmd!", Help, &head[1]},
    {"time", "this is time cmd!", Time, &head[2]},
    {"cal", "this is cal cmd!", Cal, &head[3]},
    {"bc", "this is bc cmd!", Bc, &head[4]},
    {"python", "this is python cmd!", Python, &head[5]},
    {"ls", "this is ls cmd!", Ls, &head[6]},
    {"quit", "this is quit cmd!", Quit, &head[7]},
    {"version", "menu program v2.0", NULL, NULL}
};

int main()
{
    /* cmd line begins */
    while(1)
    {
        char cmd[CMD_MAX_LEN];
        printf("Input a cmd number > ");
        scanf("%s", cmd);
        tDataNode *p = FindCmd(head, cmd);
        if( p == NULL )
        {
            printf("This is a wrong cmd!\n");
           continue;
        }
        printf("%s - %s\n", p->cmd, p->desc);
        if(p->handler != NULL)
        {
            p->handler();
        }
    }
}

int Help()
{
    ShowAllCmd(head);
    return 0;
}
int Time()
{
    system("date");
    return 0;
}
int Cal()
{
    system("cal");
    return 0;
}
int Bc()
{
    system("bc");
    return 0;
}
int Python()
{
    system("python");
    return 0;
}
int Ls()
{
    system("ls");
    return 0;
}
int Quit()
{
    exit(0);
}
