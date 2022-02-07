# Integers
Create a class Integer to represent an int type.
Integer i1; creates an integer that is initialised to 0.
Sample class : 
class Integer{
  Int i;
  public: //define constructors
          //define member functions for performing different operations
};
Given below is the main function that lists out statements/operations that Integer class should support.
int main()
{
  Integer i1; //creates an integer that has 0 as its value
  Integer i2(1); //creates an integer that has 1 as its value
  Integer i3(i2); //creates i3 that has same value as i3
  Integer i4;
  i4 = i1++ + i2; //adds two integer objects and return an integer object(increment operator is operated on i1).
  cout<<i4; //print integer object
  cin >> i4; //read into integer object
  i2=i4; //store value of i4 into i2 (implement function explicitly, not default one)
  if(i1!=i2)
  { 
    //chk i1 and i2 have same value
    cout<<”not same”;
  }
}

#Sample output 

Enter first integer : 2
Enter second integer : 3
i4 = 5
Enter any Integer : 5

Updated value of second integer i2 : 5
i1 = 3
i2 = 5
i3 = 0
i4 = 5
i5 = 5

Check i1 and i2 same or not : Not same
i1 + i2 = 8
i2 - i4 = 0
i5 / i4 = 1
i5 * i5 = 25

Process returned 0 (0x0)   execution time : 14.412 s
Press any key to continue.
