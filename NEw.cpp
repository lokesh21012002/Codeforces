 #include<bits/stdc++.h>


#define l long long int
#define s string
#define el '\n'





const ll N=1e5;
const ll MOD=1e9+7;





using namespace std;
vector<ll>G[N];
vector<ll>V;
vector<ll>m1;
vector<vector<ll> >m2;
vector<s> PS;
pair<ll,ll>P;


 ll Fibonnaci_DP(ll k)
{
   vector<ll>b;
   b[0]=0;
   b[1]=b[2]=1;
   for(ll i=3;i<=k;i++)
   {
      b[i]=b[i-1]+b[i-2];
   }
   return (b[k]%MOD);
}

 ll Factorial_DP(ll n)
 {
    vector<ll>a;
    a[0]=a[1]=1;
    for(ll i=2;i<=n;i++ )
    {
       a[i]=a[i-1]*i;
    }
    return (a[n]%MOD);
 }

 ll gcd(ll a,ll b)
 {
    if(b==0)
    {
       return a;
    }
    else
    {
       return gcd(b,a%b);
    }
 }





  void permuatation(ll l,ll h,s& st)
  {
    if(l==h)
    {
      PS.push_back(st);
    // cout<<st<<" ";
    }
    else
    {
       for(ll i=l;i<=h;i++)
       {
   
          swap(st[i],st[l]);             
          permuatation(l+1,h,st);
          swap(st[i],st[l]);
       }
    }
 }

 void seive(ll n)
 {
      vector<bool>a(n+3,1);
     for(ll i=2;i*i<=n;i++)
     {
         if(a[i])   
               {
             for(ll j=i*i;j<=n;j+=i)
             {
                 a[j]=0;
             }  


             }
        
     
     }
    
     for(ll t=2;t<=n;t++)
     {
         if(a[t])
         {
             cout<<t<<' ';
         }
     }
 }

 ll power(ll a,ll b)
 {
   if(a<0)
   {
      a=a*(-1);

   }
   if(b<0)
   {
      b=b*(-1);
   }
    if(b==0)
    {
       return 1;
    }
    if(b==1)
    {
       return a;
    }
    ll t=power(a,b/2);
    if(a&1)
    {
       return a*t*t;
    }
    else
    {
       return t*t;
    }
 }
 ll Kadane(vector<ll>a)
 {

    ll sum=0;
    ll ans=INT_MIN;
    for( ll i=0;i<a.size();i++)
   {
       sum+=a[i];
       ans=max(sum,ans);
         
    if(sum<0)
       {
          sum=0;
       }
    }
    return ans;
}


 // bool check(vector<ll>a)
 // {
 //    sort(a.begin(),a.end());
 //    for(ll i=0;i<a.size();i++)
 //    {
 //       if(a[i]!=i+1)
 //       {
 //          return false;
 //       }
 //    }
 //    return true;

 // }



 // ll result(s q,vector<ll>a)
 // {
 //    set<char>se;
 //     for(ll i=0;i<q.size();i++)
 //     {
 //      se.insert(q[i]);
 //     }
 //     ll o=0;
 //     for(ll i=0;i<se.size();i++)
 //     {
 //      o=o+((i+1)*a[i]);

 //     }

     // cout<<se.size()<<el;
 // for(ll i=0;i<se.size();i++)
 // {
 //    cout<<a[i]<<el;
 // }
     // return o;
 // }
 
//  void solve()
//  {
//    ll n,q;
//    cin>>n>>q;
//    vector<ll>a;
//    for(ll i=0;i<n;i++)
//    {
//       ll k;
//       cin>>k;
//       a.push_back(k);

//    }
//    while(q--)
//    {
//       ll x;
//       cin>>x;
//    ll ans=1;
//    ll count=0;
//    ll flag=0;
// for(ll i=0;i<n;i++)
// {
//    if(x==a[i])
//    {
//       flag=1;
//       break;

//    }
//    if(x<a[i])
//       {
//          count++;
//       }

