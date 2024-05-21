#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_TOPICS 100
#define MAX_NAME_LENGTH 50
#define MAX_DOB_LENGTH 20

// function declaration
void user();
void customer_login();
void registration();
void game();
void scoreboard();
void viewall();
void viewagain();
void viewfirst();


 typedef struct 
 {char name[MAX_NAME_LENGTH];
 char pass[MAX_DOB_LENGTH];
} Topic;
int readTopics(Topic topics[])
{
 FILE *fp;
 int count = 0;
 fp = fopen("topics.txt", "r");
 if (fp == NULL) 
 {printf("Error opening file.\n");exit(1);}
 while(fscanf(fp,"%s %s",topics[count].name,topics[count].pass)!= EOF)
 {count++;}
 fclose(fp);
 return count;
}
void writeTopics(Topic topics[], int count)
{
 FILE *fp;int i;
 fp = fopen("topics.txt", "w");
 if (fp == NULL) 
 {printf("Error opening file.\n");exit(1);}
 for (i = 0; i < count; i++)
 {
  fprintf(fp, "%s %s\n", topics[i].name, topics[i].pass);
 }
  fclose(fp);
}



void main()  
{
int a;
printf("||||||||||||||||||||||||||||||||||||||||||||||| \n");
printf("|||         WELCOME TO QUIZ GAME            ||| \n");
printf("||||||||||||||||||||||||||||||||||||||||||||||| \n");
user();
return;
}
void user()
{
 int a;
 printf("For REGISTRATION enter 1 \n");
 printf("For customer_login enter 2 \n");
 scanf("%d",&a);
if(a==1)
{registration();}
else
{customer_login();}
return;
}
void registration()
{
  int a;
  char name[20];char dob[10];char phno[10];char mail[20];char age[2];char pass[20];
   FILE *fptr;
   fptr = fopen("topics.txt","a");

   if(fptr == NULL)
   {
      printf("Error 404 !! FILE NOT FOUND !!\n");   
      exit(1);             
   }
    printf("Enter Your NAME : \n");
    scanf("%s",name);
    fprintf(fptr,"%s\t",name);
    printf("Generate Password : \n");
    scanf("%s",pass);
    fprintf(fptr,"%s\t",pass);
    printf("Enter Your DOB : \n");
    scanf("%s",dob);
    fprintf(fptr,"%s\t",dob);
    printf("Enter Your PHONE NO. : \n");
    scanf("%s",phno);
    fprintf(fptr,"%s\t",phno);
    printf("Enter Your E-MAIL : \n");
    scanf("%s",mail);
    fprintf(fptr,"%s\t",mail);
    printf("Enter Your AGE : \n");
    scanf("%s",age);
    fprintf(fptr,"%s\n",age);
    fclose(fptr);
    printf("To login enter 1 : \n");
    printf("To return to main menu enter 2 : \n");
    scanf("%d",&a);
    if(a==1)
    {customer_login();}
    else
    {main();}
     return;
  }
void customer_login()
{
 Topic topics[MAX_TOPICS];
 int count, i,loginuse;
 char name[MAX_NAME_LENGTH], pass[MAX_DOB_LENGTH];
 // read student data from file
 count = readTopics(topics);
 // get student ID, name, and password from user
 printf("Enter your name: ");
 scanf("%s", name);
 printf("Enter your pass: ");
 scanf("%s", pass);
 // find student in list
 for (i = 0; i < count; i++)
 {
  if (strcmp(topics[i].name, name) == 0 && strcmp(topics[i].pass, pass) == 0) 
  {
   // customer_login successful, print welcome message and exit
   printf("customer_login successful! Welcome, %s.\n", topics[i].name);
      game();
  
     return;
  }
 }
  // customer_login failed, print error message and exit
  printf("Invalid ID, name, or password.\n");
  printf("Enter name and password again.\n");
  customer_login();
  printf("\n\n");
  return;
}

