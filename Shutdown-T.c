#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour = 0;
    int minute = 0;
    int sec = 0;
    char buf[200];
    printf("shutterDowner-OmarAhmed\n");
    printf("enter time to shutdown device\: \nformat\: hour(space)minute\n");
    scanf("%d",&hour);
    scanf("%d",&minute);
    sec = (hour*60*60)+(minute*60);
    sprintf(buf,"shutdown /s /t %d",sec);
    int err =420;
    err = system(buf);
    if(err==-1)
    printf("command failed please try again\n");
    else if (err!=420)
    printf("command success\n");
    printf("to cancel press 'c' to exit press any key\n");
    char key = getch();
    err =420;
    if(key == 'c'||key == 'C')
    err = system("shutdown /a");
    else 
    return 0;
    if(err==-1)
    printf("cancel failed please try again\n");
    else if (err!=420)
    printf("cancelled sucessfully\n");
    printf("press any key to exit :)");
    key = getch();

    return 0;
}