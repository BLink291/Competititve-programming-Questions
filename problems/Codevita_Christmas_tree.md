#TCS codevita 2016 Problems 10: Christmas Tree

Chirag is a pure Desi boy. And his one and only dream is to meet Santa Claus. He decided to decorate a 
Christmas tree for Santa on coming Christmas. Chirag made an interesting Christmas tree that grows day by day.

The Christmas tree is comprised of the following Parts:

1. Stand 
2. Each Part is further comprised of Branches. 
3. Branches are comprised of Leaves.

How the tree appears as a function of days should be understood. Basis that print the tree as it appears on 
the given day. Below are the rules that govern how the tree appears on a given day. Write a program to 
generate such a Christmas tree whose input is number of days.

Rules:

1. If tree is one day old you cannot grow. Print a message "You cannot generate christmas tree" 
2. Tree will die after 20 days; it should give a message "Tree is no more" 
3. Tree will have one part less than the number of days. E.g. On 2nd day tree will have 1 part and one stand., On 3rd day tree will have 2 parts and one stand On 4th day tree will have 3 parts and one stand and so on. 
4. Top-most part will be the widest and bottom-most part will be the narrowest. 
5. Difference in number of branches between top-most and second from top will be 2 
6. Difference in number of branches between second from top and bottom-most part will be 1.

Example:
![Example](images/Codevita_Christmas_tree1.png)


Input Format:

First line of input contains number of days denoted by N

Output Format:

Print Christmas Tree for given N

OR

Print "You cannot generate christmas tree" if N <= 1

OR

Print "Tree is no more" if N > 20

Constraints:

0<= N <=20

Sample Input and Output

Input:
2

Output:

![output](images/Codevita_Christmas_tree4.png)


Input:
4

Output:

![output](images/Codevita_Christmas_tree2.png)


Input:
5

Output:

![output](images/Codevita_Christmas_tree3.png)
