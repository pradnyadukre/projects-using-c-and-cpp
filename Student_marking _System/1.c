#include<stdio.h>
#include<stdlib.h>


typedef struct student{

    char name[20];
    int rno;

    struct subject{
        char subname[20];
        int scode;
        int marks;
    }sub[3];

    int total;
    float per;
}student;


void create(){


    int n=0;
    printf("\n Enter how many no of students data you want to create.\n");
    scanf("%d",&n);

    student *s;
    FILE *fp;
    s = (student *)calloc(n, sizeof(student));
    fp =fopen("mystud.txt","w");

    for(int i=0;i<n;i++){
           
           getchar();
        printf("\n Enter name of student\n");

        char ch;
          int k=0;
        while((ch = getchar())!='\n'){
            (s[i]).name[k]=ch;
            k++;
        }
        printf("\n Enter Roll no\n");
        scanf("  %d",&s[i].rno);

        for(int j=0;j<3;j++){

            printf("\n Enter marks of subject  %d :",j+1);
            scanf("%d",&s[i].sub[j].marks);

            s[i].total = s[i].total +s[i].sub[j].marks;
             
                   }
          s[i].per = s[i].total/3.0;

          fwrite(&s[i],sizeof(student),1,fp);

    }
    
    fclose(fp);
    


}
void display(){

    student s1;
    FILE *fp ; 
    fp = fopen("mystud.txt","r");

    while(fread(&s1,sizeof(student),1,fp)){

        printf("\n% -5d%-20s",s1.rno,s1.name);
        for(int j=0;j<3;j++){
            printf("%4d",s1.sub[j].marks);
        }
        printf("%5d%7.2f \n \n",s1.total,s1.per);
    }
    fclose(fp);

}
void append(){
    
    int n=0;
    printf("\n Enter how many no of students data you want to create.\n");
    scanf("%d",&n);

    student *s;
    FILE *fp;
    s = (student *)calloc(n, sizeof(student));
    fp =fopen("mystud.txt","a");

    for(int i=0;i<n;i++){
           
           getchar();
        printf("\n Enter name of student\n");

        char ch;
          int k=0;
        while((ch = getchar())!='\n'){
            (s[i]).name[k]=ch;
            k++;
        }
        printf("\n Enter Roll no\n");
        scanf("  %d",&s[i].rno);

        for(int j=0;j<3;j++){

            printf("\n Enter marks of subject  %d :",j+1);
            scanf("%d",&s[i].sub[j].marks);

            s[i].total = s[i].total +s[i].sub[j].marks;
             
                   }
          s[i].per = s[i].total/3.0;

          fwrite(&s[i],sizeof(student),1,fp);

    }
    
    fclose(fp);
    

}

void noofrec(){

    student s1;
    FILE *fp ;
    fp = fopen("mystud.txt","r");
    fseek(fp,0,SEEK_END);

    int n = ftell(fp)/sizeof(student);
    printf("\n \n NO OF RECORDS =%d",n);
    fclose(fp);

}
void search(){

      student s1;
    FILE *fp ; 
    int rno, found=0;
    fp = fopen("mystud.txt","r");

    printf("\n enter the roll no you want to search\n");
    scanf("%d",&rno);
    
    while(fread(&s1,sizeof(student),1,fp)){
        
        if(s1.rno == rno){
    found=1;
        printf("\n% -5d%-20s",s1.rno,s1.name);
        for(int j=0;j<3;j++){
            printf("%4d",s1.sub[j].marks);
        }
        printf("%5d%7.2f \n \n",s1.total,s1.per);
    }
    }

    if(!found){
        printf("\n Record not found\n ");
    }
    fclose(fp);


}
void main(){
    int ch;

    do{

        printf("\n 1.Create");
        printf("\n 2 Display");
        printf("\n 3 Append");
        printf("\n 4 No of Records");
        printf("\n 5 Search of Records");
        printf("\n 0.Exit");
        printf("\n Enter your Choice.\n");
         
        scanf("%d",&ch);

        switch(ch){
            case 1:
                create();
                break;

            case 2:
               display();
               break;

            case 3:
                append();
                break;

            case 4:
               noofrec();
                break;

            case 5:
                search();
                break;

             default :
             printf(" \n you entered wrong choice");


        }
    }while(ch!=0);
}
