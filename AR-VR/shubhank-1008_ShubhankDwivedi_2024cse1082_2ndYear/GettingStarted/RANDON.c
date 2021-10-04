#include<stdio.h>
#include<windows.h>
void add_contact();
void search_contact();
void delete_contact();
void view_all_contact();
void main()
{
    system("cls");
    printf("\t*****PHONE BOOK*****\n");
    printf("\t 1. Add Contact\n");
    printf("\t 2. Search Contact\n");
    printf("\t 3. Delete Contact\n");
    printf("\t 4. View All Contact\n");
    printf("\t 5. Exit\n");
    printf("Enter Your Choice:-");
    int option;
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        add_contact();
        break;
    case 2:
        search_contact();
        break;
    case 3:
        delete_contact();
        break;
    case 4:
        view_all_contact();
        break;
    case 5:
        exit(0);
    default:
        main();
    }
}
void add_contact()
{
    FILE *fp;
    fp=fopen("contact.txt","a+");
    system("cls");
    printf("\t*****ADD CONTACT*****");
    printf("\n\tName    :-");
    char name[20];
    scanf("%s",name);
    printf("\n\tMob No. :-" );
    char mob[20];
    scanf("%s",mob);
    fprintf(fp,"%s %s\n",name,mob);
    fclose(fp);
    printf("\n\tPRESS ANY KEY TO CONTINUE");
    getch();
    main();
}
void search_contact()
{
    FILE *fp;
    fp=fopen("contact.txt","r");
    system("cls");
    printf("\t*****SEARCH CONTACT*****");
    printf("\n\t Enter Name :-");
    char name[20];
    scanf("%s",name);
    char name1[20],mob[20];
    while(fscanf(fp,"%s %s",name1,mob)!=EOF)
    {
        if(strcmp(name,name1)==0)
        {
            printf("\n\tNAME     :- %s\n",name1);
            printf("\n\tMOB NO.  :- %s\n",mob);
        }
    }
    fclose(fp);
    printf("\n\tPRESS ANY KEY TO CONTINUE");
    getch();
    main();
}
void delete_contact()
{
    FILE *fp,*fp1;
    fp=fopen("contact.txt","r+");
    fp1=fopen("temp.txt","w");
    system("cls");
    printf("\t*****DELETE CONTACT*****");
    printf("\n\t Enter Name :-");
    char name[20];
    scanf("%s",name);
    char name1[20],mob[20];
    while(fscanf(fp,"%s %s",name1,mob)!=EOF)
    {
        if(strcmp(name,name1)==0)
        {
            continue;
        }
        fprintf(fp1,"%s %s\n",name1,mob);
    }
    fclose(fp);
    fclose(fp1);
    fp=fopen("contact.txt","w");
    fp1=fopen("temp.txt","r");
    while(fscanf(fp1,"%s %s",name1,mob)!=EOF)
    {

        fprintf(fp,"%s %s\n",name1,mob);
    }
    fclose(fp);
    fclose(fp1);
    remove("temp.txt");
    printf("\n\tPRESS ANY KEY TO CONTINUE");
    getch();
    main();
}
void view_all_contact()
{
    FILE *fp;
    fp=fopen("contact.txt","r");
    system("cls");
    printf("\t*****ALL CONTACTS*****");
    char name1[20],mob[20];
    while(fscanf(fp,"%s %s",name1,mob)!=EOF)
    {
        printf("\n\t NAME    :-  %s",name1);
        printf("\n\t MOB NO. :-  %s",mob);
    }
    fclose(fp);
    printf("\n\tPRESS ANY KEY TO CONTINUE");
    getch();
    main();
}
