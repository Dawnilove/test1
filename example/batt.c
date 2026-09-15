#include <stdio.h>
#include <string.h>

int main(void){
    double I, vel, R;
    double V, C, Eta;
    //double E_useable, P, t, d;


    // printf("평균 전류[A]: ");
    // scanf("%lf", &I);
    // printf("평균 속도[km/h]: ");
    // scanf("%lf", &vel);
    // printf("예비율: ");
    // scanf("%lf", &R);
    // printf("공칭전압[V]: ");
    // scanf("%lf", &V);
    // printf("용량[Ah]: ");
    // scanf("%lf", &C);
    // printf("시스템 효율: ");
    // scanf("%lf", &Eta);

    // E_useable = V * C * Eta *(1 - R);
    // P = (V * I);
    // t = E_useable / P;
    // d = vel * t;
    // printf("\n");
    // printf("\n");
    // printf("사용 가능 에너지: %.2lf \n", E_useable);
    // printf("소비전력: %.2lf \n", P);
    // printf("런타임: %.2lf \n", t);
    // printf("주행거리: %.2lf\n", d);

    // return 0;



    printf("평균 전류[A]: ");
    if(scanf("%lf", &I)!=1) return 1;
    printf("평균 속도[km/h]: ");
    if(scanf("%lf", &vel)!= 1) return 1;
    printf("예비율: ");
    if(scanf("%lf", &R)!= 1) return 1;
    printf("공칭전압[V]: ");
    if(scanf("%lf", &V)!= 1) return 1;
    printf("용량[Ah]: ");
    if(scanf("%lf", &C)!= 1) return 1;
    printf("시스템 효율: ");
    if(scanf("%lf", &Eta)!= 1) return 1;


    if(V<=0 || C<=0 || I<=0 || vel<0 || R<0 || R>=1 || Eta <= 0 || Eta > 1)
    {
        printf("입력값 범위를 확인하세요 \n");
        return 1;
    }

    const double E_useable = V * C * Eta * (1 - R);
    const double P = (V * I)/Eta;
    const double t = E_useable / P;
    const double d = vel * t;

    printf("\n");
    printf("\n");
    printf("사용 가능 에너지: %.2lf Wh\n", E_useable);
    printf("소비전력: %.2lf \n", P);
    printf("런타임: %.2lf h\n", t);
    printf("주행거리: %.2lf km\n", d);

    return 0;
}


