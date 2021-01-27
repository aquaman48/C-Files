#include <stdio.h>
#include <string.h>

typedef struct cars {
	int year;
	int miles;
	char make[10];
	char model[10];
}car;

void processCar(car*); //prototype of with alias name 'c'

int main()
{
	//create instance of employee structure
	car car1 = { 0, 0, 0 };//initialize the members
	car* ptrCar;
	ptrCar = &car1;
	
	processCar(ptrCar); //pass structure by value

	printf("\nYear: %d\n", ptrCar->year);
	printf("Make: %s\n", ptrCar->make);
	printf("Model: %s\n", ptrCar->model);
	printf("Miles: %d\n", ptrCar->miles);

	return 0;

}

void processCar(car* c) //receives a copy of a structure
{
	c->year = 2002;
	strcpy_s(c->make, 10, "Ford");
	strcpy_s(c->model, 10, "F-150");
	c->miles = 25800;
}