void game()
{
 int topic,historydiff,politicsdiff,bollywooddiff,geographydiff,currentaffairsdiff,sportsdiff,op,score=0,replay,viewtwo=0;

 game:
 printf("Please select from the given topics from which you would like to play the quiz game for: ");
 printf("\n1.HISTORY");
 printf("\n2.POLITICS");
 printf("\n3.GEOGRAPHY");
 printf("\n4.BOLLYWOOD");
 printf("\n5.CURRENT AFFAIRS");
 printf("\n6.SPORTS");
 printf("\nPlease enter the respective number for topic selection: ");
 scanf("%d",&topic); 


 switch (topic)
 {
 case 1:
       printf("\nYou have selected 'HISTORY' for your quiz topics");
 printf("\nPlease select difficulty level");
 printf("\n1.Easy");
 printf("\n2.Difficult\n");
 scanf("%d",&historydiff);
 if(historydiff==1)
 {
     printf("\nYou have selected your difficulty level as 'easy'");
     printf("\nSo let's begin the quiz");
     printf("\n\n");

     printf("\nWhich of the following aspect signifies the image of ‘Germania");
     printf("\n1.Folk nd cultural tradition\n2.Auterity and Asceticism\n3.Heroism and Justice\n4.Revenge and Vengeance");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWhy Satyagraha was organised in Champaran in 1916");
     printf("\n1.To oppose high land revenue\n2.To protest against the oppression of mill workers\n3.To oppose the plantation system\n4.To oppose the British Laws");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWhy the World Bank was set up");
     printf("\n1.To finance post-war construction \n2.With the purpose of financing rehabilitation of refugees\n3.To Finance Industrial Development\n4.To help third world countries");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nIdentify the trade from which the early entrepreneurs make a fortune.");
     printf("\n1.\n2.\n3.\n4.");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWhere First Indian Jute Mill was set up");
     printf("\n1.Bombay\n2.Bengal\n3.Madras\n4.Bihar");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nThe condition for which of the revolution was created by the Print Culture.");
     printf("\n1.Russian Revolution\n2.French Revolution\n3.American Revolution\n4.Glorious Revolution");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");


     printf("\nWhich of the following statements is true about the Rowlatt Act");
     printf("\n1.\n2.\n3.\n4.");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nThe infamous Jallianwalla Bagh Massacre took place when there was an annual _______ fair.");
     printf("\n1. Teeyan\n2.Gurupurab\n3.Lohri\n4. Baisakhi");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWhat was one of the main reasons behind Mahatma Gandhi’s decision to take up the Khilafat Issue?");
     printf("\n1. To bring more unity among Hindus and Muslims.\n2. To bring more unity among Hindus and Christians.\n3.To bring more unity among Christians and Muslims.\n4. None of the above.");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWho is the author of the book Hind Swaraj (1909)?");
     printf("\n1.Bhagat Singh\n2.Jawaharlal Nehru\n3.Subash Chandra Bose\n4.Mahatma Gandhi");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");
     printf("TOTAL SCORE:%d",score);
 }
     else
     {
      printf("\nYou have selected your difficulty level as 'difficult'");
     printf("\nSo let's begin the quiz");
     printf("\n\n");
     
     printf("\nWhat is the meaning of ‘Three baskets");
     printf("\n1.Tirthankara\n2.Triratna\n3.Tipitaka\n4.Trishula");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nHow many sessions of the constituent Assembly were held?");
     printf("\n1.8\n2.9\n3.10\n4.11");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\n Mahatma Gandhi wanted to make language as the national language.");
     printf("\n1.Hindustani\n2. Hindi\n3.Tamil\n4.Urdu");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWhen was the Vijayanagara kingdom established?");
     printf("\n1. 1336\n2.1340\n3.1346\n4.1350");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("Who established the Vijayanagara Kingdom? \n");
     printf("\n1.Hasan Gangu\n2.Prantak\n3.Harihara\n4.");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\n Which river’s bank did the people live along in the ancient time?");
     printf("\n1.Ganga\n2. Narmada\n3. Satluj\n4.None of above");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nHow did merchants travel1? ");
     printf("\n1.With Caravans\n2.Ships\n3.Both (a) and (b)\n4.None of above");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWhen were the trains used first? ");
     printf("\n1.200 years ago\n2.250 years ago\n3.150 years ago\n4. 300 years ago");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWhat type of food do we get from plants? ");
     printf("\n1. Milk\n2.Meat\n3.Fruits, vegetable and grains\n4.None of these");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWhen did Harappan cities develop? ");
     printf("\n1.About 4,700 years ago\n2. About 3,700 years ago\n3.About 2,700 years ago\n4.About 1,700 years ago");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");
     printf("TOTAL SCORE:%d",score);

     }
     

    break;
 case 2:
     printf("\nYou have selected 'POLITICS' for your quiz topics");
 printf("\nPlease select difficulty level");
 printf("\n1.Easy");
 printf("\n2.Difficult\n");
 scanf("%d",&politicsdiff);
 if(politicsdiff==1)
 {
     printf("\nYou have selected your difficulty level as 'easy'");
     printf("\nSo let's begin the quiz");
     printf("\nA.The minimum age to qualify for election to the Lok Sabha is");
     printf("\n1)25\n2.)21\n3.)18\n4.)35");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
      printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
      if(op==1)
     score=score+1;
     printf("\n\n");


     
      printf("\nB.The name of the Laccadive, Minicoy and Amindivi islands was changed to Lakshadweep by an Act of Parliament in");
     printf("\n1.1970)\n2.1971)\n3.1973)\n4.1974)");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
      if(op==4)
     score=score+1;
     printf("\n\n");


      printf("\nB.The members of the Rajya Sabha are elected by");
     printf("\n1.the people\n2.Lok Sabha)\n3.elected members of the legislative assembly)\n4.elected members of the legislative court)");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
      if(op==3)
     score=score+1;
     printf("\n\n");
    
      printf("\nThe members of the panchayat are");
     printf("\n1nominated by the district officer)\n2.the electorates of the respective territorial constituencies)\n3.nominated by local self-government minister of the state)\n4.nominated by the block development organization)");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
      if(op==2)
     score=score+1;
     printf("\n\n");

      printf("\nD.The power to decide an election petition is vested in the");
     printf("\n1.Parliament\n2.Supreme Court)\n3.)High courts\n4.)Election Commission");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
      if(op==3)
     score=score+1;
     printf("\n\n");

      printf("\nE.The present Lok Sabha is the");
     printf("\n1.)14th Lok Sabha\n2.)15th Lok Sabha\n3.)16th Lok Sabha\n4.)17th Lok Sabha");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
      if(op==4)
     score=score+1;
     printf("\n\n");

      printf("\nF.The Parliament of India can make use of the residuary powers");
     printf("\n1)at all times\n2.)only during national emergency\n3.)during national emergency as well as constitutional emergency as well in a state\n4.)None of the above");   printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
      if(op==1)
     score=score+1;
     printf("\n\n");

      printf("\nG.The members of Lok Sabha hold office for a term of");
     printf("\n1)4 years\n2.)5 years\n3.)6 years\n4.)7 years");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
      if(op==2)
     score=score+1;
     printf("\n\n");

      printf("\nH.The Parliament exercises control over council of ministers, the real executive, in several ways. Which one of the following has been wrongly listed as a method of control over executive?");
     printf("\n1)Supplementary questions\n2.)Adjournment motions\n3.)None of the above\n4.None of the above)");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
      if(op==4)
     score=score+1;
     printf("\n\n");

      printf("\nI.The number of writs that can be prayed for and issued by the Supreme Court and/or a High Court is");
     printf("\n1)3\n2.)4\n3.)5\n4.)6");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
      if(op==3)
     score=score+1;
     printf("\n\n");
     printf("TOTAL SCORE:%d",score);
}
else
{
    printf("\nThe pension of a high court judge is charged to the");
    printf("\n1.an effective, hones government\n2.socialist government\n3.active opposition\n4.adequate resources");
    printf("\nChoose the answer and enter the respective number\n");
    scanf("%d",&op);
    printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
    printf("\n\n");
     if(op==1)
     score=score+1;
     printf("\n\n");

    printf("\nThe preamble says that the state in India will assure the dignity of the individual. The constitution seeks to achieve this object by guaranteeing");
    printf("\n1.Sardar Patel\n2.Jawaharlal Nehru\n3.K.M. Munshi\n4.B.R. Ambedkar");
    printf("\nChoose the answer and enter the respective number\n");
    scanf("%d",&op);
    printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
    printf("\n\n");
     if(op==2)
     score=score+1;
     printf("\n\n");

    printf("\nThe minimum age of the voter in India is");
    printf("\n1.Consolidated Fund of India\n2.Consolidated Fund of the state where he last served\n3.Consolidated Funds of the different states where he has served\n4.Contingency Fund of India");
    printf("\nChoose the answer and enter the respective number\n");
    scanf("%d",&op);
    printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
    printf("\n\n");
     if(op==2)
     score=score+1;
     printf("\n\n");

    printf("\nThe members of a State Commission can be removed by the");
    printf("\n1.equal fundamental rights to each citizen\n2.the right to adequate means of livelihood to each individual\n3.just and humane conditions of work to each individual\n4.equal wages for equal work to each individual irrespective of sex");
    printf("\nChoose the answer and enter the respective number\n");
    scanf("%d",&op);
    printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
    printf("\n\n");
     if(op==3)
     score=score+1;
     printf("\n\n");

    printf("\nThe members of the Rajya Sabha are");
    printf("\n1.15 years\n2.18 years\n3.21 years\n4.25 years");
    printf("\nChoose the answer and enter the respective number\n");
    scanf("%d",&op);
    printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
    printf("\n\n");
     if(op==1)
     score=score+1;
     printf("\n\n");

    printf("\nThe president addresses both the Houses of Parliament assembled together");
    printf("\n1.governor on a report by the Supreme Court\n2.governor on a resolution passed by Parliament\n3.president on a report by the Supreme Court\n4.president on a resolution passed by Parliament");
    printf("\nChoose the answer and enter the respective number\n");
    scanf("%d",&op);
    printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
    printf("\n\n");
     if(op==2)
     score=score+1;
     printf("\n\n");

    printf("\nThe president can dissolve the Lok Sabha on");
    printf("\n1.directly elected by the people on the basis of universal adult franchise\n2.elected by the members of the state legislative assemblies\n3.elected by the members of the state legislative councils\n4.elected by the members of the state legislative councils and state legislative assemblies");
    printf("\nChoose the answer and enter the respective number\n");
    scanf("%d",&op);
    printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
    printf("\n\n");
     if(op==2)
     score=score+1;
     printf("\n\n");

    printf("\n");
    printf("\n1.during emergency session summoned for the purpose\n2.every session\n3.first session after each general election and the first session of each year\n4.any session");
    printf("\nChoose the answer and enter the respective number\n");
    scanf("%d",&op);
    printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
    printf("\n\n");
     if(op==2)
     score=score+1;
     printf("\n\n");

    printf("\nThe president can dissolve the Lok Sabha on");
    printf("\n1.advice of the prime minister\n2.advice of the chief justice of India\n3.recommendation of Lok Sabha\n4.recommendation of the Rajya Sabha");
    printf("\nChoose the answer and enter the respective number\n");
    scanf("%d",&op);
    printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
    printf("\n\n");
     if(op==2)
     score=score+1;
     printf("\n\n");

    printf("\n");
    printf("\n1.only with the approval of the Parliament\n2.without the approval of the Parliament\n3.only in the case of the national calamities\n4.None of the above");
    printf("\nChoose the answer and enter the respective number\n");
    scanf("%d",&op);
    printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
    printf("\n\n");
     if(op==1)
     score=score+1;
     printf("\n\n");
     printf("TOTAL SCORE:%d",score);
}
 
 break;
case 3:
    printf("\nYou have selected 'BOLLYWOOD' for your quiz topics");
 printf("\nPlease select difficulty level");
 printf("\n1.Easy");
 printf("\n2.Difficult\n");
 scanf("%d",&bollywooddiff);
 if(bollywooddiff==1)
 {
     printf("\nYou have selected your difficulty level as 'easy'");
     printf("\nSo let's begin the quiz");
     printf("\n\n");

     printf("\n Initially named High Jump, this movie is inspired by the biography of Akira Kurosawa – the famous Japanese filmmaker. What is it?");
     printf("\n1. Luck By Chance\n2.3 Idiots\n3.Taare Zameen Par");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

      printf("\nThe movie “Fitoor” is an adaptation of which prominent literary work?");
     printf("\n1.Great Expectations\n2.Hamlet\n3.Pride and Prejudice");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");

      printf("\nWho is the director of “Awwal Number” – a movie about cricket starring Aamir Khan?");
     printf("\n1.Sanjay Leela Bhansali\n2.Dev Anand\n3.Shyam Benegal");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

      printf("\n4. What movie genre does “Hungama” belong to?");
     printf("\n1.Mystery\n2.Comedy\n3.Romance");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

      printf("\nHow many Best Actor awards have Filmfare Dilip Kumar and Shahrukh won in the Filmfare?");
     printf("\n1.7\n2.8\n3.9");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

      printf("\n Which movie was banned by the government in India because it was a political satire on Indira Gandhi and Sanjay – her son?");
     printf("\n1.Kissa Kursi Ka\n2.Ekdin Pratidin\n3. Duniya Na Mane");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

      printf("\nWho created the original story for Shehenshah, one of the most iconic movies in Bollywood history?");
     printf("\n1.Jaya Bachchan\n2.Javed Akhtar\n3.Salim Khan");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");

      printf("\nWhich singer is often considered to be the Father of Hindi movie singing?");
     printf("\n1.Kundanlal Saigal\n2. Mahendra Kapoor\n3.Hemant Kumar");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");

      printf("\nIn which movie did Preity Zinta make her debut?");
     printf("\n1. Soldier\n2. Dil Se\n3.Kya Kehna");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

      printf("\n Who is the director of “Devdas”, “Madhuri Dixit”, and Shahrukh Khan?");
     printf("\n1. Sanjay Leela Bhansali\n2.Ashutosh Gowariker\n3. Karan Johar");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");
    printf("TOTAL SCORE:%d",score);

 }
 else
 {
    printf("\nYou have selected your difficulty level as 'DIIFICULT'");
     printf("\nSo let's begin the quiz");
     printf("\n\n");


     printf("\n In the Oscar-nominated movie “Lagaan”, what is the name of the character that features Aamir Khan?");
     printf("\n1.Sajjan \n2. Arjan\n3. Bhuvan");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\n In the 1957 movie “Mother India”, who played the role of Birju?");
     printf("\n1.Rajendra Kumar \n2.Raaj Kumar\n3.Sunil Dutt");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWhich movie by Amrish Puri features the famous dialogue “Mogambo khush hua”? ");
     printf("\n1.Damini \n2.Diljale\n3. Mr. India");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWhich of the following actors wasn’t one of the seven husbands of Priyanka Chopra in “Seven Khoon Maaf”? ");
     printf("\n1.Irrfan Khan \n2.John Abraham\n3.Saif Ali Khan");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\n In the movie “Lage Raho Munna Bhai”, which profession does Sanjay Dutt pretend to do? ");
     printf("\n1.Criminal lawyer \n2.Construction worker\n3. History professor");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWho was the composer in the drama “Jodhaa Akbar” by Ashutosh Gowariker? ");
     printf("\n1.Anu Malik \n2.Jatin Lalit\n3.Allahrakka Rahman");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWhich well-known director had his acting debut in the movie “Dilwale Dulhania Le Jayenge”? ");
     printf("\n1.Karan Johar \n2.Farhan Akhtar\n3.Aditya Chopra");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");

     printf("\nThe tagline “It is all about loving your parents” is in which movie by Amitabh Bachchan? ");
     printf("\n1.Baghban \n2.Paa\n3.Kabhi Khushi Kabhie Gham");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\n In “Sholay”, which actor played Gabbar – the infamous villain? ");
     printf("\n1.Ajit \n2.Kader Khan\n3.Amjad Khan");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWhich is the debut movie of the director Farhan Akhtar? ");
     printf("\n1. Lakshya \n2.Dil Chahta Hai\n3.Don");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");
     printf("TOTAL SCORE:%d",score);
 }
 
 
break;
case 4:
     printf("\nYou have selected 'GEOGRAPHY' for your quiz topics");
 printf("\nPlease select difficulty level");
 printf("\n1.Easy");
 printf("\n2.Difficult\n");
 scanf("%d",&geographydiff);
 if(geographydiff==1)
 {
  printf("\nYou have selected your difficulty level as 'easy'");
     printf("\nSo let's begin the quiz");
     printf("\n\n");

     printf("\n The Kachin Hills make a boundary between India and which of the following neighbors?");
     printf("\n1.Bhutan\n2.Myanmar\n3.Myanmar\n.China");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

     printf("\nWhich of the following state does not share boundary with Myanmar? ");
     printf("\n1.Assam\n2.Arunachal Pradesh\n3. Nagaland\n4.Manipur");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");

     printf("\nCoir Industry is maximum concentrated in which among the following states of India? ");
     printf("\n1.Karnataka\n2.Tamil Nadu\n3.Kerala\n4.Andhra Pradesh");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nRange that rises in eastern Gujarat state near the Arabian Sea coast, running east through Maharashtra and Madhya Pradesh to Chhattisgarh? ");
     printf("\n1.Vindhya Range\n2. Aravalli Range\n3. Toba Kakar Range\n4. Satpura Range");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==4)
     score=score+1;
     printf("\n\n");

     printf("\nAmindivi islands in India are best known for which of the following?  ");
     printf("\n1.Coral Atolls / Reefs\n2.Abyssal Fans\n3.Seamounts\n4.Estuaries");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");

     printf("\nWhich among the following states has highest population density? ");
     printf("\n1. Maharastra\n2.Bihar\n3.West Bengal\n4.Uttar Pradesh");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

     printf("\nWhich of the following is the highest peak of Satpura Range? ");
     printf("\n1. Gurushikhar\n2.Dhupgarh\n3.Pachmarhi\n4.Mahendragiri");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

     printf("\nWhich among the following statements are correct?\n1. Coromandel coast formed due to emergence\n2. Malabar coast formed due to emergence\n3. Konkan coast formed due to submergence\nChoose the correct option from the codes given below : ");
     printf("\n1.1 & 2\n2.1 & 3\n3.2 & 3 2 & 3\n4.1, 2 & 3");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==4)
     score=score+1;
     printf("\n\n");

     printf("\nThe Mt. Everest is situated in which of the following region? ");
     printf("\n1. Nepal Himalayas\n2. Assam Himalayas\n3.Punjab Himalayas\n4.Kashmir Haimalayas");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");

     printf("\nWhich of the following parts of the Himalayas is situated between Kali and Tista rivers?");
     printf("\n1. The Kumayun Himalaya\n2.The Himadri Himalaya\n3. The Himachal Himalaya\n4.The Central Himalaya");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==4)
     score=score+1;
     printf("\n\n");
     printf("TOTAL SCORE:%d",score);

 }
