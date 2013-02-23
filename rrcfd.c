	#include<X11/Xlib.h>
#include<math.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#define R(x)(x)/2
#define r(w)_(w,0)
#define V(w)(w)*(w)
#define _(w,Z)u[w][p+Z]
#define p a+l*b+V(l+1)*c+b
#define o(x,j,S)U(x,j,l-j,S)
#define L(w,Z,z)(1-z)*(w)+z*(Z)
#define M(Z,j)(Z>j?j:(Z<0?0:Z))
#define T(x,j)o(c,x,o(b,x,o(a,x,j)))
#define U(w,Z,j,x)for(w=Z;w<j;w++){x}
#define P(j)U(d,0,3,r(9)=_(9,j O[2-d]);h=a;a=b;b=c;c=h;)
#define I m=V(l+1);Q=M(a-F[0]-(f=(int)(a-F[0])),l);E=M(\
b-F[1]-(g=(int)(b-F[1])),l);W=u[d]+f+O[1]*g+m*(e=(int)(\
c-F[2]));r(d+4)=L(L(L(W[0],W[1],Q),L(W[l+1],W[l+2],Q),E\
),L(L(W[m],W[m+1],Q),L(W[m+l+1],W[m+l+2],Q),E),M(c-F[2]-e,l));
#define K(j)F[j]=R(R(r(j)+_(j,O[d])+_(j,O[j])+_(j,O[d]+O[j])));/*F(){..*4\
7,f-e-e.d/c/c0e.d/c0b0b("(b(#'b($&b($&b(%%b(&$b('#b(("_.d.d.d.d.d.d.HUH?*/
int a,b,c,d,e,f,g,h,i,j,k=1,l,m,Y;double Q,E,*u[012],F[3],*W;char*X,t[99];
int main(int S,char**v){Y=**++v-48;l=atoi(*(v-2+S));Display*q=XOpenDisplay
(0);Window H=RootWindow(q,0);if(S==02)l=(b=getchar())==9?80:b,S-=b==9;if(S
!=2||b==9)putchar(l);GC G=XCreateGC(q,H,0,0);int O[3]={1,l+1,V(l+1)};U(a,0
,10,u[a]=calloc(O[1]*V(l+1),8);)H=XCreateSimpleWindow(q,H,0,0,l*Y,l*Y,0,0,
0);if(S-1){T(0,if(V(b-2)+V(c-R(l))+V(a-R(l))<V(l/10)){r(3)=r(7)=0.02;r(1)=
7;})}else{U(e,0,22,gets(t);)X=t;while(k<=1948){S=!S;U(m,0,*X-33,U(e,044,44
,j=k%80+(l/2-k/80)*O[1]-(p)+e*V(l+1);_(7,j)=_(3,j)=S*0.1;)k++;)X++;}T(0,if
(a<40&&(Q=r(3))){a=80-a;r(3)=Q;a=80-a;})S=1;}XMapWindow(q,H);while(G){U(a,
0,l,U(b,0,l,if(S-2){Q=0;U(c,0,l,E=0;f=a;g=b;e=c;while(f&&g-l&&e-l){E+=_(03
,f--+g++*O[1]-(p)+(e+=S==1)*V(l+1));}Q+=r(3)*exp(-E*0.97e2);)e=(M(Q*015410
,0377));putchar(e);}else{e=getchar();}XSetForeground(q,G,e|e<<8|e<<020|e<<
24);U(f,0,Y,U(g,0,Y,XDrawPoint(q,H,G,a*Y+f,(l-b-1)*Y+g);))))if(S-2){i=1,j=
0,k=2;T(0,if(b>2)r(1)+=(r(3)+_(3,l+1))*3.5/(1+4*(S==1));if(b<3){d=b;b=l-2+
(d==1);r(d)=_(d,-l-1);b=d;})U(d,0,3,h=k;k=j;j=i;i=h;U(c,1,l-(k!=2),U(b,1,l
-(j!=2),U(a,1,l-(i!=2),F[d]=r(d);K(j)K(i)I))))T(1,U(d,0,3,F[d]=R(r(d)+_(d,
O[d]));)I)T(0,r(8)=0;U(d,0,3,r(8)+=_(4+d,O[d])-r(4+d);))f=80;while(f--){U(
a,0,l,U(b,0,l,c=0;P()c=l-1;P(-)))T(1,Q=-r(8);U(d,0,3,Q+=_(9,O[d])+_(9,-O[d
]);)r(9)+=0117*(Q/6-r(9))/0620;)}T(1,U(d,0,3,if(a)r(d)=r(d+4)-r(9)+_(011,-
O[d]);))W=u[3],u[3]=u[7],u[7]=W;}if(S-2)putchar(05);else{if(getchar()-05){
rewind(stdin);getchar();}}usleep(9<<9);}}
