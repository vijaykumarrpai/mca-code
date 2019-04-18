#include<stdio.h>

typedef struct  

{ 
  
int sub1; 
  
int sub2; 
  
int sub3; 
  
int sub4;
  
int sub5;
  
int total; 
 
float per; 

}marks; 
  
int main() 
  
{ 
  
marks student[10] ={{10,20,30,40,50}, {50,60,70,80,90}, {16,22,17,78,89}, {99,23,31,13,24}, {25,46,77,58,69}, {32,23,45,75,69}, {27,48,59,7,58}, {45,72,32,53,9}, {7,6,5,9,0},{2,1,5,6,7}};
  
marks subtotal= {0,0,0,0,0};
  
int i; 

float percentage, percentage2, percentage3, per1, per2, per3, per4, per5, per6, per7, per8, per9, per10, p1, p2, p3, p4, p5;  
for(i=0;i<=9;i++) 
  
{ 

student[i].total =student[i].sub1 + student[i].sub2 + student[i].sub3 + student[i].sub4 + student[i].sub5; 

per1 = ((student[0].total*100)/500);
per2 = ((student[1].total*100)/500);
per3 = ((student[2].total*100)/500);
per4 = ((student[3].total*100)/500);
per5 = ((student[4].total*100)/500);
per6 = ((student[5].total*100)/500);
per7 = ((student[6].total*100)/500);
per8 = ((student[7].total*100)/500);
per9 = ((student[8].total*100)/500);
per10 = ((student[9].total*100)/500);


subtotal.sub1 =subtotal.sub1+student[i].sub1; 
   p1 = ((subtotal.sub1*100)/1000);

subtotal.sub2 =subtotal.sub2+student[i].sub2; 
   p2 = ((subtotal.sub2*100)/1000);

subtotal.sub3 =subtotal.sub3+student[i].sub3;
   p3 = ((subtotal.sub3*100)/1000);

subtotal.sub4 =subtotal.sub4+student[i].sub4;
   p4 = ((subtotal.sub4*100)/1000);

subtotal.sub5 =subtotal.sub5+student[i].sub5;
   p5 = ((subtotal.sub5*100)/1000);

subtotal.total =subtotal.total+student[i].total; 
  
}
  
  
for(i=0;i<=9;i++) 
  
printf("Marks of %d student = %d\n",i,student[i].total);

printf("Percentage of subject 1= %f\n", p1);
printf("Percentage of subject 2= %f\n", p2);
printf("Percentage of subject 3= %f\n", p3);
printf("Percentage of subject 4= %f\n", p4);
printf("Percentage of subject 5= %f\n", p5);


printf("Student1 percentage = %f\n",per1);
printf("Student2 percentage = %f\n",per2);
printf("Student3 percentage = %f\n",per3);
printf("Student4 percentage = %f\n",per4);
printf("Student5 percentage = %f\n",per5);
printf("Student6 percentage = %f\n",per6);
printf("Student7 percentage = %f\n",per7);
printf("Student8 percentage = %f\n",per8);
printf("Student9 percentage = %f\n",per9);
printf("Student10 percentage = %f\n",per10);

printf("Class Grandtotal = %d\t",subtotal.total);

percentage3 =  ((subtotal.total * 100)/5000);

printf("Class average = %f\n",percentage3);
  
}