// }
// if(flag)
// {
//    cout<<"0"<<el;
// }
// if(count&1)
// {
// cout<<"NEGATIVE"<<el;
// }
// if(!(count&1))
// {
//    cout<<"POSITIVE"<<el;
// }
// }

//    ll t;
//    cin>>t;
//    while(t--)
//    {
//       ll n;
//       cin>>n;
//       vector<int>a;
//       for(ll i=0;i<n;i++)
//       {
//          ll k;
//          cin>>k;
//          a.push_back(k);
//       }
//       ll count=0;
//       for(ll i=n-1;i>=0;i--)
//       {
//          if(a[i]<=7)
//          {
//             break;
//          }

//          count++;

//       }
//       cout<<(n-count)<<el;
//    }
   
// }  
  // ll t;
  //  cin>>t;
  //  while(t--)
  //  {
  //   ll x1,x2,y1,y2,z1,z2;
  //   cin>>x1>>x2>>y1>>y2>>z1>>z2;
  //   if(x2>=x1&&y2>=y1&&z2<=z1)
  //   {
  //      cout<<"YES"<<el;
  //   }
  //   else
  //   {
  //      cout<<"NO"<<el;
  //   }
  //  }
// }
    // ll t='b'-'0';
    // cout<<t-49;
     // ll n,q;
     // cin>>n>>q;
     // s c;
     // cin>>c;
     // vector<ll>a(26,0);
   //   for(ll i=0;i<c.size();i++)
   //   {
   //     ll t=c[i]-'0';
   // t-=49;
   // a[t]++;

   //   }
   //   for(ll i=0;i<3;i++)
   //   {
   //    cout<<a[i]<<" ";
   //   }

    
 
//  while(q--)
//  {
//    ll l,m;
//    cin>>n>>m;
//    s temp;
//    for(ll i=n-1;i<m;i++)
//    {
//       temp.push_back(c[i]);
//    }
//    cout<<temp<<el;

//     for(ll i=0;i<c.size();i++)
//      {
//        ll t=temp[i]-'0';
//    t-=49;
//    cout<<t<<" ";
//    a[t]++;

//      }
//      for(ll i=0;i<a.size();i++)
//      {
//       cout<<a[i]<<" ";
//      }
//    // cout<<temp<<el;
//      if(n==m)
//      {
//       cout<<1<<el;
//      }
//      else
//      {
//    cout<<result(temp,a)<<el;
// }
// for(ll i=0;i<c.size();i++)
// {
//    a[i]=0;
// }
 
// vector<ll>even(vector<ll>a){
//    for(ll i=0;i<a.size();i+=2)
//    {
//       swap(a[i],a[i+1]);
//    }
//    return a;
// }
// vector<ll>odd(vector<ll>b){
    
//     rotate(b.begin(),b.begin()+b.size()-1,b.end());
//     return b;



