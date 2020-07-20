# 課題4 レポート

bb35319034 林健太郎

## 課題

[../sample/heights.csv]は標本全体（男性と女性合わせた14人）のデータをまとめたものである．
一方，[../sample/IDs.csv]は標本14人の学籍番号（身長データと同じ順番）である．
学籍番号を尋ねて，その学籍番号のデータがリストにあれば，学籍番号，身長，性別のデータを表示し，リストになければ，「No data」と表示せよ．

この二つのファイルを読み取り，学籍番号，身長，性別の3つをメンバーとする構造体の配列で管理するとよい．

## ソースコードの説明
まず構造体を宣言しました。ファイルを開いて構造体でまとめて、ファイルを閉じました。IDを入力して身長と性別を表示するのは、配列で考えてそれに対応した身長を出す。性別は１のときはMale,それ以外のときはFemaleと出す。IDがあったときには j に1足すので、j が0のときは No data と出力されるようにする。


## 入出力結果

例えば，ID 45313125のデータを調べたいとき，

```
Input the filename of sample height : ../sample/heights.csv
Input the filename of sample ID : ../sample/IDs.csv
Which ID's data do you want? : 45313125
---
ID : 45313125
gender : Female
height : 152.4
```

例えば，ID 45313124のデータを調べたいとき，

```
Input the filename of sample height : ../sample/heights.csv
Input the filename of sample ID : ../sample/IDs.csv
Which ID's data do you want? : 45313124
---
No data
```

```
Input the filename of sample height :c:\Users\admin\Documents\2020psp2\sample\heights.csv
the filename of sample: c:\Users\admin\Documents\2020psp2\sample\heights.csv
Input the filename of sample ID :c:\Users\admin\Documents\2020psp2\sample\IDs.csv
the filename of sample: c:\Users\admin\Documents\2020psp2\sample\IDs.csv
Which ID's data do you want? : 45313002
ID : 45313002
gender : Male
height : 183.870000
```

```
Input the filename of sample height :c:\Users\admin\Documents\2020psp2\sample\heights.csv
the filename of sample: c:\Users\admin\Documents\2020psp2\sample\heights.csv
Input the filename of sample ID :c:\Users\admin\Documents\2020psp2\sample\IDs.csv
the filename of sample: c:\Users\admin\Documents\2020psp2\sample\IDs.csv
Which ID's data do you want? : 35319034
No data
```

## 修正履歴

[comment0720宮下]

課題提出お疲れさまでした！修正点はありません。k04完了です。 

[comment #20200720 sonoda]
- 課題4の完了を確認
