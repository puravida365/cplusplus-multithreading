// thread 1

void f1(){
    get(A);
    get(B);
    release(B);
    release(A);
}

// thread 2

void f2(){
    get(B);
    get(A);
    release(A);
    release(B);
}