/******************************************************************************
Problem Statement :

There is a hostel warden in some XYZ hostel. He is very strict with students. He has some set of rules to allow students to let them out.
Students are in random order but warden don’t allow them in that way.
Rule 1- whose initial is a prime value should go out before whose initial is a composite value.
Rule 2- if two students have prime value , a student with less value goes out first
Rule 3- if two students have composite value , a student with greater value goes out first
NOTE:- consider the ASCII value of the initial to find it is prime or composite.

Input format:
The first line of input contains the number of students N
The second line of input contains random order of the students S.
(students at index zero goes out first and students at index N-1 goes last)

Constraints
1<=number of students <=105
33<=ASCII Of Characters<=126

Output Format
The single line of output should contain the required modified order of students to go out.

Sample Input
13
Kkunjkhahorin

Sample Output
akkuronnjihhK

Explanation
For primes: a<k
For Composite: K<h<i<j<n<o<r<u
Adding up logic, the required answer is akkuronnjihhK
                         
*******************************************************************************/

#include <stdio.h>

#include<string.h>
int
prime_ (char element)
{
  int p = 0;
  for (int i = 2; i < 127; i++)
	{
	  if ((element % i) == 0)
		{
		  p++;
		}
	}
  if ((p == 0) || (p == 1))
	{
	  return 1;
	}
  else
	{
	  return 0;
	}
}

int
main ()
{
  int students_no, i = 0, j = 0, k = 0, l = 0, m = 0;
  printf ("Enter number of students : ");
  scanf ("%d", &students_no);
  char students[students_no];
  char prime[128];
  char cons[128];
  printf ("students S:\n");
  scanf (" %[^\n]", students);
  for (i = 0; i < students_no; i++)
	{

	  if ((prime_ (students[i]) == 1))
		{

		  prime[j] = students[i];
		  ++j;
		}
	  else
		{
		  cons[k] = students[i];
		  k++;
		}
	}
  for (l = 0; l < j - 1; l++)
	{
	  for (m = 0; m < j - l - 1; m++)
		{
		  if (prime[m] > prime[m + 1])
			{
			  char temp = prime[m];
			  prime[m] = prime[m + 1];
			  prime[m + 1] = temp;
			}
		}

	}
  for (l = 0; l < k - 1; l++)
	{
	  for (m = 0; m < k - l - 1; m++)
		{
		  if (cons[m] < cons[m + 1])
			{
			  char temp = cons[m];
			  cons[m] = cons[m + 1];
			  cons[m + 1] = temp;
			}
		}
	}

  strcat (prime, cons);
  printf ("the required answer is : %s", prime);
}
