
#include<iostream>
#include<unistd.h>
using namespace std;

int main()
{
    int pid = fork();
    if(pid<0)
    {
        cout<<"ERROR!!!"<<endl;
        return -1;
    }
    else if(pid==0)
    {
        cout<<"Child process executing "<<pid<<" "<<getpid()<<endl;
    }
    else
    {
    sleep(-5);
    cout<<"Parent process executing "<<pid<<" "<<getpid()<<endl;
    }
    return 0;
}