else
{
     printf("\nYou have selected your difficulty level as 'difficult'");
     printf("\nSo let's begin the quiz");
     printf("\n\n");

     printf("\nThe Coonoor hill station is located in which one of the following states of India? ");
     printf("\n1.Karnataka\n2.Kerala\n3.Tamil Nadu\n4.Andhra Pradesh");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

      printf("\nMount Abu is located in which of the following states of India? ");
     printf("\n1.Rajasthan\n2.Madhya Pradesh\n3.Uttar Pradesh\n4. Karnataka");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");

      printf("\nYamuna river was the tributary of which of the following rivers before it became a tributary of the Ganga river? ");
     printf("\n1. Mahanadi\n2.Godavari\n3. Indus\n4.Tapi");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

      printf("\nWhich among the following are the left bank tributaries of the Brahmaputra river? ");
     printf("\n1. Dibang\n2.Lohit\n3.Dhansiri\n4.All of above");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==4)
     score=score+1;
     printf("\n\n");

      printf("\nWhich of the following is the world’s largest river island? ");
     printf("\n1.Chongming Island\n2.Majuli Island\n3.Richards Island\n4.Sumba Island");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

      printf("\nWhich of the following island of Assam was given the name “Peacock Island” by the British? ");
     printf("\n1. Majuli Island\n2.Dibru Saikhowa Island\n3.Umananda Island\n4.None of the above");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

      printf("\nThe Meghalaya Plateau is detached from the Indian peninsula by which of the following? ");
     printf("\n1.Great Boundary Fault\n2.Himalayan Frontal Fault\n3.Goranghat gap\n4.Malda Gap");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==4)
     score=score+1;
     printf("\n\n");

      printf("\nWhich is the name of the longest river in Peninsular India? ");
     printf("\n1.Mahanadi\n2.Narmada\n3.Godavari\n4.Krishna");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

      printf("\nThe Badrinath is situated on the banks of which of the following river? ");
     printf("\n1.Alakananda\n2.Bhagirathi\n3.Yamuna\n4.Koshi");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");

      printf("\n Which of the following type of rivers usually eroded along the underlying belt of non-resistant rock?");
     printf("\n1.Consequent River\n2.Antecedent River\n3.Subsequent River\n4.Superimposed River");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");
     printf("TOTAL SCORE:%d",score);

}


