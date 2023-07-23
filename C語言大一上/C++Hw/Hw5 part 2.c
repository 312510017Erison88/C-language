#include <stdio.h>
 
int main(){
    int a[3][3], b[3][3], sum[3][3];
 	void add (int[3][3] ,int [3][3],int [3][3]);
   
    add(a,b,sum);
 
    return 0;
}
void add(int a[3][3],int b[3][3],int sum[3][3])
{
	int i, j;
	printf("\n輸入第一個矩陣:\n");
 
    for(i=0; i<3; ++i)
        for(j=0; j<3; ++j)
        {
            printf("元素 a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
 
    printf("輸入第二個矩陣\n");
    for(i=0; i<3; ++i)
        for(j=0; j<3; ++j)
        {
            printf("元素 a%d%d: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    // 相加
 
    for(i=0;i<3;++i)
        for(j=0;j<3;++j)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
 
    // 
    printf("\n二矩陣相加結果: \n\n");
 
    for(i=0;i<3;++i)
        for(j=0;j<3;++j)
        {
            printf("%d   ",sum[i][j]);
            if(j==3-1)
            {
                printf("\n\n");
            }
        }
	
	
}
