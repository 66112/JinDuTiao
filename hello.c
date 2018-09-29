#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "color.h"
int main()
{
    int i=0;
    char bar[102];
	memset(bar,0,sizeof(bar));
    const char* lable="|/-\\";
    while(i<=100)
    {
		//printf("[%-100s][%d%%][%c]\r",bar,i,lable[i%4]);
	//	fflush(stdout);
	//	bar[i++]='#';
	//	sleep(1);

		printf(RED);
		printf("[%-100s][%d%%][%c]\r",bar,i,lable[i%4]);
	//	printf(YELLOW);
	//	printf("[%-d%%]",i);
	//	printf(RED);
	//	printf("[%-c]",lable[i%4]);
    	fflush(stdout);
		bar[i++]='#';
		usleep(10000);
    }
	printf("\033[0m");
    printf("\n");
    printf("Complete!\n");
    return 0;
   
}
