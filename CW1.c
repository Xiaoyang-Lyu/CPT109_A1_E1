#include<stdio.h>
#include<string.h>
int Input_Msg();/*this function  prints tips message and get your inputs when you inputting*/
int Check_Digits();/*this function  checks the digits number of your input*/
int integer_value(int size);/*this function returns an integer value of reverse of your input*/
/*globle variables*/
char digits[1000];/*this string store input data*/
char input[1000];/*this string store digits of input data*/
int Size;/*this variable store the size of input[1000]*/
int main() {
	int num;/*store the number of digits of input data*/
	int i;/*a variable for control for-loop*/
	int result;/*variable store the output number of integer number*/
	Input_Msg();
	Size = strlen(input);
	num = Check_Digits();
	if (num <= 1) {/*check if num less than 2*/
		printf("The digit is less than 2");
		system("pause");
		return 0;
	}
	/*if num >1*/
	else
		printf("The string has %d characters that are digits: ", num);
	for (i = 0; i < num; i++) {
		printf("%c", digits[i]);
	}
	/**/
	printf("\nThe string printed in reverse is: ");
	for (i = num - 1; i >= 0; i--) {
		printf("%c", digits[i]);
	}
	printf("\nThe integer value is: ");
	result = integer_value(num);/*store return */
	if (result == -2)
		printf("0");
	else {
		for (i = num -1-result; i >= 0; i--) {
			printf("%c", digits[i]);
		}
	}
	system("pause");
	return 0;
	
}

int Input_Msg() {
	printf("Please input the String:\n" );
	gets(input);
	return 0;


}

int Check_Digits() {
	int num=0;
	char* start = input;
	char* stop = start + Size;
	while (start != stop) {
		if (*start >= 48 && *start <= 57) {
			
			digits[num] = *start;
			num++;
		}
		else;
		start++;
	}
	return num;

	

}

int integer_value(int size) {
	int i;/*control loop*/
	int output=0;
	for (i = size-1; i >= 0; i--) {
		if (digits[i] == '0') {
			output++;
			continue;
		}
			
		else
			break;
	}
	if (i == -1) {
		return -2;
	}
	else
		return output;
	}