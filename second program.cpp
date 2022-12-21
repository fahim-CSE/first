#include <iostream>
#include <string>
using namespace std;



    struct time {

        int h,m,s;
    };
    void cd(struct time,struct time,struct time *);
    int main(){
        struct time t1,t2,dif;
        cout<<"enter start time:"<<endl;
        cin>>t1.h>>t1.m>>t1.s;
        cout<<"enter stop time:"<<endl;
        cin>>t2.h>>t2.m>>t2.s;

        cd(t1,t2,&dif);
        cout<<"difference is: "<<endl;
        cout<<dif.h<<":"<<dif.m<<":"<<dif.s<<endl;


    }
    void cd(struct time t1,struct time t2,struct time *dif){

        if(t2.s>t1.s){
            --t1.m;
            t1.s +=60;
        }
        dif->s = t1.s-t2.s;
        if(t2.m>t1.m){
            --t1.h;
            t1.m +=60;
        }
        dif->m = t1.m - t2.m;
        dif->h = t1.h - t2.h;


    }

