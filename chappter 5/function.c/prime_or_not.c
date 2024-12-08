#include <stdio.h> 

// function to check if 

// the num is prime or not.

int find_Prime(int num)

{

    int i, temp = 0; 

    // iterate up to num/2.

    for (i = 2; i <= num / 2; i++)

    {

        // if num has factors, 

        // update temp.

        if (num % i == 0)

        {

            temp++;

        }

    }

    return temp;

} 

int main()

{

    int num, temp = 0; 

    printf("Enter any number to Check for Prime: ");

    scanf("%d", &num);

    // function call

    temp = find_Prime(num);

    if (temp == 0 && num != 1)

    {

        printf("\n %d is a Prime Number", num);

    }

    else

    {

        printf("\n %d is Not a Prime Number", num);

    }

    return 0;

}