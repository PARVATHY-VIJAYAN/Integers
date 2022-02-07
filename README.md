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
  { //chk i1 and i2 have same value
    cout<<”not same”;
  }
}