// }


   
     void solve(){

      ll t;
      cin>>t;
      while(t--)
      {
         ll n;
         cin>>n;
         ll even=0;
         ll odd=0;
         ll sum=0;
         for(ll i=0;i<2*n;i++)
         {
            ll k;
            cin>>k;
            if(2*n==2)
            {
               sum+=k;

            }
            if(k&1)
            {
               odd++;
            }
            else
            {
               even++;
            }
         }

         if(2*n==2)
         {
            if(sum&1)
            {
               cout<<"YES"<<el;
            }
            else
            {
               cout<<"NO"<<el;
            }
         }
         else
         {
            if(even==odd)
            {
               cout<<"YES"<<el;
            }
            else
            {
               cout<<"NO"<<el;
            }
         }

      }
      // ll t;
      // cin>>t;
      // while(t--)
      // {
      //    ll n,a,b;
      //    cin>>n>>a>>b;
      //    if(n%a==0)
      //    {
      //       cout<<"YES"<<el;
      //    }
      //    else
      //    {
      //       cout<<"NO"<<el;
      //    }

         
      // }
     // s a;
     // cin>>a;
     // s b="";
     // for(ll i=0;i<a.size();i++)
     // {
     //  if(a[i]!='+')
     //  {
     //     b+=a[i];
     //  }

     // } 
     // sort(b.begin(),b.end());
     // for(ll i=0;i<b.size()-1;i++)
     // {
     //  cout<<b[i]<<"+";
     // }
     // cout<<b[b.size()-1]<<el;

// s a,b; cin>>a>>b;  transform(a.begin(), a.end(), a.begin(), ::tolower);  transform(b.begin(), b.end(), b.begin(), ::tolower); if(a>b)
   // { cout<<"1"; } if(a<b){ cout<<"-1"; } if(a==b){ cout<<"0"; }
      // ll t;
      // cin>>t;
      // ll f=0;
      // while(t--)

      // {
      //    s a;
      //    cin>>a;
      //    ll ans=0;
      //    ll p_=0;
      //    ll m_=0;
      //    if(a[1]=='+')
      //    {
      //       for(ll i=0;i<a.size();i++)
      //       {
      //          if(a[i]=='+')
      //          {
      //             p_++;
      //          }
      //       }


      //    }
      //    if(a[1]=='-')
      //    {
      //       for(ll i=0;i<a.size();i++)
      //       {
      //          if(a[i]=='-')
      //          {
      //             m_++;
      //          }
      //       }
      //    }
      //    p_/=2;
      //    m_/=2;
      //    f+=p_;
      //    f-=m_;

      // }
      // cout<<f<<el;
      // ll n,m;
      // cin>>n>>m;
      // cout<<floor((n*m)/(2*1.0))<<el;

      // ll n,k;
      // cin>>n>>k;
      // vector<ll>ans(n+1,0);
      // for(ll i=1;i<=n;i++)
      // {
      //    cin>>ans[i];
      // }
      // ll c=ans[k];
      // ll o=0;
      // for(ll i=1;i<=n;i++)
      // {
      //    if(ans[i]>=c &&ans[i]>0)
      //    {
      //       o++;
      //    }
      //    if(ans[i]<c)
      //    {
      //       break;
      //    }

      // }
      // cout<<o<<el;
      // ll t;
      // cin>>t;
      //   ll final=0;
      // while(t--)
      // {
      //    ll a,b,c;
      //    cin>>a>>b>>c;
      //    ll count=0;
      //    if(a==1)
      //    {
      //       count++;
      //    }
      //    if(b==1)
      //    {
      //       count++;
      //    }
      //    if(c==1)
      //    {
      //       count++;

      //    }
      //    // cout<<count<<" ";
       
      //    if(count>=2)
      //    {
      //       final++;

      //    }
      // }
      // cout<<final<<el;
      // ll n;
      // cin>>n;
      // if(n==2)
      // {
      //    cout<<"NO"<<el;
      // }
      //  if(n&1)
      // {
      //    cout<<"NO"<<el;
      // }
      // if(n!=2&&!(n&1))
      // {
      //    cout<<"YES"<<el;
      // }
      // ll t;
      // cin>>t;
      // while(t--)
      // {
      //    ll a,b,c,d;
      //    cin>>a>>b>>c>>d;
      //    if(a+c==180&&b+d==180)
      //    {
      //       cout<<"YES"<<el;
      //    }
      //    else
      //       {
      //          cout<<"NO"<<el;
      //       }
      // }

      // ll t;
      // cin>>t;
      // while(t--)
      // {
      //    ll n;
      //    cin>>n;
      //    map<s,ll>ma;
      //    for(l i=0;i<3*n;i++)
      //    {
      //       s a;
      //       ll b;
      //       cin>>a>>b;
      //       ma[a]+=b;
      //    }
      //    vector<ll>ans;
      //    for(auto j:ma)
      //    {
      //       ans.push_back(j.second);
      //    }
      //    sort(ans.begin(),ans.end());
      //    for(auto i:ans)
      //    {
      //       cout<<i<<" ";
      //    }
      //    cout<<el;
      // }

      // ll t;
      // cin>>t;
      // while(t--)
      // {
         // ll n,a,b;
         // cin>>n>>a>>b;
         // cout<<(2*(180+n))-(a+b)<<el;
         // ll n;
         // cin>>n;
         // map<s,ll>ma;
         // for(ll i=0;i<3*n;i++)
         // {
         //    s a;
         //    ll b;
         //    cin>>a>>b;
         //    ma[a]+=b;

         // }
         // vector<ll>out;
         // for(auto j:ma)
         // {
         //    out.push_back(j.second);
         // }
         // sort(out.begin(),out.begin());
         // for(auto i:out)
         // {
         //    cout<<i<<" ";
         // }
         // cout<<el;
      // }

      // ll n,q;
      // cin>>n>>q;
      // vector<ll>ans(n+1,0);
      // for(ll i=1;i<=n;i++)
      // {
      //    cin>>ans[i];
      // }
      // while(q--)
      // {
      //    ll a;
      //    cin>>a;
      //    if(a==1)
      //    {
      //       ll x,l,r;
      //       cin>>l>>r>>x;
      //       for(ll i=l;i<=r;i++)
      //       {
      //          ans[i]=ans[i]+(x+i-l)*(x+i-l);
      //       }
      //    }
      //    else
      //    {
      //       ll y;
      //       cin>>y;
      //       cout<<ans[y]<<el;
      //    }
      // }
      // ll n,q;
      // cin>>n>>q;
      // vector<ll>ans(n+1,0);
      // for(ll i=1;i<=n;i++)
      // {
      //    cin>>ans[i];
      // }
      // while(q--)
      // {
      //    ll a;
      //    cin>>a;
      //    if(a==1)
      //    {
      //       ll l,r,x;
      //       cin>>l>>r>>x;
      //       for(ll i=l;i<=r;i++)
      //       {
      //          ans[i]=ans[i]+(x+i-l)*(x+i-l);
      //       }
      //    }
      //    else
      //    {
      //       ll y;
      //       cin>>y;
            
      //       cout<<ans[y]<<el;
      //    }
      // }
      // ll t;
      // cin>>t;
      // while(t--)
      // {
      //    ll a,b,c,d;
      //    cin>>a>>b>>c>>d;
      //    if(a+c==180 && b+d==180 )
      //    {
      //       cout<<"YES"<<el;
      //    }
      //    else
      //    {
      //       cout<<"NO"<<el;
      //    }
      // }
      // ll t;
      // cin>>t;
      // while(t--)
      // {
      //    ll n;
      //    cin>>n;
      //    map<s,ll>ma;

      //    for(ll i=0;i<3*n;i++)
      //    {
      //       ll a,b;
      //       cin>>a>>b;
      //       ma[a]+=b;
      //    }
      //    vector<ll>ans;
      //    for(auto j:ma)
      //    {
      //       ans.push_back(j.second);
      //    }
      //    sort(ans.begin(),ans.end());
      //    for(auto i:ans)
      //    {
      //       cout<<i<<" ";
      //    }
      //    cout<<el;
      // }
      // ll t;
      // cin>>t;
      // while(t--)
      // {
      //    ll n;
      //    cin>>n;
      // map<s,ll>ma;
      // for(ll i=0;i<3*n;i++)
      // {
      //    ll a,b;
      //    cin>>a>>b;
      //    ma[a]+=b;
      // }
      // vector<ll>ans;
      // for(auto j:ma)
      // {
      //    ans.push_back(i.second);

      // }
      // sort(ans.begin(),ans.end());
      // for(auto i:ans)
      // {
      //    cout<<o<<" ";
      // }
      // cout<<el;

      // }
      // ll n,q;
      // cin>>n>>q;
      // vector<ll>ans(n+1,0);
      // for(ll i=1;i<=n;i++)
      // {
      //    cin>>ans[i];
      // }
      // // cout<<el;
      // while(q--)
      // {
      //    ll a;
      //    cin>>a;
      //    if(a==1)
      //    {
      //       ll l,r,x;
      //       cin>>l>>r>>x;
      //       for(ll i=l;i<=r;i++)
      //       {
      //          ans[i]=ans[i]+(x+i-l)*(x+i-l);
      //       }
      //    }
      //    else
      //    {
      //       ll y;
      //       cin>>y;
      //       cout<<ans[y]<<el;
      //    }
      //    cout<<el;
      // }
    //   ll n,q;
    //   cin>>n>>q;
    //   vector<ll>ans(n+1,0);
    //   for(ll i=1;i<=n;i++)
    //   {
    //      cin>>ans[i];


    //   }
    //      while(q--)
    //      {
    //         ll a;
    //         cin>>a;
    //         if(a==1)
    //         {
    //            ll l,r,x;
    //            cin>>l>>r>>x;
    //            for(ll i=l;i<=r;i++)
    //            {
    //               ans[i]=ans[i]+(x+i-l)*(x+i-l);
    //            }
    //         }
    //         else
    //         {
    //            ll y;
               
    //            cin>>y;
    //            cout<<ans[y]<<el;    
    //         }
    //      }
    //   }
    //   ll n,q;
    //   cin>>n>>q;
    //   vector<ll>ans(n+1,0);
    //   for(ll i=1;i<=n;i++)
    //   {
    //      cin>>ans[i];
    //   }
    //   while(q--)
    //   {
    //      ll a;
    //      cin>>a;
    //      if(a==1)
    //      {
    //         ll x,l,r;
    //         cin>>l>>r>>x;
    //         for(ll i=l;i<=r;i++)
    //         {
    //            ans[i]=ans[i]+(x+i-l)*(x+i-l);

    //         }
    //      }
    //      else{
    //         ll b;
    //         cin>>b;
    //         cout<<ans[b]<<el;
    //      }
    //   }


        // ll a,b,c,d;
        // cin>>a>>b>>c>>d;
        // ll ans=0;
        // ll red=0;
        // if(b>a&&b>c&&b>d)
        // {
        //  cout<<"-1"<<el;
        // }
        // else
        // {
        //  float te=(a*b)/(c*d*1.0);

        //  cout<<ceil(te)<<el;
         // while(a>red*d)
         // {
         //    a+=b;
         //    red+=c;
         //    ans++;
         //    if(a<red*d)
         //    {
         //       break;
         //    }
         // }
         // cout<<ans<<el;
        // }

// ll n,q;
// cin>>n>>q;
// vector<ll>ans;
// for(ll i=1;i<=n;i++)
// {
// cin>>ans[i];
// }
// while(q--)
// {
//    ll a;
//    cin>>a;
//    if(a==1)
//    {
//       ll l,r,x;
//       cin>>l>>r>>x;
//       for(ll i=l;i<=r;i++)
//       {
//          ans[i]=ans[i]+(x-i+l)*(x-i+l);
//       }


//    }
//    else
//    {
//       ll i;
//       cin>>i;

//       cout<<ans[i]<<el;
//    }
  
// }

      // ll t;
      // cin>>t;
      // while(t--)
      // {
      //    ll n;
      //    cin>>n;
      //    map<s,ll>ma;
      //    for(ll i=0;i<3*n;i++)
      //    {
      //       s a;
      //       ll b;
      //       cin>>a>>b;
      //       ma[a]+=b;

      //    }
      // vector<ll>ans;
      //    for(auto j:ma)
      //    {
      //       // cout<<j.first<<" "<<j.second<<el;
      //       ans.push_back(j.second);

      //    }
      //    sort(ans.begin(),ans.end());

      //    for(auto z:ans)
      //    {
      //       cout<<z<<" ";

      //    }
      //    cout<<el;


         // vector<ll>a;
         // for(ll i=0;i<n;i++)
         //    {
               
         //       a.push_back(i+1);
         //    }
         //    if(!(n&1))
         //    {
         //       for(ll i=0;i<n;i+=2)
         //       {
         //          swap(a[i],a[i+1]);
         //       }
         //        for(ll i=0;i<n;i++)
         //    {
         //       cout<<a[i]<<" ";
         //    }
            
         //    }
            
         //                cout<<el;
         //    if(n&1)
         //    {
         //       for(ll i=0;i<n-1;i+=2)
         //       {
         //          swap(a[i],a[i+1]);
         //       }
         //       swap(a[n-2],a[n-1]);
         //       for(ll i=0;i<n;i++)
         //       {
         //          cout<<a[i]<<" ";
         //       }
         //       cout<<el;
         //      }
       // }
            


         // ll n;
         // cin>>n;
         // ll a[n+1];
         // for(ll i=1;i<=n;i++)
         // {
            
         //    cin>>a[i];

         // }
         // ll ans=0;
         // for(ll i=1;i<=n;i++)
         // {
            
         //     for(ll j=a[i]-i;j<=n;j+=a[i])
         //     {
         //        if(j>=0)
         //        {
         //           if(i<j&&a[i]*a[j]==i+j)
         //           {
         //              ans++;
         //           }
         //        }
         //     }
         // }
         // cout<<ans<<el;

         
         // ll n;
         // cin>>n;
         // vector<ll>b;
         
         // for(ll i=0;i<n;i++)
         //    {
         //       ll k;
         //       cin>>k;
         //       b.push_back(k);

         //    }
         //    if(b.size()==2)
         //    {
         //       cout<<"0"<<el;
         //    }
         //    else
         //    {
         //       cout<<"-"<<b[n-1]<<el;
         //    }
         // ll count=0;
         // ll n;
         // cin>>n;
         // for(ll i=0;i<n;i++)
         //    {

         //       ll k;
         //       cin>>k;
         //       b.push_back(k);
         //    }
            

         //    for(ll i=0;i<n;i++)
         //    {
         //       for(ll j=0;j<n;j++)
         //       {
         //          if(i<j&&b[i]*b[j]==i+j+2)
         //          {
         //             count++;

         //          }
         //       }
         //    }
         //    cout<<count<<el;


      // }
   //    ll n,q;
   //    cin>>n>>q;

   //    s a;
   //    cin>>a;
   //    while(q--)
   //    {
   //       ll l,m;
   //       cin>>l>>m;
   //       s t="";
   //       ll ans=0;
   //       for(ll i=l-1;i<m;i++)
   //       {
   //          t+=a[i];
   //       }
   //       sort(t.begin(),t.end());
   //       // cout<<t<<" ";
   //       // cout<<t<<" ";
   //       if(l==m)
   //       {
   //          ll k=t[0]-'0'-49;
   //          cout<<k+1<<el;
   //       }
   //       else
   //       {

   //        for(ll i=0;i<a.size();i++)
         
   //    {
   //       ll k=t[i]-'0'-49;
   //        cout<<k<<el;
   //       // cout<<b[k]<<el;
   //       // cout<<k<<" ";
   //       b[k]++;

   //    }
   //     for(ll i=0;i<26;i++)
   //     {
   //        cout<<b[i]<<" ";
   //     }
   //    for(ll i=0;i<26;i++)
   //    {
   //       ans=ans+((i+1)*b[i]);
   //    }
   //    cout<<ans<<el;
   // }
   //    for(ll i=0;i<26;i++)
   //    {
   //       b[i]=0;
   //    }


   //    }

      // for(ll i=0;i<a.size();i++)
      // {
      //    ll k=a[i]-'0'-49;
      //    // cout<<k<<" ";
      //    b[k]++;

      // }
      // for(ll i=0;i<26;i++)
      // {

      //  cout<<b[i]<<" ";
      // }
      




    }

 int main()
 {
   solve();
   // s a;
   // cin>>a;

   // permuatation(0,a.size()-1,a);
   // for(ll i=0;i<PS.size();i++)
   // {
   //    cout<<PS[i]<<el;

   // }
 }
