/***
 * PREMITIVE MEMBER FUNCTIONS
 * Although it is normal practice to place all the data items in a private sections and all functions in public.
 * some situations may require certain functions to be hidden like private data from the outsid calls
 * tasks such as deleting an account in a customer file or providing increement to an employee are events of serois
 * consequences and therefore the function handling such tasks should be restricted access
 * we can place these functons in private sections
 * A private member function can only be called by another function that is a member of the class
 * Even obejct cannot invoke a private function using the dot operator 
 * conside the following class
 * 
 * class sample
 * {
 * int m;
 * void read(void);
 * public:
 *  void update(void);
 *  void write(void);
 * };
 * is s1 is an object of sample then
 * s1.read();
 * is illegal
 *However the funcion read() can be called by the function update() to update the value m
 *  void sample::update(void)
 * {
 * read();
 * }
 * 
 * ARRAYS WITHIN  A CLASS
 * the array can be used as memeber class variables in a class.
 * The following class defination is valid
 * const int size = 10;
 * class array{
 * int a[size];
 * public:
 *  void setval(void);
 * VOID DISPLAY(void); 
 * 
 * };
 * The array avarible a[] declared as a private member of the class array can be used in the member  functions.
 * like anyother array varaible we can perform any operations on it
 * For instance in the above class defination the memeber functions setval() sets the values of the elements of the array a[]
 * and display() function displays the value 
 * s
 * Lets consider a shopping lists of items for which we place an order with dealer every month the list include details
 * such as the code number and price of each item from the list and printing the total valueof the order
 * Program shows how these operations are implemented using a class with arrays and data memebrs
 * 
 * 
 * 
 * 
 * **/

#include<iostream>

using namespace std;

const int m = 50;

class ITEMS{

    int itemCode[m];
    float itemPrice[m];
    int count;

    public:
        void CNT(void){count = 0;}
        void getitem(void);
        void displaySum(void);
        void remove(void);
        void displayItems(void);

};

void ITEMS :: getitem(void)
{
  cout<<"Enter the item code : ";
  cin>>itemCode[count];
  cout<<"Enter the item cost : ";
  cin>>itemPrice[count];
  count++;  
}

void ITEMS:: displaySum(void)
{
    float sum = 0;
    for(int i = 0;i<count;i++)
    {
        sum += itemPrice[i];
    }
    cout<<"\nTotal value : "<<sum<<endl;
}

void ITEMS :: remove(void)
{
    int a;
    cout<<"Enter item code : ";
    cin>>a;

    for(int i = 0;i<count;i++)
    {
        if(itemCode[i]==a)
        {
            itemPrice[i]=0;
        }
    }
}
void ITEMS::displayItems(void)
{
    cout<<"\nCode Price\n";

    for(int i = 0;i<count;i++)
    {
        cout<<"\n"<<itemCode[i];
        cout<<"\n"<<itemPrice[i];
    }
    cout<<"\n";
}
int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do{
        cout<<"\nYou can do the following :"
        <<"Eter appropriate number\n";
        cout<<"\n1:Add an Item ";
        cout<<"\n2:Display total value ";
        cout<<"\n3:Delete an item";
        cout<<"\n:Display all items";
        cout<<"\n:Quit all items";
        cout<<"\n\nWhat is your option?";

        cin>>x;

        switch(x)
        {
            case 1 : order.getitem();
            break;
            case 2 : order.displaySum();
            break;
            case 3 : order.remove();
            break;
            case 4 : order.displayItems();
            break;
            default: cout<<"Error in output try again\n";

        }

    }while(x!=5);
    return 0;
}

/**
 * the program uses two arrays, namely itemCode[] to hold the code number of items and itemPrice[] to hold the prices 
 * A third data memmebr count is used to keep records of items in the list 
 * the program uses a total of four functions to implement the operations to be performed on the list the statment
 * const int m = 50;
 * defines the size of the array members
 *
 * 
 * the first function CNT() simply sets the variable count ot zero the second function getitem()
 * gets the item code and the item prize interactively and assigns them to the array members 
 * itemCOde
 * [count] and itemprice[count]
 * Note that inside this function count is incremented  
 * ****/
