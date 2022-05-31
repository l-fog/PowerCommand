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
int user_num;
map<string,string>Pwd;
inline void logout(string s,string type,string from){
    ofstream output;
    output.open("logs.out",ios::app);
    time_t now_time=time(NULL);
    tm* t_tm=localtime(&now_time);
    string time_now=asctime(t_tm);
    char ch[100003];
    GO(0,time_now.length()-2,i)ch[i]=time_now[i];
    string chh=ch;
    string out="["+chh+"]["+type+"]["+from+"]"+s+"\n";
    output<<out;
    output.close();
}
inline void logclear(){
    freopen("logs.out","w",stdout);
    cout<<"Cleared.\n";
    fclose(stdout);
}

inline void read_set(){
    logout("开始读取settings.in","INFO","read_set()");
    user_num=fr<int>();
    GO(1,user_num,i){
        string userName,userPwd;
        cin>>userName>>userPwd;
        Pwd[userName]=userPwd;
    }
    if(user_num==0){
        logout("没有用户处于用户列表中!","WARN","read_set()");
    }else{
        char ch[10001];
        sprintf(ch,"读取到%d名用户",user_num);
        string logs=ch;
        logout(logs,"INFO","read_set()");
    }
    logout("完成读取settings.in","INFO","read_set()");
}


signed main(){
    logclear();
    logout("程序启动成功!","INFO","main()");
    freopen("settings.in","r",stdin);
    logout("打开settings.in","INFO","main()");
    read_set();
    fclose(stdin);
    logout("关闭settings.in","INFO","main()");
    return 0;
}