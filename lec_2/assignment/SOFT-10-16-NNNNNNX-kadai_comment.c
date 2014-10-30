#include <stdio.h>

#define MAXLEN      100
#define THRESHOLD  50.0
// defineによって、プログラムの中で使用する定数をさだめ、
// 変数に毎回アクセスする時間を節約している。

int main()
{
  int i, maxindex;
  int max, min, value;
  // それぞれint型の変数を宣言している。
  int score[MAXLEN];
  // int型の要素をMAXLEN個持つ配列を宣言し、メモリを確保している。
  // 配列名は、この配列の初めの要素のアドレス（ポインタ）を意味している。
  double average;
  // double型の変数を宣言している。

  for( i = 0 ; i < MAXLEN ; ++i ) {
    // for loopの中では、毎回scanfによってキーボード入力を呼び出している。
    scanf( "%d", &value );     // printf とは逆で，キーボード入力。40[return]という
                               // キー入力をすると，value に 40 という値が代入される。
                               // &value の & はまだ教えてないので，言及しなくてよい。

    if( value < 0 )  break;    // for ループを強引に抜ける
    score[i] = value;
    // scoreという配列の初めの要素からi回動いた場所にある要素(i+1番目の要素)
    // に、valueを代入している。
  }
  // for loopを抜けるのはbreakが起きたときであり、以下のiはその時のiを表す。
  // maxindexはつまり、scoreの配列の中で代入された最後の値のindex。
  maxindex = i-1;

  if( maxindex >= 0 ) { // 0以上の値の入力が1回以上なされた時。
    max = min = score[0];
    average = 0;
    // 以上、値の初期化。

    for( i = 0 ; i <= maxindex ; ++i ) {
      // scoreの配列の要素を一つひとつみていき、
      // 2つのif文のコンディションを考察する。 

      if( max < score[i] )
        max = score[i];
      // maxをscore[i]の値と比較し、それよりも小さかった場合には、
      // maxにscore[i]を代入している。

      if( min > score[i] )
        min = score[i];
      // minをscore[i]の値と比較し、それよりも大きかった場合には、
      // minにscore[i]を代入している。

      average = average + score[i];
      // ここではscore[i]の値をfor loopの中で毎回足している。
      // つまり、score[i]の値を足したものに毎回averageを書き換えている。
      // 実際にはこの値はscoreの要素のsumとなる。
    }

    if( ( average = average / (maxindex+1) ) < THRESHOLD ) {
      // このif文のコンディションは、条件として機能するのに加え、
      // average = average / (maxindex+1)の処理も行っている。
      // つまり、sumをmaxindex+1(scoreの要素数)で割ることで、
      // averageをscoreの要素の平均値におきかえている。
      // if文は条件としては、置き換えられた平均値としてのaverageが
      // THRESHOLDよりも小さいとき、という意味。
      printf( "Students of this class are poor.....¥n" );
    }

    printf( "averaged score = %.2lf, min = %d, max = %d, ndata = %d¥n", average, min, max, maxindex+1 );
    // if maxindex >= 0の実行内容の終わり。
    // 入力値が1個以上0以上であれば、最後のprintfは実行される。
    // averageは%.21fにより、小数点以下二桁のfloatとして出力されている。

  } else { // if maxindex <0 、つまり、0以上の値が入力されなかった時。
    printf( "no data¥n" );
  }

}