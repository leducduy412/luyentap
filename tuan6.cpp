//bai1
void reverse(char *s) {
    char *p= s + strlen(s) - 1;
    while (p>s){
        char t=*s;
        *s=*p;
        *p=t;
        p--;
        s++;
    }
}

//bai2
void rFilter(char *s) {
    char *p=s+strlen(s)-1;
    while(p>=s&&(*p<'A'||(*p>'Z'&&*p<'a')||*p>'z')){
        *p='_';
        p--;
    }
}
