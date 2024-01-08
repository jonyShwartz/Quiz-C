#include<stdio.h>
int main()
{
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int total1,total2,total3;

    printf(" Welcome to the Game\n\n");

    printf("> Press 7 to start the game\n");
    printf("> Press 0 to quit the game\n");

    scanf("%d", &i);

    if(i == 7)
    {
        printf("The game started\n\n");
    }
    else if(i==0)
    {
        printf("The game has ended\n\n");
    }
    else{
        printf("Invalid\n\n");
    }

    if(i ==7)
    {
        printf("1) which onew is the first search engine in internet?\n\n");
        printf("1) Google\n");
        printf("2) Archie\n");
        printf("3) Wais\n");
        printf("4) Altavista\n");

        printf("Enter Your Answer : ");
        scanf("%d" , & ans1);


        if(ans1 == 2)
        {
            printf("Correct answer\n");
            point1 = 5;
            printf("You have scored %d point\n",point1);
        }
        else{
            printf("Wrong answer\n");
            point01 = 0;
            printf("You have scored %d points\n",point01);
        }
  
        printf("1) which onew is the first web browser?\n\n");
        printf("1) internet explorer\n");
        printf("2) mosaic\n");
        printf("3) mozilla\n");
        printf("4) nexus\n");

        printf("Enter Your Answer : ");
        scanf("%d" , & ans2);


        if(ans2 == 4)
        {
            printf("Correct answer\n");
            point2 = 5;
            printf("You have scored %d point\n",point1);
        }
        else{
            printf("Wrong answer\n");
            point02 = 0;
            printf("You have scored %d points\n",point01);
        }

        printf("1) first colmputer virus is known as?\n\n");
        printf("1) Rabbit\n");
        printf("2) creeper virus\n");
        printf("3) elk cloner\n");
        printf("4) sca virus\n");

        printf("Enter Your Answer : ");
        scanf("%d" , & ans3);


        if(ans3 == 2)
        {
            printf("Correct answer\n");
            point3 = 5;
            printf("You have scored %d point\n",point1);
        }
        else{
            printf("Wrong answer\n");
            point03 = 0;
            printf("You have scored %d points\n",point01);
        }

        printf("1) firewall in computer is used for?\n\n");
        printf("1) security\n");
        printf("2) data transmition\n");
        printf("3) monitoring\n");
        printf("4) athentication\n");

        printf("Enter Your Answer : ");
        scanf("%d" , & ans4);


        if(ans4 == 1)
        {
            printf("Correct answer\n");
            point4 = 5;
            printf("You have scored %d point\n",point1);
        }
        else{
            printf("Wrong answer\n");
            point04 = 0;
            printf("You have scored %d points\n",point01);
        }

        printf("1) which of the following is not a database management software?\n\n");
        printf("1) Mysql\n");
        printf("2) Oracle\n");
        printf("3) cobal\n");
        printf("4) Sybase\n");

        printf("Enter Your Answer : ");
        scanf("%d" , & ans5);


        if(ans5 == 3)
        {
            printf("Correct answer\n");
            point5 = 5;
            printf("You have scored %d point\n",point1);
        }
        else{
            printf("Wrong answer\n");
            point05 = 0;
            printf("You have scored %d points\n",point01);
        }

    }


}