break;

case 5:
     printf("\nYou have selected 'GENERAL KNOWLEDGE' for your quiz topics");
 printf("\nPlease select difficulty level");
 printf("\n1.Easy");
 printf("\n2.Difficult\n");
 scanf("%d",&currentaffairsdiff);
 if(currentaffairsdiff==1)
 {
    printf("\nYou have selected your difficulty level as 'easy'");
     printf("\nSo let's begin the quiz");
     printf("\n\n");

     printf("\nWhom did NASA appoint to head its new Moon to Mars Program Office? ");
     printf("\n1.Amit Kshatriya\n2.Renu Malik\n3.Ashish Nain\n.Neha Vashishat");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");

     printf("\nWhat is the name given to the phenomenon whereby certain materials, such as quartz crystal, generate an electric current when subjected to mechanical stress? ");
     printf("\n1.Pressure\n2.Friction\n3.Wave Energy\n.Piezoelectric effect");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==4)
     score=score+1;
     printf("\n\n");

     printf("\nThe International Monetary Fund (IMF) approved a loan program worth $15.6 billion for which country as part of a larger $115 billion package to aid its war-torn economy? ");
     printf("\n1.USA\n2.Ukraine\n3.Germany\n.Greece");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

     printf("\nIn which city is the Unity Cup Cricket Tournament 2023 organized jointly by HUDCO and NBCC being held? ");
     printf("\n1.New Delhi\n2.Pune\n3.Jaipur\n.Bhopal");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");

     printf("\nWhich country has become the 31st member of the North Atlantic Treaty Organization (NATO)? ");
     printf("\n1.Greece\n2.Denmark\n3.UK\n4.Finland");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==4)
     score=score+1;
     printf("\n\n");

     printf("\nWho climbed to the top of the list of the world's richest, with a net worth of $187 billion? ");
     printf("\n1.Jeff Bezos\n2.Larry Ellison\n3.Warren Buffett\n.Elon Musk");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==4)
     score=score+1;
     printf("\n\n");

     printf("\nIn which country did scientists discover evidence of a previously unknown ancient marsupial called Mukupirna fortidentata? ");
     printf("\n1.Japan\n2.Australia\n3.Germany\n.USA");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

     printf("\nWhich planet is NASA training four people to live on in June 2023? ");
     printf("\n1.Venus\n2.Mars\n3.Jupiter\n.Saturn");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

     printf("\nOn which date is the International Day of Zero Waste celebrated? ");
     printf("\n1.March 23\n2.March 30\n3.March 31\n.April 01");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

     printf("\nFrom which state did Bodofa Upendranath Brahma, a prominent Bodo social activist, belong? ");
     printf("\n1.West Bengal\n2.Assam\n3.Nagaland\n.Sikkim");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");
     printf("TOTAL SCORE:%d",score);
 }
