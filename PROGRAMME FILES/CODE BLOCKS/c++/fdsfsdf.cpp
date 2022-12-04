#include<iostream>
using namespace std;

template<class X>
class ArrayList
{
private:
    struct ControlBlock
    {
        int capacity;
        X *arr_ptr;
    };
    ControlBlock *s;
public:
    ArrayList(int capacity)
    {
        s=new ControlBlock;
        s->capacity=capacity;
        s->arr_ptr=new X[s->capacity];
    }
    void addElement(int index,X data)
    {
        if(index>=0&&index<s->capacity)
        {
            s->arr_ptr[index]=data;
        }
        else
        {
            cout<<"\nThe index in the Array is invalid";
        }
    }
        void viewElement(int index,X &data)
    {
        if(index>=0&&index<s->capacity)
        {
            data=s->arr_ptr[index];
        }
        else
        {
            cout<<"\nThe index in the Array is invalid";
        }
    }
    void viewList()
    {
        int i;
        for(i=0;i<s->capacity;i++)
            cout<<"\n"<<s->arr_ptr[i];
    }
};
int main()
{
    int data;
    ArrayList <float>list1(4);
    list1.addElement(0,1.1);
    list1.addElement(1,1.2);
    list1.addElement(2,1.3);
    list1.addElement(3,1.4);
    list1.viewList();
    return 0;
}
