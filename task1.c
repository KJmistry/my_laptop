#include <stdio.h>
#include <string.h>
#include <math.h>

int main() 
{
    char str[100],opr[100];
    int arr[100];
    static int lb=0,index=0,opr_index=0;
    scanf("%s",&str);
    //fgets(str,100,stdin);   
    for(size_t i=0;i<strlen(str)+1;i++)
    {
        //printf("_flag_%d___%d\n",i,str[i]);
        if(str[i]=='+'||str[i]=='-'||str[i]=='/'||str[i]=='*'||str[i]==0)
        {   
            opr[opr_index]=str[i];
            opr_index++;
            //printf("%c====%d\n",str[i],i); 
            //int p=i-lb
            //int dec=pow(10,p-1),value=0;
            int dec=1,value=0;
            for(int k=i-1;k>=lb;k--)
            {   
                //printf("%c====%d\n",str[k],k);
                value+=(str[k]-'0')*dec;
                //printf("%d\n",value);
                dec*=10;
            }
            arr[index]=value;
            index++;
            lb=i+1;
        }
    
    }
            
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
    // for(int i=0;i<5;i++)
    // {
    //      printf("%c--->%d\n",opr[i],opr[i]);
    // }
    static int ans;
    ans=arr[0];
    for(int i=0;i<index-1;i++)
    {
        switch (opr[i])
        {
            case 43://+
              ans+=arr[i+1];// statements
              printf("sum\n");
              break;
            case 45://-
              ans-=arr[i+1];// statements
              printf("sub\n");
              break;
            case 47://*
              ans/=arr[i+1];// statements
              printf("div\n");
              break;
            case 42:///
              ans*=arr[i+1];// statements
              printf("mul\n");
              break;
        }
    }
    printf("Final Result : %d\n",ans);
    
    return 0;
}

