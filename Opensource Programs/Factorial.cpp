class factorial
{
int i,n;
long int f;

public:
void getno();
void showfact();
};

void factorial::getno()
{
cout<<"enter a number";
cin>>n;
}
void factorial::showfact()
{
for(i=1;i<=n;i++)
{
f=f*i;
}
cout<<"\n factorial="<<f;
}

void main()
{
factorial x;
x.getno();
x.showfact();
getch();
}
