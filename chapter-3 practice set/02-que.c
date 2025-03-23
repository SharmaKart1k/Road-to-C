// To know if a student is pass or fail? 
#include <stdio.h>
int main()
{
    float maths, eng, phy, chem, pe, obtained, total;
    printf("enter maths marks: \n");
    scanf("%f", &maths);
    printf("enter eng marks: \n");
    scanf("%f", &eng);
    printf("enter phy marks: \n");
    scanf("%f", &phy);
    printf("enter chem marks: \n");
    scanf("%f", &chem);
    printf("enter pe marks: \n");
    scanf("%f", &pe);
    obtained = maths + eng + phy + chem + pe;
    total = obtained / 500 * 100;
    printf("The percentage scored is %.2f\n", total);
    if (maths > 33 || eng > 33 || phy > 33 || chem > 33 || pe > 33)
    {
        printf("you've scored more than 33 in all subs,passed in all the subjects");
    }
    else if (total > 40)
    {
        printf("result=pass");
    }
    else
    {
        printf("result=failed");
    }
    return 0;
}