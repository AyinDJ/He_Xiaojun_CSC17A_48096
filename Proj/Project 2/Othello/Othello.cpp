/* 
 * File:   Othello.cpp
 * Author: Jimmy
 * 
 * Created on December 7, 2016, 1:06 AM
 */


//use the header
#include "Othello.h"


//the function to calculate the ● and ○ number
int Othello::counter(int n)
{  
    int x;  
    x=0;  
    for(int i=1;i<=8;i++)  
    {  
        for(int j=1;j<=8;j++)  
        {  
            if(chessmen[i][j]==n)  
                x++;  
        }  
    }  
    return x;  
}  
  
  
// out put the checkerboard
void Othello::start()
{  
    //group the checkerboard
    cout<<"  1   2   3   4   5   6   7   8   "<<endl;  
    cout<<"┏━┳━┳━┳━┳━┳━┳━┳━┓"<<endl;  
    for(int i=1;i<8;i++)  
    {  
        for(int k=1;k<=8;k++)  
        {  
            cout<<"┃";  
            switch(chessmen[i][k])  
            {  
                case 0:cout<<"  ";break;  
                case 1:cout<<"●";break;  
                case -1:cout<<"○";break;  
            }  
        }  
        cout<<"┃  "<<i<<endl;  
        cout<<"┣━";  
        for(int j=1;j<8;j++)  
        {  
            cout<<"╋━";  
        }  
        cout<<"┫"<<endl;  
    }  
    for(int k=1;k<=8;k++)  
    {  
        cout<<"┃";  
        switch(chessmen[8][k])  
        {  
            case 0:cout<<" ";break;  
            case 1:cout<<"●";break;  
            case -1:cout<<"○";break;  
        }  
        if(chessmen[8][k]==0)  
            cout<<" ";  
    }  
    //it also out put the number of the ● and ○
    cout<<"┃  8           ●have:"<<counter(1)<<endl;  ;
    cout<<"┗━┻━┻━┻━┻━┻━┻━┻━┛              ○"<<"have:"
            <<counter(-1)<<endl;  
}  
  
//check the game have winner or not
int Othello::win()  
{  
    if(!counter(1))  
    {  
        cout<<"Congratulations ● is win"<<endl;  
        return 1;  
    }  
    else if(!counter(-1))  
    {  
        cout<<"Congratulations ○ is win"<<endl;  
        return 1;  
    }  
    else if(counter(1)+counter(-1)==64)  
    {  
        if(counter(1)>counter(-1))  
        {  
            cout<<"Congratulations ● is win"<<endl;  
            return 1;  
        }  
        else  
        {  
            cout<<"Congratulations ○ is win"<<endl;  
            return 1;  
        }  
    }  
    return 0;  
}  
  
  
//clear the checkerboard
void Othello::clear()  
{  
    memset(chessmen,0,sizeof(chessmen));  
    //set the ● is 1 and ○ is -1
    chessmen[4][4]=chessmen[5][5]=1; 
    chessmen[4][5]=chessmen[5][4]=-1;
}  
  

