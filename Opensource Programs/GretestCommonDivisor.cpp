class GCD
{
int a,b;
public:
void getno();
void showdivisor();
};
void GCD::getno()
{
cout<<"enter two number";
cin>>a>>b;
}
void GCD::showdivisor()
{
while(a!=b)
{
if(a>b)
a=a-b;
if(b>a)
b=b-a;
}
cout<<"GCD="<<a;
}
void main()
{
GCD x;
x.getno();
x.showdivisor();
getch();
}
