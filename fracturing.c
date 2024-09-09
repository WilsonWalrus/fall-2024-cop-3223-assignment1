//********************************************************
// fracturing.c
// Author: Austin Wilson, 5689247
// Class: COP 3223, Professor Parra
// Purpose: This program calculates several aspects of a circle
// based on user inputs.
// Output: (to the command line) The results of the calculations & the points entered by the user.
// //********************************************************
#include <math.h>
#include <stdio.h>

#define PI 3.14159

//Asks for user input and returns the value.
double askForUserInput()
{
	double userInput = 0;
	scanf("%lf", &userInput);

	return userInput;
}

//Calculates the diameter of a circle given two user-specified points & returns it.
double calculateDiameter()
{
	//Variables and Inputs
	double x1 = 0, y1 = 0, x2 = 0, y2 = 0, diameter = 0;
	x1 = askForUserInput();
	x2 = askForUserInput();
	y1 = askForUserInput();
	y2 = askForUserInput();

	//Math time!
	diameter = pow(x2-x1, 2) + pow(y2-y1, 2);
	diameter = sqrt(diameter);

	//Outputs
	printf("Point #1 entered: x1 = %lf; y1 = %lf\n", &x1, &y1);
	printf("Point #2 entered: x2 = %lf; y2 = %lf\n", &x2, &y2);

	return diameter;
}

//********************************************************

//Outputs the distance between two points.
double calculateDistance()
{
		//Variables and Inputs
	double distance = 0;

	//Math time!
	distance = calculateDiameter();

	//Output
	printf("The distance between the two points is %lf\n", distance);

	return distance;
}  
//Calculates the perimeter of a circle.
double calculatePerimeter()
{
    double perimeter = 1.0, diameter = 1.0;

    //Math time!
    diameter = calculateDiameter();
    perimeter = PI * diameter;
    
    //Output
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    return 1;
}


//Calculates the area of a circle.
double calculateArea()
{
    double area = 0.0, diameter = 0.0;

    //Math time!
    diameter = calculateDiameter();
    area =(PI * pow(diameter,2));
    area = area / 4;

    //Output
    printf("The area of the city encompassed by your request is %lf\n", area);

    return 1.8;
}


//Displays the width AKA diameter of a circle.
double calculateWidth()
{
	double width = 1.0;
    width = calculateDiameter();

    //Output
    printf("The width of the city encompassed by your request is %lf\n", width);

    return 1.0;
}

//Displays the height AKA also diameter of a circle.
double calculateHeight()
{
	double height = 1.0;
    height = calculateDiameter();

    //Output
    printf("The height of the city encompassed by your request is %lf\n", height);
	
    return 1.0;
}

//********************************************************

//The main function which calls & tests the previous functions.
int main (int argc, char **argv)
{
	calculateDistance();
	calculatePerimeter();
	calculateArea ();
	calculateWidth();
	calculateHeight();

	return 0;
}