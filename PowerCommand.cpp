#include<bits/stdc++.h>
using namespace std;
#define GO(u,v,i) for(register int i=u;i<=v;i++)
template<class t>inline t fr(){
    register t num=0,dis=1;
    register char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')dis=-1;ch=getchar();}
    while(ch<='9'&&ch>='0'){num=(num<<1)+(num<<3)+(ch^48);ch=getchar();}
    return num*dis;
}
template<class t>inline void fw(t num){
    if(num>9)fw(num/10);
    putchar(num%10+'0');
}
template<class t>inline void fw(t num,char ch){
    if(num<0)num=-num,putchar('-');
    fw(num);putchar(ch);
}



inline void logout(string s,string type,string from){
    freopen("logs.out","w",stdout);
    time_t now_time=time(NULL);
    tm* t_tm=localtime(&now_time);
    string time_now=asctime(t_tm);
    char ch[100003];
    GO(0,time_now.length()-2,i)ch[i]=time_now[i];
    string chh=ch;
    string out="["+chh+"]["+type+"]["+from+"]"+s+"\n";
    cout<<out;
    fclose(stdout);
}


signed main(){
    freopen("settings.in","r",stdin);
    logout("打开settings.in","INFO","main()");


    return 0;
}