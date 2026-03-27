#include <stdio.h>
#include <stdlib.h>

// Convert Fahrenheit to Celsius
float fahrenheitToCelsius(float f)
{
    return(5.0/9.0)*(f-32);
}

// Convert Celsius to Fahrenheit
float celsiusToFahrenheit(float c)
{
    return(1.8*c)+32;
}


int main()
{
    int choice;
    float f,c;

    // Display menu
    printf("1.Fahrenhit to Celsius\n");
    printf("2.Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        // Convert Fahrenheit to Celsius
        printf("Enter Fahrenheit value: ");
        scanf("%f",&f);
        printf("%.2f F=%.2f C",f,fahrenheitToCelsius(f));
    }
    else if(choice==2)
    {
       // Convert Celsius to Fahrenheit
        printf("Enter Celsius value: ");
        scanf("%f",&c);
        printf("%.2f C=%.2f F",c,celsiusToFahrenheit(c));
    }
    else
    {
        printf("Invalid choice.\n");
    }
    return 0;
}

