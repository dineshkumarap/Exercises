#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char exp[50],sym[10];
    cout<<"Enter the expression : ";
    cin>>exp;
    int num[30],exp_len=strlen(exp);
    int j=0,sym_si=0;
    num[j]=0;
    for(int i=0;i<exp_len;i++)
    {
        if(exp[i]>=48 && exp[i]<=57) //ASCII value for numbers 0 is48 and 9 is 57
        {
            num[j]=(num[j]*10) + (exp[i]-48);
        }
        else
        {
            sym[sym_si++]=exp[i];
            j++;
            num[j]=0;
        }
    }
    int result=num[0];
    for(int i=0;i<sym_si;i++)
    {
        switch(sym[i])
        {
            case 42:result*=num[i+1]; //ASCII for * is 42
                    break;
            case 43:result+=num[i+1]; //ASCII for + is 43
                    break;
            case 45:result-=num[i+1]; //ASCII for - is 45
                    break;
            case 47:result/=num[i+1]; //ASCII for / is 47
                    break;
        }
    }
    cout<<result;
}