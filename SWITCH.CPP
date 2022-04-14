#include<stdio.h>

#include<iostream>

using namespace std;

int main(){
	
//	same driving license example with switch operation

//grade system

   int age;
   char grade;
   
   cout<<"Enter your age :\n";
   cin>>age;
   
   switch(age){
   	
    case 18 : cout<<"your age is  18 ";
   	break;
   	
     case 21 : cout<<"your age is  21 ";
   	break;
	   case 20 : cout<<"your age is  20 ";
   	break;
	   default :cout<<"your age is INVALID ";
   	
   	
   }

	
	
	
}
