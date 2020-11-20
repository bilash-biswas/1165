#include<stdio.h>
void prime(int num){
    int count=0,i;
    for(i=2;i<=(int)(num/2);i++){
        if(num%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("%d eh primo\n",num);
    }else{
        printf("%d nao eh primo\n",num);
    }

}

int main()
{
    int n,s=0,i,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        prime(a);
    }

    return 0;
}
