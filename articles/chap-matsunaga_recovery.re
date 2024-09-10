= アジャイルではリカバリーってどうやるの？

//flushright{
松永 広明
//}

ある日の研修で、受講生のひとりからこんな質問をいただきました。

「アジャイルでは、遅れが出た場合のリカバリーはどうやるのでしょうか？」

うーん、実によい、趣のある深い質問です。実に深い。松崎しげ●の目尻のしわのように深いです（事実無根）。

この問題を理解するには、いくつかのステップが必要です。まずはそれをあげてみます。

 1. アジャイルは価値が大事。アウトプットよりアウトカム
 2. スプリントの目的は「スプリントゴール」
 3. 価値をできるだけ毀損せず、やらなくても良いことを最大化せよ

順に解説します。


== アジャイルではアウトプットよりアウトカムが大事

「アウトプット」は、プロジェクトなどの活動から生み出される直接の結果や成果物のことです。一方で「アウトカム」は、その活動の成果として、自身や顧客に生じる利益や変化のことです。

図にすると、図7.1のようなイメージです。

//image[image1][ロジックモデル][scale=1.0]

ソフトウェア開発でいえば、インプットはお金だったり開発者たちの工数だったりします。アウトプットはアクティビティ、すなわち日々の開発作業から作られたソフトウェアシステムそのものです。アウトカムは、そのシステムを使うことで得られる利益や、削減できるコストや、生活の変化だったりするわけです。

Return On Investment（ROI）という言葉があります。日本語だと投資対効果などといったりしますが、これはその投資に対してどれだけの利益が得られるのかを示す数値で、数値が大きいほど効果が高い投資だということを示します。計算式は下記の通りです。


//texequation{
ROI = \frac{R}{I}
//}

簡単ですね。いくらReturnが大きくても、Investmentも大きいと、ROIすなわち投資効果は減ってしまうことがわかります。つまり、ビジネスにおいては単にReturnがあることだけが大事なわけではなく、Investmentが極力少ないものである必要があることがわかると思います。

では、図7.1において、Investmentはどれで、Returnはどれでしょう。Returnというのはその活動の成果として得られる利益などを指すのですから、この図でいえば”Return”は一番右の「アウトカム」だけとなります。わかりますか？つまりみなさんが作っているソフトウェアシステムは、作って納入するだけで価値があるわけではなく、運用されて、何らかの効果が得られて初めて「Return」、すなわち価値となる得るわけです。ソフトウェアシステムは、それ単体では「Investment」、つまり投資にすぎないということです。ええ～～そんなあ～。

そしてさらに、分母であるInvestmentは小さい方がROIは大きくなるので、みなさんはなるべく仕事をしないほど良いという事になりますね。やったぜ！
 
//image[image3][ROIの最大化][scale=1.0]

でも別の見方をすると、アウトプットをいくらたくさん生み出しても、それがアウトカムにつながらなければ何の意味もないどころかお金の無駄遣いだったということになりますね。価値がゼロのものをどれだけたくさん作ってもゼロはゼロです。逆にいうと、大きなアウトカムが得られるならアウトプットは小さくシンプルであるほうが良いということになります。


== スプリントの目的は「スプリントゴール」

前節からわかるとおり、スプリントの目的は価値を生み出すことであり、ソフトウェアを作ることではありません。スクラムでは、スプリントで生み出されるこの「価値」を、スプリントゴールとして設定するわけです。つまり、スプリントの目的は、より多くの機能を作るとか、より長時間働くとか、計画された機能をすべて完成させるとかではなく、価値を届けることだといえます。スプリントゴールとはスプリントの「Why」です。『「なぜ」そのスプリントをやるのか？』です。つまり、スプリントゴールとは、そのスプリントが生み出そうとしている「価値」だということです。

ここで価値について考えてみます

筆者は大好きなLiSA（歌手）さんがCatch the momentのリリースイベントで手渡してくれたサイン入りポストカードを持っています（2枚！）。彼女はこのサインをものの数秒で書き上げるわけです。これなんて売れば数万円ぐらいの値が付いてもおかしくありません（絶対にそんなことはしませんが）。数秒で数万円、たとえば5秒で5万円とすると、1分で60万円（！）の価値を生むのです。ですがそんなことよりも、彼女とほんの短時間でも直接目を合わせて会話をしながら手渡してもらったという思い出が詰まっていて、実際のところPricelessです。つまり何がいいたいかというと、価値というのは単純に作業時間や作業量とは単純にリニアに変換できるものではないということです。

