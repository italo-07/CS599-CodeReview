Create F2_18.c
The application you will be writing for is intended to run on a small, inexpensive embedded device that does not have a floating point unit. This means that the processor can only do integer arithmetic. However, the device does have a display and needs to display the result of floating point arithmetic to the user. 
Because this is a small inexpensive processor there is no support for strings or any mathematical library functions. You must write all the code yourselves performing all the floating point math with integers only and no strings! Character arrays, or C strings, can't tell you their size but they do end with a '\0' character.

The requirements for the code are to write one of the functions presented below. All the functions return a boolean value indicating the success or failure of the operation. Improper data is the most likely cause for a function to fail. You may add your own additional helper functions (I had at least a half dozen) but you must include them for the review. Do not change the interface to these functions.


These two functions take as parameters two sets of mantissa and characteristic and a char array to hold the result of the arithmetic operations. The result of the add or subtract should be converted into char's and placed in the result array. The array must end with a '\0'. The 'len' parameter tells how many characters can be placed on the result array. For these functions to return true you must at a minimum store the characteristic of the result. If the result is a non-integer place as many of the digits as will fit in the result after a decimal point.
```
bool add(int c1, int n1, int d1, int c2, int n2, int d2, char result[], int len);
bool subtract(int c1, int n1, int d1, int c2, int n2, int d2, char result[], int len); 
...
...
'''
```
char answer[100];
int c1, n1, d1;
int c2, n2, d2;
 
c1 = 1;
n1 = 1;
d1 = 2;
 
c2 = 2;
n2 = 2;
d2 = 3; 
 
//if the C string could hold at least the characteristic
if(add(c1, n1, d1, c2, n2, d2, answer, 100))
{
    //display string with answer 4.166666666...
}
else
{
    //display error message
}
'''
