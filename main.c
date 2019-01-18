#include <stdio.h>
#include <math.h>
struct point{
    int x;
    int y;
};

int main()
{
    printf("jinruzhuancheguanlixitong\n");
    struct point arr[100];
    int index = 0;
    
    while (1)
    {
        printf("1---tianjiayigecheliangweizhixiaoxi\n");
        printf("2---shanchuzuihouyigecheliangweizhixinxi\n");
        printf("3---xianshisuoyoucheliangweizhixinxi\n");
        printf("4---chazhaojulizuijindecheliang\n");
        printf("5---tuichuxitong\n");

        printf("qingshurusuoxyxiangmushuzi\n");
        int code;
        scanf("%d",&code);

        if (code ==1){
            printf("qingshurucheliangdeweizhixzuobiaoyzuobiao\n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);
            arr[index].x = x;
            arr[index].y = y;
            index++;
            printf("tianjiachenggong,dianjihuichejixu\n");
            char a;
            scanf("%c",&a);
            scanf("%c",&a);

        }
        if (code ==2){
            if(index > 0){
                index--;
                printf("shanchuchenggong,dianjihuichejixu\n");
                char a;
                scanf("%c",&a);
                scanf("%c",&a);

            }
            else{
                printf("shanchushibai,dianjihuichejixu\n");
                char a;
                scanf("%c",&a);
                scanf("%c",&a);


            }
        }
        if (code ==3){
            for(int i = 0; i < index; i++){
                printf("di%dliangchedezuobiaoweizhiwei(%d,%d)\n",i+1,arr[i].x,arr[i].y);
            
            }
            printf("dianjihuichejixu\n");
            char  a;
                scanf("%c",&a);
                scanf("%c",&a);

        }
        if (code ==4){
            printf("qingshurunindeweizhixzuobiaoyzuobiao\n");
            double min = 1000;
            int ID;
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);

            for (int i = 0; i<index; i++)
            {
                int dx = x - arr[i].x;
                int dy = y - arr[i].y;
                double l = sqrt(dx * dx + dy * dy);

                if (min > 1){
                    min = 1;
                    ID = i + 1;
                }
             }
             printf("di%dlclnzj,jlw%lf\n", ID, min);
             printf("dianjihuichejixu\n");
             char a ;
            scanf("%c",&a);
             scanf("%c",&a);
        }
        if (code ==5){
            printf("dianjihuiche,tuichuxitong\n");
            break;
            
        }
    }

    

    return 0;

}