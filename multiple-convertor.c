#include <stdio.h>
#include <stdlib.h>

double metersToCentimeters(double meters)
{
    return meters * 100;
}

double centimetersToMeters(double centimeters)
{
    return centimeters / 100;
}

double kilometersToMeters(double kilometers)
{
    return kilometers * 1000;
}

double metersToKilometers(double meters)
{
    return meters / 1000;
}

double kilogramsToPoundal(double kilograms)
{
    return kilograms * 9.80665;
}

double kilogramsToGrams(double kilograms)
{
    return kilograms * 1000;
}

double gramsToKilograms(double grams)
{
    return grams / 1000;
}

void lengthConversion()
{
    int choice;
    double value;

    printf("Length Conversion Options:\n");
    printf("1. Kilometers to Meters\n");
    printf("2. Meters to Centimeters\n");
    printf("3. Meters to Kilometers\n");
    printf("4. Centimeters to Meters\n");
    printf("5. Exit\n");
    printf("Enter your choice (1/2/3/4/5): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter value in kilometers: ");
        scanf("%lf", &value);
        printf("%.2lf kilometers = %.2lf meters\n", value, kilometersToMeters(value));
        break;
    case 2:
        printf("Enter value in meters: ");
        scanf("%lf", &value);
        printf("%.2lf meters = %.2lf centimeters\n", value, metersToCentimeters(value));
        break;
    case 3:
        printf("Enter value in meters: ");
        scanf("%lf", &value);
        printf("%.2lf meters = %.2lf kilometers\n", value, metersToKilometers(value));
        break;
    case 4:
        printf("Enter value in centimeters: ");
        scanf("%lf", &value);
        printf("%.2lf centimeters = %.2lf meters\n", value, centimetersToMeters(value));
        break;
    case 5:
        break;
    default:
        printf("Invalid choice. Please enter a valid option.\n");
        break;
    }
}

void massConversion()
{
    int choice;
    double value;

    printf("Mass Conversion Options:\n");
    printf("1. Kilograms to Poundal\n");
    printf("2. Kilograms to Grams\n");
    printf("3. Grams to Kilograms\n");
    printf("4. Exit\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter value in kilograms: ");
        scanf("%lf", &value);
        printf("%.2lf kilograms = %.2lf poundal\n", value, kilogramsToPoundal(value));
        break;
    case 2:
        printf("Enter value in kilograms: ");
        scanf("%lf", &value);
        printf("%.2lf kilograms = %.2lf grams\n", value, kilogramsToGrams(value));
        break;
    case 3:
        printf("Enter value in grams: ");
        scanf("%lf", &value);
        printf("%.2lf grams = %.2lf kilograms\n", value, gramsToKilograms(value));
        break;
    case 4:
        // Exit
        break;
    default:
        printf("Invalid choice. Please enter a valid option.\n");
        break;
    }
}

void temperatureConversion()
{
    int choice;
    double temperature, convertedTemperature;

    printf("Temperature Conversion Options:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Back to Main Menu\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temperature);
        convertedTemperature = (temperature * 9 / 5) + 32;
        printf("%.2lf Celsius = %.2lf Fahrenheit\n", temperature, convertedTemperature);
        break;
    case 2:
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temperature);
        convertedTemperature = (temperature - 32) * 5 / 9;
        printf("%.2lf Fahrenheit = %.2lf Celsius\n", temperature, convertedTemperature);
        break;
    case 3:
        break;
    default:
        printf("Invalid choice. Please enter a valid option.\n");
        break;
    }
}

void timeConversion()
{
    int choice;
    double time, convertedTime;

    printf("Time Conversion Options:\n");
    printf("1. Hours to Minutes\n");
    printf("2. Minutes to Hours\n");
    printf("3. Hours to Seconds\n");
    printf("4. Seconds to Hours\n");
    printf("5. Minutes to Seconds\n");
    printf("6. Seconds to Minutes\n");
    printf("7. Back to Main Menu\n");
    printf("Enter your choice (1/2/3/4/5/6/7): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter time in hours: ");
        scanf("%lf", &time);
        convertedTime = time * 60;
        printf("%.2lf hours = %.2lf minutes\n", time, convertedTime);
        break;
    case 2:
        printf("Enter time in minutes: ");
        scanf("%lf", &time);
        convertedTime = time / 60;
        printf("%.2lf minutes = %.2lf hours\n", time, convertedTime);
        break;
    case 3:
        printf("Enter time in hours: ");
        scanf("%lf", &time);
        convertedTime = time * 3600;
        printf("%.2lf hours = %.2lf seconds\n", time, convertedTime);
        break;
    case 4:
        printf("Enter time in seconds: ");
        scanf("%lf", &time);
        convertedTime = time / 3600;
        printf("%.2lf seconds = %.2lf hours\n", time, convertedTime);
        break;
    case 5:
        printf("Enter time in minutes: ");
        scanf("%lf", &time);
        convertedTime = time * 60;
        printf("%.2lf minutes = %.2lf seconds\n", time, convertedTime);
        break;
    case 6:
        printf("Enter time in seconds: ");
        scanf("%lf", &time);
        convertedTime = time / 60;
        printf("%.2lf seconds = %.2lf minutes\n", time, convertedTime);
        break;
    case 7:
        break;
    default:
        printf("Invalid choice. Please enter a valid option.\n");
        break;
    }
}

