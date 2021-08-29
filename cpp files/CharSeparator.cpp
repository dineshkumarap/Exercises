#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
class str
{
    int num[50],num_s,ch_s;
    char ch[50];
    public:
    void getstr()
    {
        char st[50];
        cout<<"Enter the string : ";
        cin>>st;
        num_s=0;
        ch_s=0;
        int st_len=strlen(st);
        for(int i=0;i<st_len;i++)
        {
            if(st[i]>=48 && st[i]<=57) //ASCII value for numbers 0 is 48 and 9 is 57
                num[num_s++]=st[i]-48;
            else
                ch[ch_s++]=st[i];
        }
    }
    void printdata()
    {
        cout<<"Printing alphabets and numbers seperately...\n";
        for(int i=0;i<ch_s;i++)
            cout<<ch[i];
        for(int i=0;i<num_s;i++)
            cout<<num[i];
    }
};
int main()
{
    class str a;
    a.getstr();
    a.printdata();
}