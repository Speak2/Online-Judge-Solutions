#include <bits/stdc++.h>
using namespace std;

vector<int> primes;
bool prime[10005]={false};

void seive()
{
    prime[1]=true;
    for(int i=2;i*i<=10000;i+=2)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<=10000;j+=i)
                prime[j]=true;
        }
        if(i==2)
            i--;
    }
    primes.push_back(2);
    for(int i=3;i<10000;i+=2)
    {
        if(!prime[i])
            primes.push_back(i);
    }
}
/*
string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
        return "0";

    vector<int> result(len1 + len2, 0);

    int i_n1 = 0;
    int i_n2 = 0;

    for (int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;

        for (int j=len2-1; j>=0; j--)
        {
            int n2 = num2[j] - '0';
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }

        if (carry > 0)
            result[i_n1 + i_n2] += carry;

        i_n1++;
    }

    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;

    if (i == -1)
        return "0";

    string s = "";
    while (i >= 0)
        s += to_string(result[i--]);

    return s;
}*/
string multiplys(string num1, string num2) {
        if(num1.size()==0||num2.size()==0) return "";
        string ret(num1.size()+num2.size()+1,'0');
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        for(int i=0;i<num2.size();i++){
            int dig2=num2[i]-'0';
            int carry=0;
            for(int j=0;j<num1.size();j++){
                int dig1=num1[j]-'0';
                int temp=ret[i+j]-'0';
                int cur=dig1*dig2+temp+carry;
                ret[i+j]=cur%10+'0';
                carry=cur/10;
            }
            ret[i+num1.size()]=carry+'0';
        }
        reverse(ret.begin(),ret.end());
        int pos=ret.find_first_not_of('0',0);
        if(pos<0||pos>=ret.size())
            pos=ret.size()-1;
        return ret.substr(pos,ret.size()-pos);
    }

int main()
{
    seive();
    int k,t=1;
    scanf("%d",&k);

    while(k--)
    {
        int numbers;
        scanf("%d",&numbers);
        int dataset[numbers];
        int needed[10002]={0};

        for(int i=0;i<numbers;i++)
        {
            scanf("%d",&dataset[i]);
            int digit=dataset[i];
            for(int j=0;j<primes.size() && primes[j]*primes[j]<=digit;j++)
            {
                int times=0;
                while(digit%primes[j]==0)
                {
                    digit/=primes[j];
                    times++;
                    if(digit==0 || digit==1)
                        break;
                }
                if(needed[primes[j]]<times)
                    needed[primes[j]]=times;
            }
            if(digit!=1)
            {
                if(needed[digit]==0)
                    needed[digit]=1;
            }
        }

        string first="1";
        for(int i=0;primes[i]<10000;i++)
        {
            if(needed[primes[i]]>0)
            {
                long long hobe=pow(primes[i],needed[primes[i]]);
                string second=to_string(hobe);
                first=multiplys(first,second);
            }
        }

        printf("Case %d: ",t++);
        cout<<first<<"\n";
    }
    return 0;
}
