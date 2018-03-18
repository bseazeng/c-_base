#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
char s[11];
int n,m;
bool p;
struct node
{
    int count;
    node * next[26];
}*root;
node * build()
{
    node * k=new(node);
    k->count=0;
    memset(k->next,0,sizeof(k->next));
    return k;
}
void insert()
{
    node * r=root;
    char * word=s;
     while(*word)
    {
        int id=*word-'a';
        if(r->next[id]==NULL) 
            r->next[id]=build();
        r=r->next[id];
        r->count++;
        word++;
    }
}
int search()
{
    node * r=root;
    char * word=s;
    while(*word)
    {
        int id=*word-'a';
        r=r->next[id];
        if(r==NULL) return 0;
        word++;
    }
    return r->count;
}
int main()
{
    root=build();
    scanf("%d",&n);//字典树中存在的单词个数
    for(int i=1;i<=n;i++) 
    {
            cin>>s;
            insert();
    }
    scanf("%d",&m);//查询单词个数
    for(int i=1;i<=m;i++)
    {
        cin>>s;
        if ( 0 == search())
        {
            printf("%s is not in \n",s); //不在字典树中
        }
        else
        {
            printf("%s is in\n",s);//在字典树中
        }
        
    }
}
