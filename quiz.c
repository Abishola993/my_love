#include <stdio.h>
#include <ctype.h>

int main(){


char Question[][100] = {"1. which organ has four chambers?:",
                        "2. what is the bodys largest organ?:", 
                        "3. what percentage of our bodies born is made for up of water?:",
                        "4. which element is said to keep bones strong?:",
                        "5. who many times does the heartbeat per day?:",
                        "6. how long is the gestation period of an african elephant?:",
                        "7. what is a female donkey called?:",
                        "8. what is the fastest land animals in the world?:",
                        "9. how many eyes does a bee have?:",
                        "10. how many hearts does an octopus have?:",
                        "11. do sponges have hearts?:",
                        "12. who is the richest person in the world?:",
                        "13. best african artists 2023?:",
                        "14. what is the common name for the notamacrous?:",
                         "15. which disease is caused by the deficient of vitamin B1?:",
                         "16. which of the following is a functional unit of a body?:",
                         "17. which of the of the following cell doesnt contain a cell?:",
                         "18. DNA is stored in which of the following cell organelle?:",
                         "19. which of the following ordanisms dosent have a cell?:",
                         "20. which of the following cell do not lack the ability to divide?:",
                         "21. who is my favourite person?:",
                         "22. what my favourite food?:",
                         "23. the name of my best friend?:",
                         "24. what my favorite hubby?:",
                         "25. what my full name?:"};


        char options[][100] = {"A. liver", "B. nose", "C. heart",
                               "A. skin", "B. skull", "C. bone",
                               "A. 70-100", "B. 60-65","C. 90-95",
                               "A. 0xygen", "B.calcium", "C. hydrogen",
                               "A. 200,000", "B. 150,00", "C. 100,00o",
                               "A. 22monts", "B. 33monts", "C. 50 monts",
                               "A. penny", "B.jenny", "C. munny",
                               "A. lion", "B. cheetach", "C. dogs",
                               "A. 5", "B. 12", "C. 18",
                               "A.8", "B. 15", "C. 3",
                               "A. yes", "B. yes", "C. no",
                               "A. Rita ", "B. elon mask", "C.Ruth",
                               "A. Rema", "B. Davido", "C. wizkid",
                               "A. possun", "B. skunk", "C. bobcat",
                               "A. measles", "B. mumps", "C. scratch",
                               "A. animal cell", "B. plant cell", "C. fungi",
                               "A. fungi", "B. virus","C. algae",
                               "A. cell wall","B. nucleus", "cytoplasm",
                               "A. fungi", "B.virus", "alage",
                               "A. red blood cell", "B. skin cell", "C. nerves cells",
                               "A. mom", "B. dad", "C. charity",
                               "A. Rice", "B. beans", "C. yam",
                               "A. Amarchi", "B. josephine", "C. maro",
                               "A. sleeping", "B. try new things", "C. going out",
                               "A. Abishla rita", "B. Abishola o.rita", "C. rita abishola",};
                               
       char answers[25] = {'C', 'A', 'B', 'B', 'C', 'A', 'A', 'B', 'B', 'A', 'C', 'C', 'A', 'B', 'C', 'A', 'B', 'C', 'B', 'B', 'B', 'A', 'B', 'B', 'B',};
       int numberofQuestion = sizeof(Question)/sizeof(Question[0]);

       char guess;
       int score;

       printf("QUIZ GAMES\n");

       for(int i = 0; i <numberofQuestion; i++)
       {
        printf("***************\n");
        printf("%s\n", Question[i]);
        printf("***************\n");

         for(int j = (i * 3); j < (i * 3) + 3; j++)
        {

           printf("%s\n", options[j]);

        }

        printf("guess: ");
        scanf("%c", &guess);
        scanf("%c"); //clear \n from input buffer

        guess = toupper(guess);

        if(guess == answers[i])
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
         printf("WRONG!\n");   
        }
       }
       printf("**********************\n");
       printf("FINAL SCORE: %d/%d\n", score, numberofQuestion);
       printf("***********************\n");

    return 0;
}