//change the coordinate that the user
//select to ○ from the checkerboard
void Othello::change1(int x, int y) 
{  
    chessmen[x][y]=-1;  
    if(chessmen[x][y+1]==1)  
    {  
        for(int i=y+2;i<=8;i++)  
        {  
            if(chessmen[x][i]==0)  
                break;  
            if(chessmen[x][i]==1)  
                continue;  
            if(chessmen[x][i]==-1)  
            {  
                for(int j=y+1;j<=i;j++)  
                    chessmen[x][j]=-1;  
                break;  
            }  
        }  
    }  
    if(chessmen[x][y-1]==1)  
    {  
        for(int i=y-2;i>=1;i--)  
        {  
            if(chessmen[x][i]==0)  
                break;  
            if(chessmen[x][i]==1)  
                continue;  
            if(chessmen[x][i]==-1)  
            {  
                for(int j=y-1;j>=i;j--)  
                    chessmen[x][j]=-1;  
                break;  
            }  
        }  
    }  
    if(chessmen[x-1][y]==1)  
    {  
        for(int i=x-2;i>=1;i--)  
        {  
            if(chessmen[i][y]==0)  
                break;  
            if(chessmen[i][y]==1)  
                continue;  
            if(chessmen[i][y]==-1)  
            {  
                for(int j=x-1;j>=i;j--)  
                    chessmen[j][y]=-1;  
                break;  
            }  
        }  
    }  
    if(chessmen[x+1][y]==1)  
    {  
        for(int i=x+2;i<=8;i++)  
        {  
            if(chessmen[i][y]==0)  
                break;  
            if(chessmen[i][y]==1)  
                continue;  
            if(chessmen[i][y]==-1)  
            {  
                for(int j=x+1;j<=i;j++)  
                    chessmen[j][y]=-1;  
                break;  
            }  
        }  
    }  
    if(chessmen[x+1][y+1]==1)  
    {  
        int top=y+2;  
        for(int i=x+2;i<=8;i++)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==1)  
                top++;  
            if(chessmen[i][top]==-1)  
            {  
                top=y+1;  
                for(int j=x+1;j<=i;j++)  
                {  
                    chessmen[j][top]=-1;  
                    top++;  
                }  
                break;  
            }  
        }  
    }  
    if(chessmen[x-1][y-1]==1)  
    {  
        int top=y-2;  
        for(int i=x-2;i>=1;i--)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==1)  
                top--;  
            if(chessmen[i][top]==-1)  
            {  
                top=y-1;  
                for(int j=x-1;j>=i;j--)  
                {  
                    chessmen[j][top]=-1;  
                    top--;  
                }  
                break;  
            }  
        }  
    }  
    if(chessmen[x-1][y+1]==1)  
    {  
        int top=y+2;  
        for(int i=x-2;i>=1;i--)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==1)  
                top++;  
            if(chessmen[i][top]==-1)  
            {  
                top=y+1;  
                for(int j=x-1;j>=i;j--)  
                {  
                    chessmen[j][top]=-1;  
                    top++;  
                }  
                break;  
            }  
        }  
    }  
    if(chessmen[x+1][y-1]==1)  
    {  
        int top=y-2;  
        for(int i=x+2;i<=8;i++)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==1)  
                top--;  
            if(chessmen[i][top]==-1)  
            {  
                top=y-1;  
                for(int j=x+1;j<=i;j++)  
                {  
                    chessmen[j][top]=-1;  
                    top--;  
                }  
                break;  
            }  
        }  
    }  
  
}  

