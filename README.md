# 配列の問題

# 全体的な進め方
* このリポジトリをforkしてください
* Travis CI を設定して、自動ビルドが通るようにしてください
   * Travis CI のGitHubアカウントでの登録とforkしたリポジトリをTravisCI側で許可
   * 参考サイト：[Travis CI入門 Travis CIとGitHubでCIを実現する方法(Change the World!)](http://changesworlds.com/2014/09/introduction-to-travis-ci-and-github-001/)
* forkしたリポジトリの README.md ファイルの「t-kougei-game-comp-2018」の部分を自分のGitHubアカウント名に差し替えてください(2箇所)
* 問題を解いて、テストを通るようにしてください。
* GitHubのアカウントを[こちらのフォーム](https://goo.gl/forms/anAdoxqPKVt8sJGZ2)から教えてください。

# テスト結果

[![Build Status](https://travis-ci.org/t-kougei-game-comp-2018/array.svg?branch=master)](https://travis-ci.org/t-kougei-game-comp-2018/array)

# 今回の問題

配列の勉強です。
入力される文字を配列に順次格納して、取り出すように指示されたら、その値を出力してください。
プロジェクトのinput#.txtファイルを読み込んで、output#.txtファイルが出力されるかテストをします。
main.c ファイルだけを書き換えて下さい。

## 入力される値
入力は以下のフォーマットで与えられます。
~~~
N
n
n
n
n
~~~
* N: 入力されるデータの数。
* n: 正の値なら、配列に格納、負の値なら、その絶対値の順番に格納された数字を出力

## 期待する出力

入力されたデータの負の回数だけ数字を出力します。

最後は改行し、余計な文字、空行を含んではいけません。

## 条件
すべてのテストケースで以下の条件を満たします。
入力される値は全て整数

* 2 ≦ N ≦ 100
* -99 ≦ N ≦ 100

## 入力例1
~~~
2
3
-1
~~~

## 出力例1
~~~
1
~~~

## 入力例2
~~~
6
5
7
8
-2
4
-4
~~~

## 出力例1
~~~
7
4
~~~
