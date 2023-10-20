#include <stdio.h>
#include <string.h>

struct data1{
    char first_name[10];
    char last_name[15];
    char user_name[25];
    int stored_pass;
    int user_status;
};
struct data2{
    char first_name[10];
    char last_name[15];
    char email[25];
    int stored_pass;
     int user_status;
};
union user{
  struct data1 usertype1;
  struct data2 usertype2;

};

int main()
{  

    int pass1;
    int pass2;
    int check;
    char user_name_l;
    int pass_l;
    char check_data;
    union user user1;
    char  user_status[10] ;
     printf("register by name (n) or register by email (e)\t");
    scanf("%c", &check_data);
    while (check_data != 'n' && check_data != 'e')
     {
      printf("wrong input please choose n or e\t");
      scanf("%c", &(check_data));
     }
  if(check_data =='n')
  {
    printf("First Name \t");
    scanf("%s", &(user1.usertype1.first_name));

    printf("Last Name \t");
    scanf("%s", &(user1.usertype1.last_name));

    printf("User name \t");
    scanf("%s",&(user1.usertype1.user_name));

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
     user1.usertype1.stored_pass = pass1;
    printf("enter active state true-1  or false -0 \t");
    scanf("%s", &user_status);
    while (user_status[0] !='1'  && user_status[0]!='0' && user_status[0] !='t' &&  user_status[0] != 'f' )
    {
      printf("wrong input :enter active state true-1  or false-0 \t");
      scanf("%s", &user_status);
    }
   
    if(user_status[0] =='1'  || user_status[0]== 't')
    {
      user1.usertype1.user_status =1;
    }
    else{
       user1.usertype1.user_status =0;
    }
     printf("register done successfully ! \n");
  }
  else{
    printf("First Name \t");
    scanf("%s", &(user1.usertype2.first_name));

    printf("Last Name \t");
    scanf("%s", &(user1.usertype2.last_name));

    printf("email \t");
    scanf("%s",&(user1.usertype2.email));

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
    user1.usertype2.stored_pass = pass1;
    printf("enter active state true-1  or false-0 \t");
    scanf("%s", &user_status);

   while (user_status[0] !='1'  && user_status[0]!='0' && user_status[0] !='t' &&  user_status[0] != 'f' )    {
      printf("wrong input :enter active state true-1  or false-0 \t");
      scanf("%s", &user_status);
    }
   
    if(user_status[0] =='1'  || user_status[0]=='t')
    {
      user1.usertype2.user_status =1;
    }
    else{
       user1.usertype2.user_status =0;
    }
     printf("register done successfully ! \n");
  }
//login
        
  if(user1.usertype2.user_status ==1 ||user1.usertype1.user_status ==1)
  {
    printf("WELCOME TO LOGIN \n");
        if(check_data =='n')
        {
         printf("USER NAME :");
         scanf("%s",&user_name_l);
         
         printf("Password : ");
         scanf("%d",&pass_l);
         
         
    

         while (user1.usertype1.user_name!=user_name_l && user1.usertype1.stored_pass!=pass_l)
         {
           printf("Try Again \n");
           printf("USER NAME :");
           scanf("%s",&user_name_l);
           printf("Password");
           scanf("%d",&pass_l);
           if (user1.usertype1.user_name==user_name_l || user1.usertype1.stored_pass==pass_l)
           {
            break;
           }
           
         }
           printf("logedd in successfully");
        }
        else{
          
         printf("Email :");
         scanf("%s",&user_name_l);
         
         printf("Password : ");
         scanf("%d",&pass_l);
         
         
    

         while (user1.usertype2.email!=user_name_l && user1.usertype2.stored_pass!=pass_l)
         {
           printf("Try Again \n");
           printf("email :");
           scanf("%s",&user_name_l);
           printf("Password");
           scanf("%d",&pass_l);
           if (user1.usertype2.email==user_name_l || user1.usertype2.stored_pass==pass_l)
           {
            break;
           }
           
         }
           printf("logedd in successfully");
        }
        }


    return 0;
}