//change the coordinate that the user
//select to ● from the checkerboard
void Othello::change2(int x, int y)
{  
    chessmen[x][y]=1;  
    if(chessmen[x][y+1]==-1)  
    {  
        for(int i=y+2;i<=8;i++)  
        {  
            if(chessmen[x][i]==0)  
                break;  
            if(chessmen[x][i]==-1)  
                continue;  
            if(chessmen[x][i]==1)  
            {  
                for(int j=y+1;j<=i;j++)  
                    chessmen[x][j]=1;  
                break;  
            }  
        }  
    }  
    if(chessmen[x][y-1]==-1)  
    {  
        for(int i=y-2;i>=1;i--)  
        {  
            if(chessmen[x][i]==0)  
                break;  
            if(chessmen[x][i]==-1)  
                continue;  
            if(chessmen[x][i]==1)  
            {  
                for(int j=y-1;j>=i;j--)  
                    chessmen[x][j]=1;  
                break;  
            }  
        }  
    }  
    if(chessmen[x-1][y]==-1)  
    {  
        for(int i=x-2;i>=1;i--)  
        {  
            if(chessmen[i][y]==0)  
                break;  
            if(chessmen[i][y]==-1)  
                continue;  
            if(chessmen[i][y]==1)  
            {  
                for(int j=x-1;j>=i;j--)  
                    chessmen[j][y]=1;  
                break;  
            }  
        }  
    }  
    if(chessmen[x+1][y]==-1)  
    {  
        for(int i=x+2;i<=8;i++)  
        {  
            if(chessmen[i][y]==0)  
                break;  
            if(chessmen[i][y]==-1)  
                continue;  
            if(chessmen[i][y]==1)  
            {  
                for(int j=x+1;j<=i;j++)  
                    chessmen[j][y]=1;  
                break;  
            }  
        }  
    }  
    if(chessmen[x+1][y+1]==-1)  
    {  
        int top=y+2;  
        for(int i=x+2;i<=8;i++)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==-1)  
                top++;  
            if(chessmen[i][top]==1)  
            {  
                top=y+1;  
                for(int j=x+1;j<=i;j++)  
                {  
                    chessmen[j][top]=1;  
                    top++;  
                }  
                break;  
            }  
        }  
    }  
    if(chessmen[x-1][y-1]==-1)  
    {  
        int top=y-2;  
        for(int i=x-2;i>=1;i--)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==-1)  
                top--;  
            if(chessmen[i][top]==1)  
            {  
                top=y-1;  
                for(int j=x-1;j>=i;j--)  
                {  
                    chessmen[j][top]=1;  
                    top--;  
                }  
                break;  
            }  
        }  
    }  
    if(chessmen[x-1][y+1]==-1)  
    {  
        int top=y+2;  
        for(int i=x-2;i>=1;i--)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==-1)  
                top++;  
            if(chessmen[i][top]==1)  
            {  
                top=y+1;  
                for(int j=x-1;j>=i;j--)  
                {  
                    chessmen[j][top]=1;  
                    top++;  
                }  
                break;  
            }  
        }  
    }  
    if(chessmen[x+1][y-1]==-1)  
    {  
        int top=y-2;  
        for(int i=x+2;i<=8;i++)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==-1)  
                top--;  
            if(chessmen[i][top]==1)  
            {  
                top=y-1;  
                for(int j=x+1;j<=i;j++)  
                {  
                    chessmen[j][top]=1;  
                    top--;  
                }  
                break;  
            }  
        }  
    }  
  
}  
  
  
//check the enter for ○ select
int Othello::judge1(int x, int y)
{  
    if(chessmen[x][y]==1||chessmen[x][y]==-1)  
        return 0;  
    //the ○ back side is ●
    if(chessmen[x][y+1]==1)  
    {  
        for(int i=y+2;i<=8;i++)  
        {  
            if(chessmen[x][i]==0)  
                break;  
            if(chessmen[x][i]==1)  
                continue;  
            if(chessmen[x][i]==-1)  
                return 1;  
        }  
    }  
    //the ● front side is ○
    if(chessmen[x][y-1]==1)  
    {  
        for(int i=y-2;i>=1;i--)  
        {  
            if(chessmen[x][i]==0)  
                break;  
            if(chessmen[x][i]==1)  
                continue;  
            if(chessmen[x][i]==-1)  
                return 1;  
        }  
    }  
    //the ● top side is ○
    if(chessmen[x-1][y]==1)  
    {  
        for(int i=x-2;i>=1;i--)  
        {  
            if(chessmen[i][y]==0)  
                break;  
            if(chessmen[i][y]==1)  
                continue;  
            if(chessmen[i][y]==-1)  
                return 1;  
        }  
    }  
    //the ● lower side is ○
    if(chessmen[x+1][y]==1)  
    {  
        for(int i=x+2;i<=8;i++)  
        {  
            if(chessmen[i][y]==0)  
                break;  
            if(chessmen[i][y]==1)  
                continue;  
            if(chessmen[i][y]==-1)  
                return 1;  
        }  
    }  
    //the ● right down side is ○
    if(chessmen[x+1][y+1])  
    {  
        int top=y+2;  
        for(int i=x+2;i<=8;i++)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==1)  
                top++;  
            if(chessmen[i][top]==-1)  
                return 1;  
  
        }  
    }  
    //the ● left up side is ○
    if(chessmen[x-1][y-1])  
    {  
        int top=y-2;  
        for(int i=x-2;i>=1;i--)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==1)  
                top--;  
            if(chessmen[i][top]==-1)  
                return 1;  
        }  
    }  
    //the ● right up side is ○
    if(chessmen[x-1][y+1])  
    {  
        int top=y+2;  
        for(int i=x-2;i>=1;i--)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==1)  
                top++;  
            if(chessmen[i][top]==-1)  
                return 1;  
        }  
    }  
    //the ● left down side is ○
    if(chessmen[x+1][y-1])  
    {  
        int top=y-2;  
        for(int i=x+2;i<=8;i++)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==1)  
                top--;  
            if(chessmen[i][top]==-1)  
                return 1;  
        }  
    }  
    return 0;  
  
}  


//check the enter for ● select
int Othello::judge2(int x, int y)
{  
    if(chessmen[x][y]==1||chessmen[x][y]==-1)  
        return 0;  
    //the ● back side is ○
    if(chessmen[x][y+1]==-1)
    {  
        for(int i=y+2;i<=8;i++)  
        {  
            if(chessmen[x][i]==0)  
                break;  
            if(chessmen[x][i]==-1)  
                continue;  
            if(chessmen[x][i]==1)  
                return 1;  
        }  
    }  
    //the ● front side is ○
    if(chessmen[x][y-1]==-1)
    {  
        for(int i=y-2;i>=1;i--)  
        {  
            if(chessmen[x][i]==0)  
                break;  
            if(chessmen[x][i]==-1)  
                continue;  
            if(chessmen[x][i]==1)  
                return 1;  
        }  
    }  
    //the ● top side is ○
    if(chessmen[x-1][y]==-1)
    {  
        for(int i=x-2;i>=1;i--)  
        {  
            if(chessmen[i][y]==0)  
                break;  
            if(chessmen[i][y]==-1)  
                continue;  
            if(chessmen[i][y]==1)  
                return 1;  
        }  
    }  
    //the ● lower side is ○
    if(chessmen[x+1][y]==-1)
    {  
        for(int i=x+2;i<=8;i++)  
        {  
            if(chessmen[i][y]==0)  
                break;  
            if(chessmen[i][y]==-1)  
                continue;  
            if(chessmen[i][y]==1)  
                return 1;  
        }  
    }  
    //the ● right down side is ○
    if(chessmen[x+1][y+1]==-1)
    {  
        int top=y+2;  
        for(int i=x+2;i<=8;i++)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==-1)  
                top++;  
            if(chessmen[i][top]==1)  
                return 1;  
        }  
    }  
    //the ● left up side is ○
    if(chessmen[x-1][y-1]==-1)
    {  
        int top=y-2;  
        for(int i=x-2;i>=1;i--)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            else if(chessmen[i][top]==-1)  
                top--;  
            if(chessmen[i][top]==1)  
                return 1;  
        }  
    }  
    //the ● right up side is ○
    if(chessmen[x-1][y+1]==-1)
    {  
        int top=y+2;  
        for(int i=x-2;i>=1;i--)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==-1)  
                top++;  
            if(chessmen[i][top]==1)  
                return 1;  
        }  
    }  
    //the ● left down side is ○
    if(chessmen[x+1][y-1]==-1)
    {  
        int top=y-2;  
        for(int i=x+2;i<=8;i++)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==-1)  
                top--;  
            if(chessmen[i][top]==1)  
                return 1;  
        }  
    }  
    return 0;  
}  
  

