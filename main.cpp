#include <iostream>

using namespace std;

class List
{
private:
    int *arr;
    int count;

public:
    List(int s);
    void add(int x);
    void deletevalue(int d);
    void print();
    int find(int key);

};

List::List(int s)
{

    arr=new int[s];
    count=0;


}

void List::add(int i)
{

    arr[count]=i;
    count++;

}

void List::deletevalue(int d)
{
     int x=find(d);

    if(x!=-1)
    {
       for(int c=x;c<count;c++)
        arr[c]==arr[c+1];

      count--;
    }


}

void List::print()
{

    for(int x=0;x<count;x++)
    {
        cout << arr[x] <<endl;
    }

}

int List::find(int key)
{
    for(int y=0;y<count;y++)

        if(arr[y]==key)
        return y;

    return -1;

}

int main()
{
    List mylist(10);
    mylist.add(200);
    mylist.add(300);
    mylist.add(400);
    mylist.add(500);
    mylist.add(600);
    //for(int k=0;k<10;k++)
    //{
      //  mylist.add(k);
    //}
    //mylist.deletevalue(700);
    cout<<"\n"<<endl;
    mylist.print();
    cout<<"\n\n\n\n\n\n\n\n"<<endl;
    mylist.deletevalue(400);
    mylist.print();
    //cout<<"Value found at index no. : "<<mylist.find(400)<<endl;
    return 0;
}
