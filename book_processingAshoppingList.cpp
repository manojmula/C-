#include<iostream>

using namespace std;

const int m = 5;

class ITEMS{
    private:
        int itemCode[m];
        float itemPrice[m];
        int count;

    public:
        void CNT(void)
        {
            count = 0;
        }
        void getItem(void);
        void displaySum(void);
        void remove(void);
        void displayItems(void);

};

void ITEMS :: getItem(void)
{
    cout<<"Enter Item code : ";
    cin>>itemCode[count];
    cout<<"\nEnter Item cost : ";
    cin>>itemPrice[count];
    count++;

}
void ITEMS::displaySum(void)
{
    float sum = 0;
    for(int i = 0; i<count;i++){
    sum += itemPrice[i];
    cout<<"\nTotal value : "<<sum<<endl;
    }



}
void ITEMS :: remove(void)
{
    int a;
    cout<<"Enter item code"<<endl;
    cin>>a;

    for(int i=0;i<count;i++)
    {
        if(itemCode[i]==a)
        {
            itemPrice[i]=0;
        }
    }
}

void ITEMS :: displayItems(void)
{
    cout<<"\nCode price \n";

    for(int i =0;i<count;i++)
    {
        cout<<itemCode[i]<<endl;

    }
    cout<<endl;
}

int main()
{
    ITEMS order;
    order.CNT();
    int x;

    do{
        cout<<"\nYou can do the following;"
            <<"Enter appropriate number";
        cout<<"\n1:Add an item";
        cout<<"\n2:Display total value";
        cout<<"\n3:Delete an item";
        cout<<"\n4:Display all items";
        cout<<"\n5:quit";
        cout<<"\nWhat is your option";

        cin>>x;

        switch(x)
        {
            case 1 : order.getItem();
            break;
            case 2 : order.displaySum();
            break;
            case 3 : order.remove();
            break;
            case 4 : order.displayItems();
            break;
            case 5 : break;
            default:
                cout<<"\nError in input please try again: \n";
        }
    }
    while(x!=5);

    return 0;
}