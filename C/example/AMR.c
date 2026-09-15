#include <stdio.h>
#include <string.h>

int main(void)
{

    int N;
    double m, SF, DM, R, T, G, w;
    const double c = 0.018; //구름 저항 계수   
    const double g = 9.81;  // 중력가속도
    double F_min, F_motor;
    const char *res;

    SF = 2.0; //안전 계수
    DM = 1.2; //설계 마진

    // m = 200; //총 하중
    // N = 2; //구동 바퀴 수
    // T = 0.63;  //토크
    // G = 10;    //감속비
    // R = 0.0965; // 바퀴 반지름
    
    printf("총 하중(kg): ");
    scanf("%lf", &m);
    printf("구동 바퀴 수: ");
    scanf("%d", &N);
    printf("모터 정격 토크(Nm): ");
    scanf("%lf", &T);
    printf("감속비: ");
    scanf("%lf", &G);
    printf("바퀴 반지름(m): ");
    scanf("%lf", &R);


    w = m * g; //중량

    F_min = c * w * SF * DM;
    F_motor = ((T * G) / R) * N;
    
    if (F_min <= F_motor)
    {
        res = "만족 [적합한 모터입니다.]\n";
    }
    else
    {
        res = "불만족 [더 큰 모터나 감속비가 필요합니다!]\n"; 
    }

    // printf("총 하중(kg): %.2f\n", m);
    // printf("구동 바퀴 수: %d개\n", N);
    // printf("모터 정격 토크(Nm): %.2f\n", T);
    // printf("감속비: %d\n", G);
    // printf("바퀴 반지름(m): %.3f\n", R);
    printf("\n");
    printf("\n");
    printf("필요한 최소 견인력: %.2f[N]\n", F_min);
    printf("모터가 낼 수 있는 견인력: %.2f[N]\n", F_motor);
    printf("판정: %s\n", res); 

    return 0;
    
}
