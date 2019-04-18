  #include<stdio.h>
  typedef struct 
  {
    char name[20];
    int marks[5];
    int total;
    float percent;
  }student;

  int main()
  {
    student stu[10];
    student stotal={0,0,0,0,0};
            int a,b,n;
            float p, p1,p2,p3,p4,p5;
            printf("How many students : \n");      
            scanf("%d",&n);
            for(a=0;a<n;++a)
        {
            printf("\n\nEnter the details of students :");
            printf("\n\nEnter student  %d  Name : ", a);
            scanf("%s", stu[a].name);
            stu[a].total=0;
            for(b=0;b<5;++b)
            {
            printf("\n\nEnter the mark of subject-%d :  ", b);
            scanf("%d", &stu[a].marks[b]);
            stu[a].total =stu[a].total+ stu[a].marks[b];
            }
          stu[a].percent=(stu[a].total)/5.0;
        }

          for(b=0;b<5;b++)
          {
            stotal.marks[0] =stotal.marks[0]+stu[a].marks[0]; 
           p1 = ((stotal.marks[0]*100)/1000);
           stotal.marks[1] =stotal.marks[1]+stu[a].marks[1]; 
          p2 = ((stotal.marks[1]*100)/1000);
          stotal.marks[2] =stotal.marks[2]+stu[a].marks[2]; 
           p3 = ((stotal.marks[2]*100)/1000);
          stotal.marks[3] =stotal.marks[3]+stu[a].marks[3]; 
           p4 = ((stotal.marks[3]*100)/1000);
          stotal.marks[4] =stotal.marks[4]+stu[a].marks[4]; 
           p5 = ((stotal.marks[4]*100)/1000);
           stotal.total =stotal.total+stu[a].total; 
          }

        for(a=0;a<n;a++)
        {
          printf("\nName of Student : %s", stu[a].name);
            printf("\n------------------------------------------------------------------------");
            for(b=0;b<5;b++)
            {
            printf("\n\n\t Subject %d \t\t :\t %d", b, stu[a].marks[b]);
            }
            printf("\n\n------------------------------------------------------------------------\n");
            printf("\n\n Total Marks : %d", stu[a].total);
            printf("\t\t\t\t percent Marks : %f", stu[a].percent);
            printf("\n\n------------------------------------------------------------------------\n");
            printf("Percentage of subject 1= %f\n", p1);
             printf("Percentage of subject 2= %f\n", p2);
              printf("Percentage of subject 3= %f\n", p3);
               printf("Percentage of subject 4= %f\n", p4);
                printf("Percentage of subject 5= %f\n", p5);

          }
                printf("\n\n------------------------------------------------------------------------\n");
                printf("Class Grandtotal = %d\t",stotal.total);
                printf("\n\n------------------------------------------------------------------------\n");
                p=((stotal.total * 100)/500);

                printf("Class average = %f\n",p);
        return 0;
      }
