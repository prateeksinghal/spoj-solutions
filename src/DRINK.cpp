#include<stdio.h>
int main()
{
    double mi,mw,ti,tw,diff,diff2,t,li,lw,mw2,hw,hi,mi2;
    scanf("%lf %lf %lf %lf",&mw,&mi,&tw,&ti);
    while(mi!=0||mw!=0||ti!=0||tw!=0)
    {
        hw=mw*4.19*tw;
        hi=mi*2.09*(-1*ti);
        diff=hw-hi;
        if(diff==0)
        {
            printf("%.1lf g of ice and %.1lf g of water at 0.0 C\n",mi,mw);
        }

        else if(diff>0)
        {
            li=mi*335;
            diff2=diff-li;
            if(diff2==0)
            {
                printf("0.0 g of ice and %.1lf g of water at 0.0 C\n",mi+mw);
            }
            else if(diff2>0)
            {
                t=diff2/((mi+mw)*4.19);
                printf("0.0 g of ice and %.1lf g of water at %.1lf C\n",mi+mw,t);
            }
            else
            {
                mi2=mi-diff/335;
                printf("%.1lf g of ice and %.1lf g of water at 0.0 C\n",mi2,mw+mi-mi2);
            }
        }
        else
        {
            diff*=-1;
            lw=mw*335;
            diff2=diff-lw;
            if(diff2==0)
            {
                printf("%.1lf g of ice and 0.0 g of water at 0.0 C\n",mi+mw);
            }
            else if(diff2>0)
            {
                t=diff2/((mi+mw)*2.09);
                printf("%.1lf g of ice and 0.0 g of water at -%.1lf C\n",mi+mw,t);
            }
            else
            {
                mw2=mw-diff/335;
                printf("%.1lf g of ice and %.1lf g of water at 0.0 C\n",mi+mw-mw2,mw2);
            }
        }
        scanf("%lf %lf %lf %lf",&mw,&mi,&tw,&ti);
    }
    return 0;
}