//the function to calculate the AI select
int Othello::num(int x, int y)  
{  
    if(!judge2(x, y))  
        return 0;  
    int n=0;  
    chessmen[x][y]=1;  
    //the ● back side is ○
    if(chessmen[x][y+1]==-1)  
    {  
        for(int i=y+2;i<=8;i++)  
        {  
            if(chessmen[x][i]==0)  
                break;  
            if(chessmen[x][i]==-1)  
                continue;  
            if(chessmen[x][i]==1)  
            {  
                for(int j=y+1;j<i;j++)  
                    n++;  
                break;  
            }  
        }  
    }  
    //the ● front side is ○
    if(chessmen[x][y-1]==-1)  
    {  
        for(int i=y-2;i>=1;i--)  
        {  
            if(chessmen[x][i]==0)  
                break;  
            if(chessmen[x][i]==-1)  
                continue;  
            if(chessmen[x][i]==1)  
            {  
                for(int j=y-1;j>i;j--)  
                    n++;  
                break;  
            }  
        }  
    }  
    //the ● top side is ○
    if(chessmen[x-1][y]==-1)  
    {  
        for(int i=x-2;i>=1;i--)  
        {  
            if(chessmen[i][y]==0)  
                break;  
            if(chessmen[i][y]==-1)  
                continue;  
            if(chessmen[i][y]==1)  
            {  
                for(int j=x-1;j>i;j--)  
                    n++;  
                break;  
            }  
        }  
    }  
    //the ● lower side is ○
    if(chessmen[x+1][y]==-1)  
    {  
        for(int i=x+2;i<=8;i++)  
        {  
            if(chessmen[i][y]==0)  
                break;  
            if(chessmen[i][y]==-1)  
                continue;  
            if(chessmen[i][y]==1)  
            {  
                for(int j=x+1;j<i;j++)  
                    n++;  
                break;  
            }  
        }  
    }  
    //the ● right down side is ○
    if(chessmen[x+1][y+1]==-1)  
    {  
        int top=y+2;  
        for(int i=x+2;i<=8;i++)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==-1)  
                top++;  
            if(chessmen[i][top]==1)  
            {  
                top=y+1;  
                for(int j=x+1;j<i;j++)  
                {  
                    n++;  
                    top++;  
                }  
                break;  
            }  
        }  
    }  
    //the ● left up side is ○
    if(chessmen[x-1][y-1]==-1)  
    {  
        int top=y-2;  
        for(int i=x-2;i>=1;i--)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==-1)  
                top--;  
            if(chessmen[i][top]==1)  
            {  
                top=y-1;  
                for(int j=x-1;j>i;j--)  
                {  
                    n++;  
                    top--;  
                }  
                break;  
            }  
        }  
    }  
    //the ● right up side is ○
    if(chessmen[x-1][y+1]==-1)  
    {  
        int top=y+2;  
        for(int i=x-2;i>=1;i--)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==-1)  
                top++;  
            if(chessmen[i][top]==1)  
            {  
                top=y+1;  
                for(int j=x-1;j>i;j--)  
                {  
                    n++;  
                    top++;  
                }  
                break;  
            }  
        }  
    }  
    //the ● left down side is ○
    if(chessmen[x+1][y-1]==-1)  
    {  
        int top=y-2;  
        for(int i=x+2;i<=8;i++)  
        {  
            if(chessmen[i][top]==0)  
                break;  
            if(chessmen[i][top]==-1)  
                top--;  
            if(chessmen[i][top]==1)  
            {  
                top=y-1;  
                for(int j=x+1;j<i;j++)  
                {  
                    n++;  
                    top--;  
                }  
                break;  
            }  
        }  
    }  
    chessmen[x][y]=0;  
    return n;  
}

