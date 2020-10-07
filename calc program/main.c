#include <stdio.h>
#include <math.h>
#include "Multicalc.h"

int main()
{
    printf("Choose a operation you want from 1 to 25\n");
    int selection;
    scanf("%d",&selection);
    int num1,num2,output;
    if(selection<5)
    {
      printf("Type 2 numbers\n");
      scanf("%d%d",&num1,&num2);
    }
    else
    {
        printf("Type 1 number\n");
        scanf("%d",&num1);
    }

    switch(selection)
    {
    case 1:
        output=add(num1,num2);
        break;
    case 2:
        output=sub(num1,num2);
        break;
    case 3:
        output=mult(num1,num2);
        break;
    case 4:
        output=divide(num1,num2);
        break;
    case 5:
        output=power(num1,num2);
        break;
    case 6:
        output=cm_inch(num1);
        break;
    case 7:
        output=inch_cm(num1);
        break;
    case 8:
        output=feat_metre(num1);
        break;
    case 9:
        output=metre_feat(num1);
        break;
    case 10:
        output=yard_metre(num1);
        break;
    case 11:
        output=metre_yard(num1);
        break;
    case 12:
        output=mile_km(num1);
        break;
    case 13:
        output=km_mile(num1);
        break;
    case 14:
        output=mile_metre(num1);
        break;
    case 15:
        output=metre_mile(num1);
        break;
    case 16:
        output=acre_sqrmtr(num1);
        break;
    case 17:
        output=sqrmtr_acre(num1);
        break;
    case 18:
        output=galon_litre(num1);
        break;
    case 19:
        output=litre_galon(num1);
        break;
    case 20:
        output=kmph_mps(num1);
        break;
    case 21:
        output=mps_kmph(num1);
        break;
    case 22:
        output=kilogram_pounds(num1);
        break;
    case 23:
        output=pounds_kilogram(num1);
        break;
    case 24:
        output=KilometresPerLitre_MilesPerLitre(num1);
        break;
    case 25:
        output=MilesPerLitre_KilometresPerLitre(num1);
        break;
    }
    printf("%d",output);
}