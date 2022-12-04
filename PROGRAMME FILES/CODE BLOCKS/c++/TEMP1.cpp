 /* vid-20.2 class template

Template:-

-The keyword template is used for define function template and class template.
-it is a way to make your fun or class generalize as far as datatype is concern.




#include<iostream>
using  namespace std;


class ArrayList
{
private:
    struct ControlBlock
    {
        int capacity;
        int *arr_ptr;
    };
    ControlBlock *s;
public:
    ArrayList(int capacity)
    {
        s=new ControlBlock;
        s->capacity=capacity;
        s->arr_ptr=new int[s->capacity];
    }
    void addElement(int index,int data)
    {
        if(index>=0 && index<=s->capacity-1)
            s->arr_ptr[index]=data;
        else
            cout<<"\nArray index is not valid";
    }
     void viewElement(int index,int &data)
    {
        if(index>=0 && index<=s->capacity-1)
            data=s->arr_ptr[index];
        else
            cout<<"\nArray index is not valid";
    }
    void viewList()
    {
        int i;
        for(i=0;i<s->capacity;i++)
            cout<<" "<<s->arr_ptr[i];
    }
};
int main()
{
    int data;
    ArrayList list1(4);
    list1.addElement(0,32);
    list1.addElement(1,41);
    list1.addElement(2,55);
    list1.addElement(3,32);
    list1.viewElement(3,data);
    cout<<"The value of the element in the array is "<<data;
  //  list1.viewList();
    return 0;
}



/*
if we want to do all of these things for float and string, then we have to make this class again
and we replace int with X. so for avoiding all of these rework we make template of this class.


*/

#include<iostream>
using  namespace std;

template <class X>
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
        if(index>=0 && index<=s->capacity-1)
            s->arr_ptr[index]=data;
        else
            cout<<"\nArray index is not valid";
    }
     void viewElement(int index,X &data)
    {
        if(index>=0 && index<=s->capacity-1)
            data=s->arr_ptr[index];
        else
            cout<<"\nArray index is not valid";
    }
    void viewList()
    {
        int i;
        for(i=0;i<s->capacity;i++)
            cout<<s->arr_ptr[i]<<"\n";
    }
};
int main()
{
    int data;
    ArrayList <float>list1(4);
    list1.addElement(0,3.2);
    list1.addElement(1,4.1);
    list1.addElement(2,5);
    list1.addElement(3,6.2);
    list1.viewList();

}




