#include<iostream>
using namespace std;
char arr[10]={'0','1','2','3','4','5','6','7','8','9'}; //zero is not displayed from this array and
                                                        //integers are filled as a characters
void base()
{
    cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[1]<<"  |  "<<arr[2]<<"  |  "<<arr[3]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[4]<<"  |  "<<arr[5]<<"  |  "<<arr[6]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[7]<<"  |  "<<arr[8]<<"  |  "<<arr[9]<<endl;
    cout<<"     |     |     "<<endl;
}
int check()
{
    if(arr[1]==arr[2] && arr[2]==arr[3])
    return 1;
    if(arr[4]==arr[5] && arr[5]==arr[6])
    return 1;
    if(arr[7]==arr[8] && arr[8]==arr[9])
    return 1;
    if(arr[1]==arr[4] && arr[4]==arr[7])
    return 1;
    if(arr[2]==arr[5] && arr[5]==arr[8])
    return 1;
    if(arr[3]==arr[6] && arr[6]==arr[9])
    return 1;
    if(arr[1]==arr[5] && arr[5]==arr[9])
    return 1;
    if(arr[3]==arr[5] && arr[5]==arr[7])
    return 1;
    if(arr[1]!='1' && arr[2]!='2' && arr[3]!='3' && arr[4]!='4' && arr[5]!='5' && arr[6]!='6' && arr[7]!='7' && arr[8]!='8'
        && arr[9]!='9')
    return 0; //for draw game
    else
    return -1; //game is in progress
}
int main()
{
    cout<<"\n*****TIC TAC TOE GAME*****\n";
    int player=1,choice,win;
    char mark;

    do
    {
        base();
        player=(player%2)?1:2; //limiting the player numbers upto 2 only.
        cout<<"\nPlayer "<<player<<", Enter the number at which you want to mark :";
        cin>>choice;

        mark=(player==1)?'X':'O'; //Deciding the mark according to player

        if(choice==1 && arr[1]=='1')
        arr[1]=mark;
        else if(choice==2 && arr[2]=='2')
        arr[2]=mark;
        else if(choice==3 && arr[3]=='3')
        arr[3]=mark;
        else if(choice==4 && arr[4]=='4')
        arr[4]=mark;
        else if(choice==5 && arr[5]=='5')
        arr[5]=mark;
        else if(choice==6 && arr[6]=='6')
        arr[6]=mark;
        else if(choice==7 && arr[7]=='7')
        arr[7]=mark;
        else if(choice==8 && arr[8]=='8')
        arr[8]=mark;
        else if(choice==9 && arr[9]=='9')
        arr[9]=mark;
        else
        {
            cout<<"\nYou have entered invalid choice!";
            player--; //due to player++ in further lines //important
            cin.ignore();
        }
        win=check();

        player++;

    }while(win==-1); //for win==-1 game continues
    base();

    if(win==1)
    {
        cout<<"\nPlayer "<<--player<<" has won the match."<<endl;
    }
    else //that is value of win is 0
    {
        cout<<"\nMatch is DRAW."<<endl;
    }

}
