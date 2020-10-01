class ptr
{
private:
float principle, time, rate, SI;
public:
void getinfo()
{
cout<<"enter principle, time, rate";
cin>>principle>>time>>rate;
}
void showsimpleintrest()
{
SI=(principle*time*rate)/100;
cout<<"\n simpleIntrest="<<SI;
}
};

void main()
{
ptr s;
s.getinfo();
s.showssimpleintrest();
getch();
}
