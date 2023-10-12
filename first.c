#include <stdio.h>
#include <string.h>

int main()
{  
    char first_name[10];
    char last_name[15];
    char user_name[25];
    int pass1;
    int pass2;
    int stored_pass;
    int check;
    char user_name_l;
    int pass_l;

   /* printf("if you alredy have an account press 1 , to register press 2 \n");
     scanf("%d",&check);
   
    switch (check)
    {
    case 1:*/

 // register
    
    printf("First Name \t");
    scanf("%s", &first_name);

    printf("Last Name \t");
    scanf("%s", &last_name);

    printf("User name \t");
    scanf("%s",user_name);

    printf("Password \t");
    scanf("%d", &pass1);
    printf("Enter The Password again \t");
    scanf("%d", &pass2);

    while (pass1 != pass2)
    {
        printf("passowrd doesnt match \n");
        printf("Password \t");
        scanf("%d", &pass1);
        printf("Enter The Password again \t");
        scanf("%d", &pass2);
    };
    stored_pass = pass1;
    printf("register done successfully ! \n");
        //break;
       // case 2:

//login
        printf("WELCOME TO LOGIN \n");
         
         printf("USER NAME :");
         scanf("%s",&user_name_l);
         
         printf("Password : ");
         scanf("%d",&pass_l);
         
         
    

         while (user_name!=user_name_l || stored_pass!=pass_l)
         {
           printf("Try Again \n");
           printf("USER NAME :");
           scanf("%s",&user_name_l);
           printf("Password");
           scanf("%d",&pass_l);
           if (user_name==user_name_l || stored_pass==pass_l)
           {
            break;
           }
           
         }
         printf("logedd in successfully");
       
         
         
       
         

         
        


       // break;
    
   // default:
    //   printf("enter valid input ");
     //   break;
   // }

    

    
    

    return 0;
}