/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
#include<string.h>
int main(int argc, char *a[])
{
	//Write code here
	int TestCase,i,max,min,flag=0,set;
	int temp,j;
	char array[10][1000];
	int count[1000];
	scanf("%d",&TestCase);
    for(i=0;i<TestCase;i++)
		{
		    scanf("%s",array[i]);
		    count[i]=strlen(array[i]);
		    //printf("%s",array);
		}
    for(i=0;i<TestCase;i++)
    {
        printf("Entered strings:%s\n",array[i]);
        for(j=0;j<count[i];j++)
            {
                printf("ASCII:%d\t",array[i][j]);
            }
            printf("\n");
    }

}

