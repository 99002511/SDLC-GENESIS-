#include <stdio.h>
#include "Multicalc.h"

int add(int num1,int num2)
{
    return num1+num2;
}
int sub(int num1, int num2)
{
    return num1-num2;
}
int mult(int num1,int num2)
{
    return num1*num2;
}
int divide(int num1,int num2)
{
    if(num2==0)
    {
        return -1;
    }
    else
        return num1/num2;
}
int power(int num1,int num2)
{
    int result=1;
    while (num2 != 0) {
        result *= num1;
        --num2;
    }
    return result;
}
double cm_inch(int num1)
{
    return num1*0.393701;
}
double inch_cm(int num1)
{
    return num1*2.54;
}
double feat_metre(int num1)
{
    return num1*0.3048;
}
double metre_feat(int num1)
{
    return num1*3.28084;
}
double metre_yard(int num1)
{
    return num1*1.09361;
}
double yard_metre(int num1)
{
    return num1*0.9144;
}
double mile_km(int num1)
{
    return num1*1.60934;
}
double km_mile(int num1)
{
    return num1*0.621371;
}
double mile_metre(int num1)
{
    return num1*1609.34;
}
double metre_mile(int num1)
{
    return num1*0.000621371;
}
double acre_sqrmtr(int num1)
{
    return num1*4046.86;
}
double sqrmtr_acre(int num1)
{
    return num1*0.000247105;
}
double galon_litre(int num1)
{
    return num1*3.78541;
}
double litre_galon(int num1)
{
    return num1*0.264172;
}
double kmph_mps(int num1)
{
    return num1*0.277778;
}
double mps_kmph(int num1)
{
    return num1*3.6;
}
double kilogram_pounds(int num1)
{
    return num1*2.20462;
}
double pounds_kilogram(int num1)
{
    return num1*0.453592;
}
double KilometresPerLitre_MilesPerLitre(int num1)
{
    return num1*2.35215;
}
double MilesPerLitre_KilometresPerLitre(int num1)
{
    return num1*0.425144;
}
 