else
{
     printf("\nYou have selected your difficulty level as 'difficult'"); 
     printf("\nSo let's begin the quiz");
     printf("\n\n");

      printf("\n Which state signed an MoU with UNEP to implement an urban cooling program in the state?");
     printf("\n1.Bihar\n2.Gujarat\n3.Himachal Pradesh\n.Tamil Nadu");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==4)
     score=score+1;
     printf("\n\n");

      printf("\n The World Bank's Executive Board of Directors has approved a $108 million loan for which state to improve disaster preparedness and enhance flood forecasting? ");
     printf("\n1.Bihar\n2.Odisha\n3.Assam\n4.Sikkim");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

      printf("\n In which city will the world's third-largest cricket stadium be developed, as per the MoU signed between Vedanta's Hindustan Zinc Limited (HZL) and the Rajasthan Cricket Association?");
     printf("\n1.Jaipur\n2.Bhopal\n3.Kolkata\n4.Kochi");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");

      printf("\nIn which country is Nevado del Ruiz, a stratovolcano located in the central part? ");
     printf("\n1.USA\n2.Congo\n3.Spain\n4.Colombia");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==4)
     score=score+1;
     printf("\n\n");

      printf("\nWhere was the space system design lab recently inaugurated by the Indian National Space Promotion and Authorization Centre (IN-SPACe)? ");
     printf("\n1.Kolkata\n2.Ahmedabad\n3.Pune\n4.Jaipur");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

      printf("\nTo which state has the Board of Executive Directors of the World Bank approved a $100 million loan? ");
     printf("\n1.Odisha\n2.Bihar\n3.Jharkhand\n4.Goa");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");

      printf("\nWhich state has received a $363 million loan from the World Bank to provide clean drinking water to two million rural households? ");
     printf("\n1.Bihar\n2.Uttar Pradesh\n3.Kerala\n4.Karnataka");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==4)
     score=score+1;
     printf("\n\n");

      printf("\nWho wrote the book War and Women? ");
     printf("\n1.Shashi Tharoor\n2.Salman Rushdie\n3.M A Hasan\n.Neha Singh");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWhich bank has launched the country's first pocket-sized swipe machine for accepting digital payments called MicroPay? ");
     printf("\n1.UCO Bank\n2.Axis Bank\n3.HDFC Bank\n4.SBI");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

      printf("\nIn which city is Rani Kamalapati Railway Station, which was in the news recently, located? ");
     printf("\n1.Jaipur\n2.Bhopal\n3.Pune\n.Haridwar");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");
     printf("TOTAL SCORE:%d",score);
}


