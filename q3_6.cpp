//A cricket team has the following table of batting figures for a series of test match
//player's name   runs    innings      times not out

#include<iostream>
using namespace std;
class cricket{
    public:
    int r,i,t;
    char a[10];
};
int main(){
    int i=0,j;
    char q;
    cricket b[i];
    do{
        cout<<"name of player"<<endl;

        cin>>b[i].a;
         cout<<"type runs"<<endl;
        cin>>b[i].r;
        cout<<"type innings"<<endl;
        cin>>b[i].i;
        cout<<"type times not out"<<endl;
        cin>>b[i].t;
        i++;
        cout<<"press + for add more or press any other key for show result"<<endl;
        cin>>q;
    }
    while(q=='+');
    cout<<"player's name    "<<"runs    "<<"innings    "<<"times not out\n";
    for(j=0;j<i;j++)
            cout<<b[j].a<<"               "<<b[j].r<<"       "<<b[j].i<<"        "<<b[j].t<<endl;

}

