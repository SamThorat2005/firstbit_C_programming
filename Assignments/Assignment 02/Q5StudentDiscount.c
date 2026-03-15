/*Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount.*/

#include<stdio.h>
int main()
{
    float actualprice;
    float purchaseprice;
    float discount;
    char isStudent;

    printf("Enter customer is student or not(Y/N):");
    scanf(" %c",&isStudent);


    printf("Enter the price:");
    scanf("%f",&actualprice);


    if(isStudent =='N')
    {
        if(actualprice>600)
        {
            discount=(15*actualprice)/100;
            purchaseprice=actualprice-discount;
            printf("after discount final price will be:%f",purchaseprice);
        }
        else
        {
            printf("no discount");
            printf("\nfinal price will be:%f",actualprice);
        }
    }
    else
    {
        if(actualprice>500)
        {
            discount=(20*actualprice)/100;
            purchaseprice=actualprice-discount;
            printf("after discount final price will be:%f",purchaseprice);
        }
        else
        {
            discount=(10*actualprice)/100;
            purchaseprice=actualprice-discount;
            printf("after discount final price will be:%f",purchaseprice);
        }
    }

}