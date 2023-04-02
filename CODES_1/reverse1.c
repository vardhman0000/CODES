#include<stdio.h>
#include<math.h>
int main(){
    int num, num1, rem=0, orig, count=0, a, power;
    float sum = 0.00 ;
    printf("Enter a Number : ");
    scanf("%d",&num);

    orig = num ;

    while(orig>0){
        orig=orig/10 ;
        count++ ;
    }

    //printf("COUNT : %d\n",(int)count);
    //printf("NUM : %d\n",(int)num);

    for(a=count; a>0; a--){     // PARENT LOOP
        //for(b=count; b>0; b--){    // for remainder
            rem = num%10 ;
            //printf("\nREAMINDER : %d\n", rem);

            float power = pow(10,a-1);
            //printf("POWER OF 10 : %f\n",power);

            num = num/10 ;
            //printf("UPDATED NUM : %d\n",num);

            num1 = rem*power;
            //printf("NUM1 : %d\n", num1);

            sum = sum + (float)num1;
            //printf("SUM : %d",(int)sum);
        //}
    }

    printf("REVERSE OF NUMBER IS : %d", (int)sum);
}
