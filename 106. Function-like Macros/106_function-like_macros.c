#include <stdio.h>

/**
 * @brief function-like macros sometimes called parameterized macro or macros with argument
 * @note disadvantage function using macros :
 *       1. expanded by prepossecor, so it potentialy insert many time (make compiler larger)
 *       2. can't using pointer
 *       3. difficulties if error occure, especially if macros has more than 1 argument
 * 
 */

// this execution called "preprocess"
#define MAX 20
#define PI 3.14

#define print printf("PRINT THIS\n");

// space after "increment" is not allow
#define increment(x) x + 1;

#define area(base, height) 0.5 * base * height

// parentheses for make code easyly to read
#define minimumNum(x, y) ((x < y) ? x:y)

#define find_max1(array, length) ({ \
    int current_max = array[0]; \
    for (int i = 1; i < length; i++) \
        if(array[i] > current_max) \
            current_max = array[i]; \
    current_max; \
})

// in an array.  We use typeof() to find the type of elements in the array so 
// that we can keep the function generic, such that it will work with both ints
#define find_max2(array,length) ({ \
  typeof(array[0]) current_max = array[0]; \
  for (int i = 1; i < length; i++) \
    if (array[i] > current_max) \
      current_max = array[i]; \
  current_max; \
})

#define outputStr(s1, s2) printf(#s1 "middle %s\n", s2);

// this macros to explain a disadvatage function-macros compare regular c function
#define print_num_3x(num) ({\
    printf("number: %d\n", num); \
    printf("number: %d\n", num); \
    printf("number: %d\n", num); \
})

// i dont know why this is still error
#define print_num_3x_solved(num) ({ \
  int nume = (num); \
  printf("number: %d\n", nume); \
  printf("number: %d\n", nume); \
  printf("number: %d\n", nume); \
})

int main()
{
    printf("Max: %d\n", MAX);

    // its work without semi colon
    // its because "printf("PRINT THIS\n");" in macros wa copied
    print

    int a = 2;
    a = increment(a);
    printf("a: %d\n", a);

    int base1 = 20;
    int height1 = 20;
    int area1 = area(base1, height1);
    printf("area1: %d\n", area1);

    double base2 = 10.5;
    double height2 = 5.2;
    double area2 = area(base2, height2);
    printf("area1: %f\n", area2);

    int min_num1 = minimumNum(2, 7);
    printf("min_num1: %d\n", min_num1);

    int min_num2 = minimumNum(9, minimumNum(6, 3));
    printf("min_num2: %d\n", min_num2);

    int min_num3 = minimumNum(minimumNum(1, 2), minimumNum(6, 7));
    printf("min_num3: %d\n", min_num3);

    char string[] = "test2";
    // using string literal in s1
    outputStr("test1", string);
    // without string literal in s1
    outputStr(test1, string);

    int int_array[] = {3, 4, 1, 8, 2, 1};
    double dbl_array[] = {9.4, 2.4, 10.2, 10.9};

    int max_int1 = find_max1(int_array, 7);
    printf("max_int1: %d\n", max_int1);
    int max_int2 = find_max2(int_array, 7);
    printf("max_int2: %d\n", max_int2);
    double max_int3 = find_max2(dbl_array, 4);
    printf("max_int3: %f\n", max_int3);
    
    int num;
    // see the file "106_function-like_macros"
    // print_num_3x(num = increment());

    return 0;
}
