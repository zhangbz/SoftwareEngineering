#include <stdio.h>
#include <stdlib.h>  //exit()
#include <time.h>

int main()
{
    char cmd[128];
            
    while(1)
    {   
        printf("Please input your cmd:\n");
                          
        scanf("%s", cmd);
        //比较两个字符串，相等返回零。 strcmp(cmd, "help") == 0比!strcmp(cmd, "help")更易读。
        if(strcmp(cmd, "help") == 0)  
        {
            printf("This is help cmd!\n                 \
                    \t------------------\n              \
                    \t  help -- 帮助  \n                \
                    \t  time -- 时间  \n                \
                    \t  cal -- 日历  \n                 \
                    \t  bc -- 计算器  \n                \
                    \t  python -- python  \n            \
                    \t  ls  -- ls  \n                   \
                    \t  quit -- 退出  \n                \
                    \t  more -- 更多  \n                \
                    \t------------------\n");      //行宽控制在100个字符以内
        }
        else if(strcmp(cmd, "time") == 0)    
        {
            time_t timep;
            time (&timep);   
            printf("%s", asctime(gmtime(&timep)));
        }
        else if(strcmp(cmd, "cal") == 0)
        {
            system("cal");
        }
        else if(strcmp(cmd, "bc") == 0)
        {
            system("bc");
        }
        else if(strcmp(cmd, "ls") == 0)
        {
            system("ls -al .");
        }
        else if(strcmp(cmd, "python") == 0)
        {
            system("python");
        }
        else if(strcmp(cmd, "more") == 0)
        {
            printf("Prease input 'quit' and then input 'man cmd'\n");
        }
        else if(strcmp(cmd, "quit") == 0)
        {
            exit(0);
        }
        else
        {
            printf("Wrong cmd!\n");
        }
    }
}
