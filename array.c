
#include <stdio.h>
#include <string.h>

int main()
{
char arr [] = "Omelette Du fromage";
int x = 0;

while (arr[x] != '\0' & x < 258)
{
    x++;
}

if(x >= 257)
{
    printf("No Null terminator!");
}
//while(x<244)
//{
    x++;
arr[strlen(arr)] = '!';
arr[strlen(arr)] = '!';
printf("%d\n",strlen(arr));
printf("%s\n", arr);
//}
    x++;
arr[strlen(arr)] = '!';
arr[strlen(arr)] = '!';
printf("%d\n",strlen(arr));
printf("%s\n", arr);


}