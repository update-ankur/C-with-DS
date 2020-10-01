class convert
{
private:
float cel, far;
public:
void getfahrenheit()
{
cout<<"enter fahrenheit";
cin>>far;
}
void showcelsius(){
cel=5.0/9*(f-32);
cout<<"\n celsius="<<cel;
}
};
void main()
{
convert s;
s.getfahrenheit();
s.showcelsius();
getch();
}
