#include <iostream>
int main()
{
    char a[9999];
    char b[50];
    int c[50];
    int j=0;
    int aaa=0,bbb=0;
    std::cout<<"input(separate input,finish input]):[";
    std::cin>>a;
    for(int i=0;a[i]!='\0';++i)
    {
        if(a[i]>='0'&& a[i]<='9')
        {
            bbb*=10;
            bbb+=a[i]-'0';
        }

        else if(a[i]==','||a[i]==']')
        {
            b[aaa++]=a[i];
            c[j++]=bbb;
            bbb=0;
        }
    }
    int m,d,e,k;
    std::cout<<"result:";
    std::cin>>m;
    std::cout<<"output:";
    for(d=0;d<j;d++)
    {
        for(k=d;k<j;k++)
        {
            if(c[d]+c[k]==m)
            {
                std::cout<<"["<<c[d]<<","<<c[k]<<"]"<<std::endl;
                e++;
            }
        }
    }
    if(e==0)
    {
        std::cout<<"error";
    }
    std::cout<<'\n'<<"end"<<'\n';
    return 0;
}