void volumeConversion()
{
    int choice;
    double volume, convertedVolume;

    printf("Volume Conversion Options:\n");
    printf("1. Liters to Milliliters\n");
    printf("2. Milliliters to Liters\n");
    printf("3. Liters to Cubic Meters\n");
    printf("4. Cubic Meters to Liters\n");
    printf("5. Milliliters to Cubic Meters\n");
    printf("6. Cubic Meters to Milliliters\n");
    printf("7. Back to Main Menu\n");
    printf("Enter your choice (1/2/3/4/5/6/7): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter volume in liters: ");
        scanf("%lf", &volume);
        convertedVolume = volume * 1000;
        printf("%.2lf liters = %.2lf milliliters\n", volume, convertedVolume);
        break;
    case 2:
        printf("Enter volume in milliliters: ");
        scanf("%lf", &volume);
        convertedVolume = volume / 1000;
        printf("%.2lf milliliters = %.2lf liters\n", volume, convertedVolume);
        break;
    case 3:
        printf("Enter volume in liters: ");
        scanf("%lf", &volume);
        convertedVolume = volume / 1000;
        printf("%.2lf liters = %.6lf cubic meters\n", volume, convertedVolume);
        break;
    case 4:
        printf("Enter volume in cubic meters: ");
        scanf("%lf", &volume);
        convertedVolume = volume * 1000;
        printf("%.6lf cubic meters = %.2lf liters\n", volume, convertedVolume);
        break;
    case 5:
        printf("Enter volume in milliliters: ");
        scanf("%lf", &volume);
        convertedVolume = volume / 1000000;
        printf("%.2lf milliliters = %.6lf cubic meters\n", volume, convertedVolume);
        break;
    case 6:
        printf("Enter volume in cubic meters: ");
        scanf("%lf", &volume);
        convertedVolume = volume * 1000000;
        printf("%.6lf cubic meters = %.2lf milliliters\n", volume, convertedVolume);
        break;
    case 7:
        break;
    default:
        printf("Invalid choice. Please enter a valid option.\n");
        break;
    }
}

void areaConversion()
{
    int choice;
    double area, convertedArea;

    printf("Area Conversion Options:\n");
    printf("1. Square Meters to Square Centimeters\n");
    printf("2. Square Centimeters to Square Meters\n");
    printf("3. Back to Main Menu\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter area in square meters: ");
        scanf("%lf", &area);
        convertedArea = area * 10000;
        printf("%.2lf square meters = %.2lf square centimeters\n", area, convertedArea);
        break;
    case 2:
        printf("Enter area in square centimeters: ");
        scanf("%lf", &area);
        convertedArea = area / 10000;
        printf("%.2lf square centimeters = %.2lf square meters\n", area, convertedArea);
        break;
    case 3:
        break;
    default:
        printf("Invalid choice. Please enter a valid option.\n");
        break;
    }
}

