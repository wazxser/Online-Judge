#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct node{
    double pi;
    double di;
}Node[550];

bool cmp(node no1, node no2){
    if(no1.di < no2.di){
        return true;
    }

    return false;
}

int main(){
    int j;
    double cmax, dmax, davg;
    int n;
    while(~scanf("%lf %lf %lf %d", &cmax, &dmax, &davg, &n)){
        for(int i = 0; i < n; i++){
            scanf("%lf", &Node[i].pi);
            scanf("%lf", &Node[i].di);
        }

        sort(Node, Node+n, cmp);
        if(Node[0].di != 0 || n == 0){
            printf("The maximum travel distance = 0.00\n");
            break;
        }

        double distance = 0;
        double cheap = 0;
        double nowgas = 0;
        int k;

        Node[n].pi = 0;
        Node[n].di = dmax;

        for(k = 0; k < n; k++){
            if((Node[k+1].di - Node[k].di) > cmax*davg){
                distance += cmax*davg;
                break;
            }

            if(Node[k+1].pi < Node[k].pi){
                if(nowgas*davg >= Node[k+1].di - Node[k].di){
                    distance += Node[k+1].di - Node[k].di;
                    nowgas -= (Node[k+1].di - Node[k].di)/davg;
                }
                else{
                    cheap += ((Node[k+1].di-Node[k].di)/davg - nowgas) * Node[k].pi;
                    distance += Node[k+1].di - Node[k].di;
                    nowgas = 0.0;
                }
            }
            else{
                int d = cmax * davg;
                j = k+1;
                int minp = Node[k+1].pi;
                int next = k+1;
                while(Node[j].di - Node[k].di <= d){
                    if(Node[j].pi <= Node[k].pi){
                        break;
                    }

                    if(Node[j].pi < minp){
                        next = j;
                        minp = Node[j].pi;
                    }

                    j++;
                }

                if(Node[j].di - Node[k].di <= d){
                    if(nowgas*davg >= Node[j].di - Node[k].di){
                        distance += Node[j].di - Node[k].di;
                        nowgas -= (Node[j].di - Node[k].di)/davg;
                    }
                    else{
                        cheap += ((Node[j].di-Node[k].di)/davg - nowgas) * Node[k].pi;
                        distance += Node[j].di - Node[k].di;
                        nowgas = 0.0;
                    }
                    k = j-1;
                }
                else{
                    j = next;
                    cheap += (cmax - nowgas) * Node[k].pi;
                    nowgas = cmax - (Node[j].di - Node[k].di) / davg;
                    distance += Node[j].di - Node[k].di;
                    k = j-1;
                }
            }
        }

        if(!(k < n)){
            printf("%.2lf\n", cheap);
        }
        else{
            printf("The maximum travel distance = %.2lf\n", distance);
        }
    }

    return 0;
}
