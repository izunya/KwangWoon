extern int all_files;

// extern int this_file; linkage1.c에서 정의한 static 변수이므로 linkage1.c에서만 사용 가능하다.

void sub(){
    all_files = 10;
}