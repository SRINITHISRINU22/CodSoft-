#include<iostream>
using namespace std;
void drawboard(char arr[3][3])
{int i,j;
    cout<<"____________"<<endl;
for(i=0;i<3;i++)
{cout<<"| ";
for(j=0;j<3;j++)
{
    cout<<arr[i][j]<<" | ";
}
   cout<<"\n_____________"<<endl;
}
    
}
bool checkwin(char a[][3],char b)
{
    int i;
    for(i=0;i<3;i++)
    {
        if((a[0][i]==b)&&(a[1][i]==b)&&(a[2][i]==b))
        {
            cout<<"player playing with "<<b<<" has won";
          return true;
        }
if((a[i][0]==b)&&(a[i][1]==b)&&(a[i][2]==b))
{
cout<<"player playing with "<<b<<" has won";
return true;
}

else if(((a[0][0]==b)&&(a[1][1]==b)&&(a[2][2]==b))||((a[0][2]==b)&&(a[1][1]==b)&&(a[2][0]==b)))
{
cout<<"player playing with "<<b<<" has won";
return true;
}}

return false;

    
}
int main()
{int i,j,m,n,temp=0;
char arr[3][3],a='X';
    cout<<"welcome to tic-tac-toe game"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr[i][j]=' ';
        }
    }
    drawboard(arr);
    for(i=0;i<9;i++)
    {   tap:
        cout<<"enter row and column:" ;
        cin>>m>>n;
        if(m<0||m>2||n<0||n>2)
        {
            cout<<"invalid move"<<endl;
cout<<"try filling another box"<<endl;
            goto tap;
        }
        else if(arr[m][n]!=' ')
        {
            cout<<"the box is already filled "<<endl;
            cout<<"try filling another box"<<endl;
            goto tap;
            
            
        }
        arr[m][n]=a;
        drawboard(arr);
        if(checkwin(arr,a))
        {return 1;}
        
       a=(a=='X')?'O':'X';
       temp++;
    }
    if((temp==9)&&(!checkwin(arr,'X'))&&(!checkwin(arr,'O')))
    {
       cout<<"the match is draw"; 
    }
    return 0;
}