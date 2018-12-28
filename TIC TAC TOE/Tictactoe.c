//ASCII value of X = 088, O = 079
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

#define FILENAME "rules.txt"
#define M 4
#define N 4

char player1[30];
char player2[30];

void play(int a[M][N], int count);  //Starts the game
void drawBoard();                   //Draws the Grids and Numbers
void mainmenu();                    //Main Menu Screen
void rules();                       //Reads from Rules.txt file
void SetColor(int ForgC);           //Set Text Color for Console
int search_pos(int a[M][N], int val, int *ptr1, int *ptr2);	//Search for Array Position
int check_win(int a[M][N]);		    //Checking for Win Conditions

int main()
{
    mainmenu();
    return 0;
}

void play(int a[M][N], int count)
{
    int i, j, val, pos_x, pos_y, result, dup;
    int *p1, *p2;               //Element Position Finding Pointers
    p1=&pos_x;
    p2=&pos_y;
    system("cls");
    drawBoard(a);

    if(count%2!=0)          //Player 1 Commands
    {
        SetColor(2);
        printf("Count: %d, %s(P1)'s turn: ", count, player1);
        scanf("%d", &val);
        dup=search_pos(a, val, p1, p2);
        if(dup==0)
            play(a,count);
        a[pos_x][pos_y]=88;
        system("cls");
        drawBoard(a);
        result=check_win(a);
        if(result==1)
        {
            SetColor(2);
            printf("%s Wins!Press any key to continue....", player1);
            getch();
            system("cls");
            return;
        }
    }
    if(count%2 == 0)        //Player 2 Commands
    {
        SetColor(4);
        printf("Count: %d, %s(P2)'s turn: ", count, player2);
        scanf("%d", &val);
        dup=search_pos(a, val, p1, p2);
        if(dup==0)
            play(a,count);
        a[pos_x][pos_y]=79;
        //Print after O change
        system("cls");
        drawBoard(a);
        result=check_win(a);
        if(result==2)
        {
            SetColor(4);
            printf("%s(P2) Wins! Press any key to continue....", player2);
            getch();
            system("cls");
            return;
        }
    }
    if(count==16)
    {
        printf("Game Ended in Draw. Press any key to continue....");
        getch();
        system("cls");
        return;
    }
    count++;
    play(a, count);
}

int check_win(int a[M][N])
{
    int i,j;
    for(i=0; i<4; i++)
    {
        if(a[i][0]==88 && a[i][1]==88 && a[i][2]==88 && a[i][3]==88)
            return 1;
        else if(a[i][0]==79 && a[i][1]==79 && a[i][2]==79 && a[i][3]==79)
            return 2;
        else if(a[0][i]==88 && a[1][i]==88 && a[2][i]==88 && a[3][i]==88)
            return 1;
        else if(a[0][i]==79 && a[1][i]==79 && a[2][i]==79 && a[3][i]==79)
            return 2;
    }
    if(a[0][0]==88 && a[1][1]==88 && a[2][2]==88 && a[3][3]==88)
        return 1;
    else if(a[0][0]==79 && a[1][1]==79 && a[2][2]==79 && a[3][3]==79)
        return 2;
    else if(a[3][0]==88 && a[2][1]==88 && a[1][2]==88 && a[0][3]==88)
        return 1;
    else if(a[3][0]==79 && a[2][1]==79 && a[1][2]==79 && a[0][3]==79)
        return 2;
}

int search_pos(int a[M][N], int val, int *ptr1, int *ptr2)
{
    int i,j, flag=0;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(a[i][j]==val)
            {
                *ptr1=i;
                *ptr2=j;
                flag=1;
            }
        }
    }
    return flag;
}

void drawBoard(int a[M][N])
{
    int i,j;
    printf("\n\n");
    for(i=0; i<4; i++)
    {
        printf("\t");
        for(j=0; j<4; j++)
        {
            if(a[i][j]==88)
            {
                SetColor(2);
                printf("%c\t\t", a[i][j]);
            }
            else if(a[i][j]==79)
            {
                SetColor(4);
                printf("%c\t\t", a[i][j]);
            }

            else
            {
                SetColor(15);
                printf("%d\t\t", a[i][j]);
            }
        }
        printf("\n\n\n\n");
    }
    SetColor(15);
    COORD coord= {0,0};
    for(i=0; i<16; i++)
    {
        for (j=16; j<=48; j+=16)
        {
            coord.X=j;//column
            coord.Y=i;//rows
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
            if(i==4||i==8||i==12)
                printf("\n");
            else
                printf("|");
        }
    }
    for(i=4; i<=12; i+=4)
    {
        coord.X=0;//column
        coord.Y=i;//rows
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
        printf("-------------------------------------------------------------");
    }
    coord.X=0;//column
    coord.Y=20;//rows
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

void rules()
{
    FILE *fp;
    char c;
    fp=fopen(FILENAME, "r");
    system("cls");
    if((fp=fopen(FILENAME, "r"))==NULL)
    {
        printf("Error opening file.");
    }
    while ((c = getc(fp)) != EOF)
        putchar(c);
    fclose(fp);
    printf("\n\nPress any key to continue...");
    getch();
    system("cls");
}

void mainmenu()
{
    char ch;
    while(1)
    {
        int a[4][4]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
        SetColor(15);
        printf("\n------------------ MAIN MENU ------------------\n");
        printf("1) Start Game\n");
        printf("2) Rules\n");
        printf("3) Exit\n");
        printf("-------------------------------------------------\n");
        printf("Your Option: ");
        scanf(" %c", &ch);
        getchar();
        switch(ch)
        {
        case '1':
            SetColor(2);
            printf("\n\nEnter Player 1(X) Name: ");
            gets(player1);
            SetColor(4);
            printf("Enter Player 2(O) Name: ");
            gets(player2);
            SetColor(15);
            printf("LOADING.....");
            Sleep(1000);
            play(a, 1);
            break;
        case '2':
            rules();
            break;
        case '3':
            return;
        default:
            system("cls");
            mainmenu();
            break;
        }
    }
}
