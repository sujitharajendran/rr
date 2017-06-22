 #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>

    int digit(char);
    int main(){

        char as[1000];
        int j=0;
        long int g =0;
        scanf("%s",as);

        while(as[j])
        {
             if(digit(as[j])>=digit(as[j+1]))
             {
                 g=g+digit(as[j]);
             }
             else
             {
                 g=g+(digit(as[j+1])-digit(as[j]));
                 j++;
             }
             j++;
        }
        printf("%ld",g);
        return 0;
    }

    int digit(char c)
    {
        int g=0;
        switch(c)
        {
             case 'I':g= 1;break;
             case 'V':g=5; break;
             case 'X':g= 10;break;
             case 'L':g= 50;break;
             case 'C':g= 100;break;
             case '\0':g=0;break;
             default:g=-1;
        }
        return g;
    }

