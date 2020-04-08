#include<iostream> using namespace std;

int main()
{
int x;
cout<<"enter number"; cin>>x;

 
try
{
 


if(x>0)

{

}

else
{

}
 





throw x;




throw 'X' ;
 

if(x<=0)
{
throw x;
}
}


catch(int no)
{
cout<<"IF NUMBER IS INPUT BY USER="<<no;
}
catch(char ch)
{
cout<<" IF CHARACTER IS INPUT BY USER="<<ch;
}

catch(float p)
{
cout<<"IF INPUT IS IN LESS THEN ONE"<<p;
}

}
