#include <stdio.h>
// 1 -3 5 -7 upto n
int main()
{
    /*  int n;
      scanf("%d",&n);
      int sum=0;
     for(int i=1;;i++){
      int a=(2*i)-1;
      if(i%2==0)
      a=-a;
      sum=sum+a;
      if(a==n)
      break;
     }
     printf("%d",sum);

*/
// 1 -3 5 -7 upto n
    int n;
    printf("sum upto?\n");
    scanf("%d", &n);
    int sum = 0, a = 1;
    for (int i = 1;; i++)
    {
        a = a + 2;
        if (i % 2 == 0)
        {
            a = -a;
        }
       
        sum = sum + a;
         
        if (a ==n){
            break;
        }
        if (i % 2 == 0)
        {
            a = -a;
        }
    }
    printf("sum = %d",sum);

    return 0;
}