前項の説明によると、スプリントゴールさえ達成出来るならば、スプリントプランニングで作ると決めた機能が、決めた通りにすべて完成していなくても良いことになりますよね？「目的が達成出来るなら手段はひとつじゃないよね？」ということです。

== やらなくても良いことを最大化せよ
アジャイル宣言にはこういう記述があります。あえて英語版で。

//quote{
    「Simplicity--the art of maximizing the amount of work not done--is essential.」
//}

筆者なりに意訳すると、「やらなくても良いことを最大化する技術が不可欠です」という意味です。やらないことの最大化、というのは、言い換えると、やることを最小限にしろということです。これは、上述のInvestmentを最小化せよという話と符合します。そのためにはシンプルさが必要だとアジャイル宣言は説いているわけです。一方で、いくらやることを減らすといっても価値まで減らしてはいけないので、そのためによりシンプルなソリューションを考え、スプリントゴールで策定した価値を毀損することなく、やることを最小化すべしといっているわけです。

たとえば、「当初フリーワード検索で考えていたけど、よく考えたら選択肢は5つしかないから、これだったらチェックボックスかラジオボタンで良くね？」となります。たぶんその方が文字コードチェックとかも要らないので実装も簡単ですし、なおかつ必要なものを検索するという当初の価値は全く失われていません。

これぐらいの単純な例なら良いですが、実際にはシンプルかつ価値の高いソフトウェアを作るというのはけっこう大変です。まず顧客が何を価値だと感じているのかをよく知ることが必要です。顧客は自分にとっての価値が何なのか、実はよく分かっていなかったりするので、単にヒアリングするだけではなく本当の意味で顧客に寄り添う必要があります。また、シンプルな設計というのは実は最も難しかったりします。読みやすく理解しやすいコードだったり、結合度が低くて凝集度が高く、変更容易性の高い設計だったり、日々リファクタリングを重ねて常にシンプルさを保つ努力が必要だったりします。アジャイル宣言にもこう言及されています。

//quote{
    「技術的卓越性と優れた設計に対する不断の注意が機敏さを高めます。」
//}


== アジャイルでリカバリーってどうやるの？

冒頭のこの質問に戻ります。

極論すれば、アジャイルは「如何にして作らずに済ませるか」の技術です。よく「アジャイルでは何をやるかよりも、何をやらないかの方が大事」といったことがいわれます。やらなくて良いことはやらない、作らなくても良いものは作らない。いたずらに仕事の量を追うのではなく、その価値を見極めて本当に必要なことだけをやっていけば、物事はシンプルになる、ということです。そうしていかに少ないコードで大きな価値を出すか（つまりROI）を考えていくと、作業時間も短くすることができるかも知れません。アジャイル開発では、そうやってリカバリーを行うのです。まあもちろんそれだけとは限らないし、それが上手く行かない場合もあるのは否定しませんが。

そもそも、冒頭の質問の背景には、従来型開発で骨の髄まで染みついた、「コストと納期とスコープは守り通さねばならない」という考え方があると思うのです。つまり、スプリントプランニングで作ると決めた機能は、スプリント終了までに決めた通りにすべて作らなくてはならないという考え方をしているのだと思うのです。

こういう考え方だと、遅延が出てしまった場合は残業をしてリカバリーするしかなくなってしまいます。残業は最悪です。残業は、なにか問題があったときに、安易にその場しのぎのリカバリーをする方法です。こういった方法が恒常化しているチームは、問題（この場合は遅延）の根本的な原因にリーチしようとしないので、改善していかないのです。アジャイル宣言にある「サステナブル・ペース」にも反しますね。なので、生産性が上がらないといっているチームのコーチに入ったときに、私が最初にコーチすることは、残業を禁止にすることだったりします。こうすることで、彼らはいかに残業をせずに問題を解決するかを考えるようになります。


== まとめ

まとめます。

 * 価値と量、価値と時間はリニアに変換できない
 * ROIを高めるためには、仕事の量や時間は極力抑えよう
 * シンプルな仕事をすることで、価値を毀損せずに量や時間を抑えることが可能となる 
 * リカバリーのために残業をするのは悪手



　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-matsunaga/matsunaga.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        松永 広明 @qoragile https://twitter.com/lsaconsul\\
        LSA CONSULTiNG株式会社　代表取締役
        \end{minipage}
    \hspace{1ex}
//}


https://www.facebook.com/lsaconsul

https://www.linkedin.com/in/lsaconsulting/

