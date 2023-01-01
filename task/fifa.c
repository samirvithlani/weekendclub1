#include<stdio.h>

char team1[10];
char team2[10];
int t1s;
int t2s,flag=0;
void createTeam(){

    _flushall();
    printf("\n enter team1 name");
    gets(team1);
    printf("\n enter team2 name");
    gets(team2);
    flag=1;
}

void displayTeams(){

    printf("\n team 1 = %s",team1);
    printf("\n team 2  = %s",team2);

}
void countScore(){

    printf("\n enter team1 score");
    scanf("%d",&t1s);
    printf("\n enter team2 score");
    scanf("%d",&t2s);

    printf("\n team 1 score  = %d",t1s);
    printf("\n team 2 score  = %d",t2s);
    if(t1s>t2s){
        printf("\n %s team win",team1);
    }
    else if(t1s == t2s){
        printf("\n TIE");
    }
    else{
        printf("\n %s team win",team2);
    }

}
void createMatch(){

    displayTeams();
    printf("\n enter 1 for create match between %s and %s ",team1,team2);
    int start;
    scanf("%d",&start);
    if(start==1){
        printf("\n match started...");
        countScore();
    }
    else{
        exit(0);
    }

}

void main(){

    int choice;
    do{
            printf("\n enter 1 for create team \n 2 for create match\n press 3 for exit :");
            scanf("%d",&choice);
    switch(choice){

    case 1:
            createTeam();
        break;
    case 2:
            if(flag==1){
            createMatch();
            }else{
                printf("\n create team first !");
            }

        break;


    }

    }while(choice!=3);


}
