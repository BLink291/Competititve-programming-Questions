/*

Problem : Numbers with non-decreasing digits
 
Numbers such as 7, 234, 12378 have the digits that are non-decreasing when we read them from left to right. 
In this problem, we want to find the largest such number less than or equal to a given number N.
 
Input Format:  Integer N
 
Output Format:  Largest integer M ≤ N that has its digits non-decreasing. The output should not contain leading zeros.
 
Constraints:  N <= 10^18
 
 
Example 1. Input
			89
		   Output
			89  
		Explanation  89 itself has non-decreasing digits.
 
 
Example 2. 	Input
  			549
			Output
			499 
		Explanation  From 500 to 549, the integers have 5 as the leading digit
		and the second digit must be less than or equal to 4.
		But then, such a number cannot have its digits non decreasing.
*/


#include <iostream>
#include <math.h>

using namespace std;

//Reverse the number and reverse the number
int reverse_num(long long &num){
	long long rnum=0;
	int count = 0;
	while(num){
		rnum = (rnum * 10) + (num%10);
		num = num/10;
		count++;
	}
	
	num = rnum;
	return count;
}

long long checkorder(long long  num){
 	long long  rnum = num;
 	int digits = reverse_num(rnum);
	long long  temp = rnum%10;
	int  i= 1;
	for (; i < digits; i++){
		rnum = rnum/10;
		if( (rnum%10) < temp )
			break;
		temp = rnum %10;
		
	}

	// cout<< " faulty pos "<<i+1<<endl;

	if( i==digits )
		return num;
	
	int mod = digits- i;
	long long  modulo = round(pow( 10, mod ) );

	long long changestr = num %  modulo;
	// cout<<"string to be changed "<< changestr<<endl;
	num = num - changestr;
		
 	return num - 1LL;
 	
 }


int main() {
	
	long long n, result ;
	cin>>n;
	result = checkorder(n);
	cout<<result<<endl;
	return 0;
} 
