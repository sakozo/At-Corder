#include<iostream>
#define LEN 100005

/* プロセスを表す構造体 */
//classみたいなもの値を格納
typedef struct pp{
    char name[100]; //名前
    int t;          //必要時間
} P; //型の名前はP

P Q[LEN]; //P方の配列を定義
int head, tail, n; //キューの先頭を表す、末尾をあらわす、プロセスの数

void enque(P x){
    Q[tail] = x;              //P型の情報を格納
    tail = (tail + 1) % LEN;  //末尾のインデックスを1後ろに下げる
}

P deque(){
    P x = Q[head];            //先頭要素を取り出す
    head = (head + 1) % LEN;  //先頭のインデックスを1つ下げる
    return x;                 //取り出した先頭要素を返却する
}

int min(int a, int b){ return a < b ? a : b;} //2つの引数の内小さい方を返すメソッド

int main(){
    int elaps = 0,c; //経過時間を格納する変数elaps, c
    int i,q;
    P u;
    scanf("%d %d", &n, &q); //n:プロセスの数、q:クオンタム

    /* 全てのプロセスをキューに順番に追加する */
    for (i = 1;  i<= n ; i++) {
        scanf("%s", Q[i].name); //プロセス名
        scanf("%d", &Q[i].t);   //かかる時間
    }
    head = 1; tail = n + 1;  //先頭インデックスと末尾インデックスを初期設定

    /* シミュレーション */
    while (head != tail){  //head==tailになった時はキューが空になった時
        u = deque();       //先頭要素を取り出す
        c = min(q, u.t);   //クオンタムと要素の残り時間を比較し小さい方を取り出す（終了する際にちょうど0になるように）
        u.t -= c;          //残り時間を計算
        elaps += c;        //経過時間を加算
        if (u.t >0)         
        {
            enque(u);      //キューの後ろに追加
        }else{
            printf("%s %d\n", u.name, elaps);  //終了したプロセスと経過時間を出力
        }
    }

    return 0;
}
