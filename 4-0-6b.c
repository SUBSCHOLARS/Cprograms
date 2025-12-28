#include<stdio.h>
#include<string.h>
int main(){
    int Temp[30],Humi[51],i,j;
    float Index[51][30];
    char result[51][30][15];
    char per='%';
    char celc='C';
    for(i=0; i<30; i++)
    {
        Temp[i]=i+10;
    }
    for(i=0; i<51; i++)
    {
        Humi[i]=i+50;
    }
    for(i=0; i<51; i++)
    {
        for(j=0; j<30; j++)
        {
            Index[i][j]=0.81*Temp[j]+0.01*Humi[i]*(0.99*Temp[j]-14.3)+46.3;
        }
    }
    for(i=0; i<51; i++)
    {
        for(j=0; j<30; j++)
        {
            if(Index[i][j]<=69)
            {
                strcpy(result[i][j],"⚪︎");
            }
            else if(Index[i][j]<=74)
            {
                strcpy(result[i][j],"△ ");
            }
            else if(Index[i][j]<=79)
            {
                strcpy(result[i][j],"▲ ");
            }
            else if(Index[i][j]<=85)
            {
                strcpy(result[i][j],"× ");
            }
            else
            {
                strcpy(result[i][j],"限");
            }
        }
    }
    printf("湿度・温度と不快指数\n");
	printf("      ");
	for (j=0;j<30;j++)
    {
		printf("%d%c   ",Temp[j],celc);
	}
	printf("\n");
	printf("    ");
	for (j=0;j<30;j++)
    {
		printf("------");
	}
	printf("\n");

	for (i=0;i<51;i++)
    {
		printf("%d%c|",Humi[i],per);
		for (j=0;j<30;j++)
        {
			printf(" %5.2f",Index[i][j]);
		}
		printf("\n");
	}
	printf("\n湿度・温度と不快指数の度合い\n");
    printf("    ");
    for (j=0;j<30;j++)
    {
		printf("  %d ",Temp[j]);
	}
	printf("\n");
	printf("    ");
	for (j=0;j<30;j++)
    {
		printf("-----");
	}
	printf("\n");

	for (i=0;i<51;i++)
    {
		printf("%d%c|",Humi[i],per);
		for (j=0;j<30;j++)
        {
			printf("  %s ",result[i][j]);
		}
		printf("\n");
	}
}