#include<iostream.h>
#include<conio.h>
#include<process.h>
int a[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0};

int c[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,0,15};
char n;
int p=14;
int check(char);
int win();
void show();
void play(char);
void swapup();
void swapdown();
void swapright();
void swapleft();
void print();



int main()
{     clrscr();
 cout<<"\t\t\tGAME OF 15\n";
  print();
  cout<<"Use: w for up\n\ta for left\n\ts for right\n\tz for down\n";
  cout<<"\nPress e to exit!!!\n";
  show();
getch();
return 0;
}

/*--------------------------------------------------*/

void show()
{ int t;
 label:
  { cout<<"Enter a key : ";
    cin>>n;
     }
	if(n=='w'||n=='a'||n=='s'||n=='z')
      {
	   t=check(n);
	{	if(t==0)
		play(n);
		else
		{cout<<"Invaild selection\n";
		goto label;
		}
	  }
      }
      else if(n=='e')
      {exit(0);
      }


      else
      {cout<<"Wrong key\n";
       goto label;
       }
}


/*---------------------------------------------------*/
int check(char m)
{ int h=0;

 switch(m)
{
case 'z':
{if(c[12]==0||c[13]==0||c[14]==0||c[15]==0)
  h= 1;
  break;
  }
case 'w' :
{  if(c[0]==0||c[1]==0||c[2]==0||c[3]==0)
     h= 1;
     break;
     }
case 'a' :
{ if(c[0]==0||c[4]==0||c[8]==0||c[12]==0)
h= 1;
break;
}
case 's':
{if(c[3]==0||c[7]==0||c[11]==0||c[15]==0)
h= 1;
break;
}
default:
{
 h= 0;
  }
}
return h;
}
/*-------------------------------------------------------*/


void play(char b)
{int w;
 if(b=='w')
 swapup();
 if(b=='a')
 swapleft();
 if(b=='s')
 swapright();
 if(b=='z')
 swapdown();
 print();
w= win();
if(w==16)
{cout<<"Conratulations !!! You have solved the puzzle";
getch();
exit(0);
}
else
show();
}

/*------------------------------------------*/


int  win()
{int v=0;
for( int i=0;i<16;i++)
if(a[i]==c[i])
 v++;
 return v;
 }


/*------------------------------------------------------------*/

void swapup()
{c[p]=c[p-4];
c[p-4]=0;
p=p-4;
}
void swapdown()
{c[p]=c[p+4];
 c[p+4]=0;
 p=p+4;
 }
 void swapright()
 {c[p]=c[p+1];
 c[p+1]=0;
 p=p+1;
 }
 void swapleft()
 {
 c[p]=c[p-1];
 c[p-1]=0;
 p=p-1;
 }


 /*---------------------------------------------------*/


 void print()
 {
  cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<" "<<c[3]<<"\n";
  cout<<c[4]<<" "<<c[5]<<" "<<c[6]<<" "<<c[7]<<"\n";
  cout<<c[8]<<" "<<c[9]<<" "<<c[10]<<" "<<c[11]<<"\n";
  cout<<c[12]<<" "<<c[13]<<" "<<c[14]<<" "<<c[15]<<"\n";
 }