break;
case 6:
       printf("\nYou have selected 'SPORTS' for your quiz topics");
 printf("\nPlease select difficulty level");
 printf("\n1.Easy");
 printf("\n2.Difficult\n");
 scanf("%d",&sportsdiff);
 if(sportsdiff==1)
 {
    printf("\nYou have selected your difficulty level as 'easy'");
     printf("\nSo let's begin the quiz");
     printf("\n\n");

     printf("\nAfter how many Year’s FIFA World Cup held? ");
     printf("\n1. 2 Years\n2. 3 Years\n3. 4 Years\n. 5 Years");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWhich Country won the first FIFA World Cup? ");
     printf("\n1. Argentina\n2.Uruguay\n3.Italy\n4. Brazil");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

     printf("\nWho won the first ICC World Cup? ");
     printf("\n1. India\n2.West Indies\n3.England\n.Australia");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

     printf("\nWho won the first T20 World Cup? ");
     printf("\n1.Pakistan\n2.India\n3. Sri Lanka\n.West Indies");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

     printf("\nWho is known as the Flying Sikh? ");
     printf("\n1. Michael Johnson\n2.Usain Bolt\n3.Milkha Sing\n4. Carl Lewis");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nWho has the Highest Number of Gold Medals in Olympic History? ");
     printf("\n1. Larisa Latynina\n2.Mark Spitz\n3.Michael Phelps\n4.Saina Nehwal");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\n  What is the 100m World Record of Usain Bolt?");
     printf("\n1.14.35 Sec\n2. 9.58 Sec\n3.9.05 Sec\n.10.12 Sec");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

     printf("\nWhat is the Women’s World Record for the 100-Meter Dash? ");
     printf("\n1.12.35 Sec\n2.10.45 Sec\n3.9.55 Sec\n.10.49 Sec");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==4)
     score=score+1;
     printf("\n\n");

     printf("\nWhat is the Women’s World Record for the 100-Meter Dash? ");
     printf("\n1.12.35 Sec\n2.10.45 Sec\n3.9.55 Sec\n.10.49 Sec");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

     printf("\nHow many FIFA World Cup has been played till 2022? ");
     printf("\n1.29\n2.52\n3.14\n4.22");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==4)
     score=score+1;
     printf("\n\n");
     printf("TOTAL SCORE:%d",score);
 }
