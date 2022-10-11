#include <stdio.h>
float ctofconversion(float c);
float ftocconversion(float f );
float ktocconversion(float k);
float ctokconversion(float a);

int main() {
    float cel;
    float far;
    float kel;
    float celk;
    printf("Temperature conversion:::\n Press(1/2/3/4) \n 1=celsius to fahrenhiet \n 2=fahrenhiet to celsius \n 3=kelvin to celsius \n 4=celsius to kelvin :::\n");
    int pres;
    scanf("%d",&pres);
    printf("Thank you!!,you have pressed: %d\n",pres);
    if(pres==1)
    {
    printf("Enter celsius value:");
    scanf("%f", &cel);
    ctofconversion(cel);
    }
    else if(pres==2) 
    {
     printf("Enter fahrenhiet value:");
     scanf("%f", &far); 
     ftocconversion(far);
    }     
    else if(pres==3)
   {  
    printf("Enter kelvin value:");
    scanf("%f", &kel);
    ktocconversion(kel);
    }
    else if(pres==4)
    {
      printf("Enter celsius value:");
      scanf("%f",&celk);
      ctokconversion(celk);
    }
    else {
        printf("Wrong choice!! Try again");
    }

    return 0;
}
float ctofconversion(float c) {
float ctof= c*(9.0/5.0)+32;
printf("The value in fahrenhiet will be: %f", ctof);
}
float ftocconversion(float f) {
    float ftoc=(f-32)*5/9;
printf("The value in celsius will be:%f", ftoc);

}
float ktocconversion(float k) {
    float ktoc= k-273.15;
    printf("The value in celsius will be:%f", ktoc);
}
float ctokconversion(float a) {
    float ctok=a + 273.15;
printf("The value in kelvin will be:%f", ctok);
}


