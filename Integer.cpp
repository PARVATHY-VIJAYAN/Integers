#include<iostream>

using namespace std;

class Integer{
    int i;
public:
    Integer():i(0){}//default constructors
    Integer(int num):i(num){}//Single parameterized constructor
    Integer(Integer &obj):i(obj.i){}//copy constructors
    //getters
    int getInt()
    {
        return i;
    }
    //setters
    void setInt(int in)
    {
        i=in;
    }
    //Overloading operators
    Integer operator + (Integer obj)
    {
        Integer temp;
        temp.i=obj.i+i;
        return temp;
    }
    Integer operator- (Integer obj)
    {
        Integer temp;
        temp.i=i-obj.i;
        return temp;
    }

    Integer operator* (Integer obj)
    {
        Integer temp;
        temp.i=obj.i*i;
        return temp;
    }
    Integer operator/ (Integer obj)
    {
        Integer temp;
        temp.i=i/obj.i;
        return temp;
    }
    Integer operator++ (int)//post increment
    {
        Integer temp=*this;
        i++;
        return temp;
    }
    Integer operator++ ()//pre increment
    {
        i++;
        return *this;
    }
    Integer operator-- (int)//post decrement
    {
        Integer temp=*this;
        i--;
        return temp;
    }
    Integer operator-- ()//pre decrement
    {
        Integer temp=*this;
        i--;
        return temp;
    }
    void operator = (const Integer &obj)
    {
         i = obj.i;
    }
    bool operator==(Integer obj)
    {
    if (obj.i==i)
        return 1;
    else
        return 0;
    }
    int operator!=(Integer obj)
    {
    if (obj.i!=i)
        return 1;
    else
        return 0;
    }
    friend ostream &operator <<(ostream &os,Integer &obj);
    friend istream &operator>>(istream &is,Integer &obj);
};

//extraction and insertion operator overloading
ostream &operator <<(ostream &os,Integer &obj)
{
    os<<obj.getInt();
    return os;
}
istream &operator>>(istream &is,Integer &obj)
{
    int num;
    is>>num;
    obj.setInt(num);
    return is;
}
int main()
{
    int integer1 , integer2;
    cout<<"Enter first integer : ";cin>>integer1;
    Integer i1(integer1);//creates an integer that has  user input value

    cout<<"Enter second integer : ";cin>>integer2;
    Integer i2(integer2);

    Integer i3; //creates an integer object named i3 that has  0 as its i value
    Integer i4(i2); //creates i4 that has same value as i2
    Integer i5;


    i4 = i1++  +  i2;  //adds two integer objects and return an integer object(increment operator is operated on i1).
    cout<<"i4 = "<<i4;  //prints integer object i4

    cout<<"\nEnter any Integer : ";
    cin >> i5;  //read into integer object i5

    i2=i4;        //store value of i4 into i2 (implement function explicitly, not default one)
    cout<<"\nUpdated value of second integer i2 : "<<i2;

    cout<<"\ni1 = "<<i1<<"\ni2 = "<<i2<<"\ni3 = "<<i3<<"\ni4 = "<<i4<<"\ni5 = "<<i5<<endl;

    //check i1 and i2 have same value
    cout<<"\nCheck i1 and i2 same or not : ";
    if(i1!=i2)
    {
        cout<<"Not same";
    }
    else
        cout<<"Same";


    Integer sum,sub,div,mul;
    sum = i1+i2;
    sub = i2-i4;
    div = i5/i4;
    mul = i5*i5;
    cout<<"\ni1 + i2 = "<<sum<<endl;
    cout<<"i2 - i4 = "<<sub<<endl;
    cout<<"i5 / i4 = "<<div<<endl;
    cout<<"i5 * i5 = "<<mul<<endl;
    return 0;
}