else
{
     printf("\nYou have selected your difficulty level as 'difficult'"); 
     printf("\nSo let's begin the quiz");
     printf("\n\n");

      printf("\nHow many times has India won the Men’s Hockey World Cup in the Olympics?");
     printf("\n1.3\n2.2\n3.1\n4.0");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");

      printf("\n Which Female has the Most Olympic Gold Medals in Olympic History? ");
     printf("\n1.Birgit Fischer\n2.Marit Bjørgen\n3.Larisa Latynina\n4.Larisa Latynina");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

      printf("\n Who is known as “The Baltimore Bullet”? ");
     printf("\n1.Roger Federer\n2. Usain Bolt\n3.Michael Phelps\n4.Michael Jordan");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

      printf("\nWho is the first Indian Badminton Player to win an Olympic Medal? ");
     printf("\n1.Srikanth Kidambi\n2.P.V. Sindhu\n3.P.V. Nehwal\n.Saina Nehwal");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==4?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==4)
     score=score+1;
     printf("\n\n");

      printf("\nWhen was the first FIFA World Cup held? ");
     printf("\n1.1930\n2. 1925\n3.1934\n.1818");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");

      printf("\nWhen did Cristiano Ronaldo join Juventus Football Club? ");
     printf("\n1.2017\n2.2018\n3.2019\n4.2020");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

      printf("\nWhich Country has Won the Most World Snooker Championships? ");
     printf("\n1.Wales\n2. Scotland\n3.England\n4.Australia");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==3?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==3)
     score=score+1;
     printf("\n\n");

      printf("\n Who holds the World Record for Solving Rubik’s Cube at 3.47 Seconds? ");
     printf("\n1.Feliks Zemdegs\n2.Yusheng Du\n3.Patrick Ponce\n4.Max Park");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");

      printf("\nWho won the FIFA World Cup in 2018? ");
     printf("\n1. France\n2.Germany\n3.Portugal\n4.Uraguay");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==1?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==1)
     score=score+1;
     printf("\n\n");


      printf("\n Who holds the World Record for Solving Rubik’s Cube at 3.47 Seconds? ");
     printf("\n1.Feliks Zemdegs\n2.Yusheng Du\n3.Patrick Ponce\n4.Max Park");
     printf("\nChoose the answer and enter the respective number\n");
     scanf("%d",&op);
     printf(op==2?"CORRECT ANSWER":"WRONG ANSWER");
     if(op==2)
     score=score+1;
     printf("\n\n");
     printf("TOTAL SCORE:%d",score);
      
}

