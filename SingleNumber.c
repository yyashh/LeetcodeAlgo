

int singleNumber(int* n, int ns){
    int i,r=0;
    for(i=0;i<ns;i++)
        scanf("%d",n+i);
    for(i=0;i<ns;i++)
        r^=n[i];
    return r;
}