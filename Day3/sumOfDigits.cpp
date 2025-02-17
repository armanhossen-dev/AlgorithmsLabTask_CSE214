// 10
// 123 = 1+2+3 = 6
#include <stdio.h>
int funSum(int num)
{
    int sum = 0;
    while (1)
    {
        if (num % 10 == 0){
            sum +=num % 10;
            break;
        }else{
            sum += num % 10;
            num = num/10;
        }
    }
    return sum;
}

int main()
{
    int num;
    scanf("%d", &num);
    int sum = funSum(num);
    printf("%d\n",sum);
    return 0;
}