break;
default:
printf("WRONG INPUT!!!!!");
break;
 }

printf("\nFor a REPLAY: PRESS 1\n");
printf("\nTo save your score and assign your character a name and viewing previous score board: PRESS 2\n");
printf("\nTo view scoreboard : PRESS 3\n");

scanf("%d",&replay);

if(replay==1)
{
    score=0;
    goto game;
}
else if(replay==2)
{
 
void scoreboard();
{
  int a;
  char gamename[20];char scoreob[10];
   FILE *fptr;
   fptr = fopen("score.txt","a");

   if(fptr == NULL)
   {
      printf("Error 404 !! FILE NOT FOUND !!\n");   
      exit(1);             
   }
    printf("Enter the name you want to assign to your character : \n");
    scanf("%s",gamename);
    fprintf(fptr,"%s\t",gamename);
    printf("Enter the score you obtained : \n");
    scanf("%s",scoreob);
    fprintf(fptr,"%s\n",scoreob);
   
  
     void viewagain();
{
    FILE* ptr;
	char ch;
	ptr = fopen("score.txt", "r");

	if (NULL == ptr) {
		printf("file can't be opened \n");
	}

    printf("==============================================================================\n");
	printf("Character  Score      \n");
    printf("==============================================================================\n");

	do {
		ch = fgetc(ptr);
		printf("%c", ch);
	} while (ch != EOF);
	fclose(ptr);
   
}
}}
    
  

else if(replay==3)
{
  
    void viewall();
{
    FILE* ptr;
	char ch;
	ptr = fopen("score.txt", "r");

	if (NULL == ptr) {
		printf("file can't be opened \n");
	}

    printf("==============================================================================\n");
	printf("Character  Score     Character  Score \n");
    printf("==============================================================================\n");

	do {
		ch = fgetc(ptr);
		printf("%c", ch);
	} while (ch != EOF);
	fclose(ptr);
   
}

}}