void numberConversion()
{
    int choice;
    long long decimalNumber;
    char binaryNumber[64];
    char hexNumber[64];

    printf("Number Conversion Options:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Hexadecimal\n");
    printf("3. Binary to Decimal\n");
    printf("4. Hexadecimal to Decimal\n");
    printf("5. Back to Main Menu\n");
    printf("Enter your choice (1/2/3/4/5): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter decimal number: ");
        scanf("%lld", &decimalNumber);
        itoa(decimalNumber, binaryNumber, 2);
        printf("%lld (Decimal) = %s (Binary)\n", decimalNumber, binaryNumber);
        break;
    case 2:
        printf("Enter decimal number: ");
        scanf("%lld", &decimalNumber);
        sprintf(hexNumber, "%llX", decimalNumber);
        printf("%lld (Decimal) = 0x%s (Hexadecimal)\n", decimalNumber, hexNumber);
        break;
    case 3:
        printf("Enter binary number (up to 63 digits): ");
        scanf("%s", binaryNumber);
        decimalNumber = strtol(binaryNumber, NULL, 2);
        printf("%s (Binary) = %lld (Decimal)\n", binaryNumber, decimalNumber);
        break;
    case 4:
        printf("Enter hexadecimal number (without '0x' prefix): ");
        scanf("%s", hexNumber);
        decimalNumber = strtol(hexNumber, NULL, 16);
        printf("0x%s (Hexadecimal) = %lld (Decimal)\n", hexNumber, decimalNumber);
        break;
    case 5:
        break;
    default:
        printf("Invalid choice. Please enter a valid option.\n");
        break;
    }
}

char *morseCode[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
                     "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-",
                     "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--",
                     "....-", ".....", "-....", "--...", "---..", "----."};

char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

void textToMorseCode()
{
    char text[100];
    printf("Enter text to convert to Morse code (A-Z, 0-9, space, and punctuations only):\n");
    scanf(" %[^\n]", text);

    printf("Text: %s\n", text);
    printf("Morse Code: ");

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            printf(" / ");
        }
        else
        {
            int index = -1;
            if (text[i] >= 'A' && text[i] <= 'Z')
            {
                index = text[i] - 'A';
            }
            else if (text[i] >= '0' && text[i] <= '9')
            {
                index = text[i] - '0' + 26;
            }
            if (index != -1)
            {
                printf("%s ", morseCode[index]);
            }
        }
    }
    printf("\n");
}

void morseCodeToText()
{
    char morse[1000];
    printf("Enter Morse code to convert to text (use space to separate Morse characters, '/' for word spacing):\n");
    scanf(" %[^\n]", morse);

    printf("Morse Code: %s\n", morse);
    printf("Text: ");

    char *token = strtok(morse, " ");
    while (token != NULL)
    {
        if (strcmp(token, "/") == 0)
        {
            printf(" ");
        }
        else
        {
            int found = 0;
            for (int i = 0; i < 36; i++)
            {
                if (strcmp(token, morseCode[i]) == 0)
                {
                    printf("%c", alphabet[i]);
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("?");
            }
        }
        token = strtok(NULL, " ");
    }
    printf("\n");
}

void morseCodeConversion()
{
    int choice;

    printf("Morse Code Conversion Options:\n");
    printf("1. Text to Morse Code\n");
    printf("2. Morse Code to Text\n");
    printf("3. Back to Main Menu\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        textToMorseCode();
        break;
    case 2:
        morseCodeToText();
        break;
    case 3:
        break;
    default:
        printf("Invalid choice. Please enter a valid option.\n");
        break;
    }
}

void dashBoard()
{
    int press;
    while (1)
    {

        printf("\t\t\t\t 1. Length Converter\n");
        printf("\t\t\t\t 2. Mass Converter\n");
        printf("\t\t\t\t 3. Temperature Converter\n");
        printf("\t\t\t\t 4. Time Converter\n");
        printf("\t\t\t\t 5. Volume Converter\n");
        printf("\t\t\t\t 6. Area Converter\n");
        printf("\t\t\t\t 7. Number Converter\n");
        printf("\t\t\t\t 8. Morse code Converter\n");
        printf("\t\t\t\t 9. Exit\n");
        printf("\t\t\t\t Press any key from 1 to 10.....\n");
        scanf("%d", &press);
        system("cls");
        switch (press)
        {
        case 1:
            lengthConversion();
            break;
        case 2:
            massConversion();
            break;
        case 3:
            temperatureConversion();
            break;
        case 4:
            timeConversion();
            break;
        case 5:
            volumeConversion();
            break;
        case 6:
            areaConversion();
            break;
        case 7:
            numberConversion();
            break;
        case 8:
            morseCodeConversion();
            break;
        case 9:
            exit(0);
        default:
            printf("\t\t\t\t Invalid choice. Please try again.\n");
            break;
        }
    }
}

int main()
{
    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t\t WELCOME CONVERTER APP \n");
    printf("\n\n\n\t\t\t\t\t\tPress Enter to proceed");

    while (getchar() != '\n')
        ;
    system("CLS");
    dashBoard();
    return 0;
}