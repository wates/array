#include <stdio.h>
#include <stdlib.h>

// argv[1] に問題のファイル名が入ります
int main(int argc, char *argv[]) 
{
    FILE *fp;

    // ファイルの読み込み
    char *filename = argv[1];
    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Failed to open %s.\n", filename);
        exit(EXIT_FAILURE);
    }

    //##### ここから書き換えてファイルを読み込んで、結果を出力する
    char str[1000];
    fgets(str, sizeof(str), fp);
    printf("%s", str);

    //##### だいたいここまで書き換える

    // ファイルを閉じます
    fclose(fp);

    return 0;
}
