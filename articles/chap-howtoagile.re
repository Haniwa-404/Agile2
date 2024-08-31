= アジャイルとは何か

//flushright{
    山田 雄一@ditflame
//}

== アジャイルとはやり方ではなくあり方である
=== アジャイルとは

「アジャイル」という言葉が一般的になってずいぶんと経ちます。

具体的な例としてプロジェクトマネジメントの知識体系ガイドであるPMBOK(R)ガイドをみると、2017年に発行された第６版で「アジャイル」の内容が初めて本文に組み込まれました。さらに、2021年に発行された第７版では、「価値を提供する」事に重きを置いた、アジャイル的なプロジェクトマネジメントを行うための知識体系へと大きく変貌を遂げました。

https://www.pmi-japan.shop/shopdetail/000000000028/

昨今では、ソフトウエア開発やプロジェクトマネジメント以外の色々な分野に波及しており、相変わらずアツい「アジャイル」ですが、そもそも「アジャイル」はどういった経緯で必要となり一般的になっていったのでしょうか？

その思想やあり方を手っ取り早く、かつ深く理解する為に、「アジャイル」が発生するに至ったソフトウェア開発手法の発展の歴史を追ってみましょう。

せっかくの機会なので、まずはアジャイルが求められるようになった背景を学んでいきましょう！

=== アジャイルが求められるようになった背景を爆速で理解しよう

ソフトウェア開発の黎明期(1970年頃)は国内外を問わず、情報システム産業全体の課題として、ソフトウェア開発の生産性やソフトウェア品質が非常に悪いことが大きな問題となっていました。これに対するため、ウォーターフォール型開発モデルや、構造化プログラミングといった、現在でも残る色々な手法が提案されました。

ソフトウェア開発の生産性やソフトウェア品質が悪いという課題に対し、当時(1970年頃)のITの専門家たちが参照したのが建設分野のプロジェクト管理手法でした。これは、開発プロセスとしてソフトウェア開発に一番近いモデルで開発を行っていると考えられたためで、建築や製造業のプロジェクト管理手法をソフトウェア開発に適用したのが、最初の開発手法であるウォーターフォール型開発モデルです。

建設分野・製造分野(※特にオーダーメイド品生産)の開発管理手法は「毎回異なるものを作る。前と丸々同じものを作る事はほぼ無い」という点でソフトウェア開発手法と非常に近しく、開発管理手法が確立していなかった当時のソフトウェア開発(およびそのプロジェクト管理手法)からすると非常に革新的だったそうです。


ウォーターフォール型開発は、開発プロジェクトを複数の作業工程に分割し、次の様な運用ルールで進めるものです。

 * 前工程が完了しないと次工程に進まない
 * 次工程に進んだあと、前工程には決して戻らない
 * 開発途中での追加や変更は原則として受け入れない

なお、このウォーターフォール型開発モデルは1998年に出た書籍でも

//quote{
『ソフトウェアのプロジェクトは、家建築のプロセスに似た方法で進行する。』
ソフトウェア工学-理論と実践(ピアソン:2001) から引用
//}

//noindent
と記載されており、少なくとも20世紀においてはウォーターフォール型開発モデル(とそれを発展させたモデル)が主たるソフトウェア開発管理手法であるとされていました。

またウォーターフォール型開発モデルが世に出た後、これを発展させたり応用応用した様々な開発モデルが考案され、実際のプロジェクトマネジメントシステムとして運用されました。

ウォーターフォール型開発の代表的なモデルを挙げてみましょう。

 * Ｖモデル：ウォーターフォール型開発モデルのテストの部分を設計の工程に対応させたもの
 * プロトタイピングモデル：ウォーターフォール型開発における、リスクと不確実性を減らすためにシステムの全部ないし一部を試作して検証し、その後システム全体を作るもの
 * スパイラルモデル：計画、目標・代替案・制約の決定、代替案とリスクの評価、開発とテストの各工程を何周も繰り返しながら一周ごとに設計→開発→テスト　と段階を追って進めていく事でソフトウェア開発を行うもの

このように様々な開発モデルが考案され、また実際にたくさんの開発プロジェクトでウォーターフォール型開発手法が運用され、様々なソフトウェアが開発されてきました。

これらのモデルは概ね「開発者は顧客が要求することを最初から全て理解している」「開発者は顧客にこの先要求されることを最初から全て予測している」といった@<b>{前提が成立すればうまくいく}、@<b>{これからの変化にも耐えられる}という大前提があり、「最終の完成形のソフトウェアを作りきればその後は弄らない」というのがベースのルールになります。言い換えれば、例えば、@<b>{仕様書が過不足なく完璧に作られている}、といった、アジャイルを知る我々からは不可能なことが前提となっています。

また、ウォーターフォールでも一応。状況の変化などは考慮しています。ただし、その考え方は、「状況の合わない部分が出ることはあって、その際に小規模な改修はするが、基本は大きく合わなくなれば丸ごと作り直せば良い」という前提に立ちます。

しかしながら、実際は、1998年に出た本でも

//quote{
『伝統的な「ウォーターフォール」のアプローチで開発を行うことは、今日のシステムではもはや柔軟でもふさわしくもない。』
ソフトウェア工学-理論と実践(ピアソン桐原:2001) から引用
//}

//noindent
と記載されています。ここまで挙げた各種の開発手法が、「(特に、未来の)変化に耐えられる」か？という観点では大きな課題を持っているという事実は、当時のソフトウェア開発手法の共通の課題であった事が伺えます。

そして、この課題に対する一つの答え@<b>{アジャイル的な開発プロセス}が示されるにはもう少し時間が必要だったのでした。

=== スクラムが産声をあげる

時は前後して1993年、ソフトウェア開発手法としての「スクラム」が産声を上げます。

これは、1986年に野中郁次郎博士と竹内弘高博士が、当時の日本の製造業における革新的な開発手法を分析し、「スクラム」と名付けて発表した論文が原点です。

https://hbr.org/1986/01/the-new-new-product-development-game

さらに、1993年にJeff Sutherland、John Scumniotales、Jeff McKennaの3名がソフトウェア開発に適用した設計・分析ツールを構築し、また時を同じくして、Ken Schwaberも自社でのソフトウェア開発にこの手法、@<b>{スクラム}を用いました。

その後、これらの取り組みが1995年のOOPSLAカンファレンスで共同発表されます。後に「アジャイルソフトウェア開発スクラム」という書籍としてまとめられたことで、広く知られる事になります。

https://res.cloudinary.com/mitchlacey/image/upload/v1589750939/Scrum_Guide_July_2011_i7cho9.pdf

英語板はAgile Software Development with SCRUM (Series in Agile Software Development)　 Ken Schwaber, Mike Beedle, 2001/10/15
ですが、日本語版は絶版なようです。

※もうちょっと書き足すかも(8/24目処で)

=== XPがが産声をあげる

更に、ほぼ同時期に、XP(eXtreme Programming)も産声を上げます。
時期がスクラムとほぼ同時期だったのは偶然ですが、筆者としてはソフトウェア開発手法の改善に対する社会的な要請が高かったからだろうと推測しています。

XPはKent Beck、Ward Cunningham によって生み出され、その後1996年にKent Beck は Ron Jeffries、Martin Fowler、Ron JeffriesとともにプロジェクトでXPの実践を行いました。

そしてこれらの実践におけるの知見などを踏まえ、1999年 Kent Beckにより一冊の本が世に出ました。

「Extreme Programming Explained: Embrace Change」（邦題：エクストリームプログラミング@<fn>{xpbook}）※以下、「XP本」と記載
//footnote[xpbook][邦訳の第2版は、現在も普通に購入可能です。 https://www.ohmsha.co.jp/book/9784274217623/　また、上の始まりの話も12章「はじまりの物語」に書いてあるよ]

※もうちょっと修正はいるかも(8/24目処で)

*はじまりの物語ってどこにある？どれのことを言ってる？


==== 価値・原則・プラクティス

XPは色々と革新的でした。

その中でも、XP本でアジャイル開発における重要なポイントとして示されたものが
@<b>{「価値」「原則」「プラクティス」}です。

これは、XP本では次の様に記されています。

プラクティス：
＞プラクティスは日常的な取り組みである。
→これは、具体的なアクションを示すものです。

価値：
＞ある状況における好き嫌いの根源にあるものだ。
→これは、何をすべきかの判断基準を示すものです。

原則
＞その分野に特化した活動の指針である。
→これは、価値とプラクティスをつなぐための理屈や理由を示すものです。

また具体的な例として、ＸＰ本ではこれらの「価値」「原則」「プラクティス」がそれぞれ示されています。
※基本的にすべてXP本第２版ベースで記載します。それぞれの内容については、ぜひ原典であるXP本を読んでみてください。

 * 「価値」
 ** コミュニケーション(Communication)
 ** シンプリシティ(Simplicity)
 ** フィードバック(Feedback)
 ** 勇気(Courage)
 ** リスペクト(Respect)

 * 「原則」
 ** 人間性(Humanity)
 ** 経済性(Economics)
 ** 相互利益(Mutual Benefit)
 ** 自己相似性(Self-Similarity)
 ** 改善(Improvement)
 ** 多様性(Diversity)
 ** ふりかえり(Reflection) @<fn>{Reflection}
 ** 流れ(Flow)
 ** 機会(Opportunity)
 ** 冗長性(Redundancy)
 ** 失敗(Failure)
 ** 品質(Quality)
 ** ベイビーステップ(Baby Steps)
 ** 責任の引き受け(Accepted Responsibility)

 * 主要プラクティス(primary practices) @<fn>{practice}
 ** 全員同席(Sit Together)
 ** チーム全体(Whole Team)
 ** 情報満載のワークスペース(informative Workspace)
 ** いきいきとした仕事(Energized Work)
 ** ペアプログラミング(Pair Programming)
 ** ストーリー(Stories)
 ** 週次サイクル(Weekly Cycle)
 ** 四半期サイクル(Quarterly Cycle)
 ** ゆとり(Slack)
 ** １０分ビルド(Ten-Minite Build)
 ** 継続的インテグレーション(Continuous Integration)
 ** テストファーストプラグラミング(Test-First Programming)
 ** インクリメンタルな設計(Incremental Design)

 * 導出プラクティス(corollary practice)
 ** 本物の顧客参加(Real Customer Involvement)
 ** インクリメンタルなデプロイ(Incremental Deployment)
 ** チームの継続(Team Continuity)
 ** チームの縮小(Shrinking Teams)
 ** 根本原因分析(Root-Cause Analysis)
 ** コードの共有(Shared Code)
 ** コードとテスト(Code and TEsts)
 ** 単一のコードベース(Single Code Base)
 ** デイリーデプロイ(Daily Deployment)
 ** 交渉によるスコープ契約(Negotiated Scope Contract)
 ** 利用都度課金(Pay-Per-Use)

//footnote[Reflection][ここでいう振り返り(Reflection)は、スクラムでいうところのふりかえり(Retrospective)とは異なります。リフレクションは「内省」的な意味合いなので個人の成長を促すものです。一方のレトロスペクティブは「回顧」的な意味合いなので過去の反省で生産性の向上や対応方法の最適化を促すものです。]
//footnote[practice][XP本では、プラクティスを主要プラクティスと導出プラクティスに分けています。以下、Extreme Programming Explained: Embrace Change　2nd　Editionからの引用-　主要プラクティス（Primary practice)は、あなたが他ににやっていることとは無関係に役に立つものである。すぐに改善につながり、どれからでも安全に始められる。導出プラクティス(corollary practicices)は、先に主要プラクティスを習得しておかなければ難しいだろう。プラクティスを組み合わせれば増幅効果が得られるので、できるだけ早くプラクティスを追加した方が有利である。]

XP本でも謳われていますが、本を読むだけではその専門家にはなれず、実際にやってみて、専門家のコミュニティに参加し、そして誰かにその専門分野を教えないといけません。

これはアジャイルソフトウェア開発においては、アジャイルソフトウェア開発を実際にやってみて、コミュニティに参加し、更に誰かにそれを伝える事で専門家になれる　という事になります。

なぜそんな話になるかというと、「価値」がズレてしまうと駄目だし、「プラクティス」だけをなぞってもうまく行かないもので、結局それをつなぐための「原則」がしっかりしている必要があります。さらにこれら３つの「価値」「原則」「プラクティス」を一体で使わないと、うまくいかない（アジャイルとして本来ある形になれない）からです。

また、これらを繋ぐポイントとして、具体的な言語化が難しい「アジャイルマインド」が大事だね！ということになります。

=== Do AgileからBe Agileへ

そもそもアジャイルというのは、「機敏な」「敏しょうな」を示す英単語@<fn>{agile}で、@<b>{形容詞}です。
//footnote[agile][例えば、https://eow.alc.co.jp/search?q=agile]

このため、アジャイルを導入した最初の頃など、「意図してアジャイルを進める」「アジャイルに関するロール・アクションを行う」時期が必要な場合もありますが、本来のありようとしては、「アジャイルである」という状態を指します。「アジャイルをする」ではなく、「（その開発手法が）アジャイルである」という状態に到達した状態が本来の姿で正しいということになります。

最近流行り漫画の例でいうと、「アジャイルの呼吸・常中」みたいな話ですね。意識して行うのではなく、ニュートラルにその状態を維持する必要がある、といったイメージで考えてみましょう。

== アジャイルソフトウェア開発宣言(4つの価値と12の原則)

=== アジャイルソフトウェア開発宣言とは

スクラムやXPが本が出て一般的になり、その真意が掴み切れず、「アジャイル開発」を銘打っているが実態はそうではなかったプロジェクトが多く発生したようです。それに対するアンサーでもあるのですが、2001年に「アジャイルソフトウェア開発宣言(Agile Manifest)」が世に出ます。

https://agilemanifesto.org/iso/ja/manifesto.html

ここでは、4つの価値とそれの元となる12の原則が示されました。

//quote{

アジャイルソフトウェア開発宣言

私たちは、ソフトウェア開発の実践
あるいは実践を手助けをする活動を通じて、
よりよい開発方法を見つけだそうとしている。
この活動を通して、私たちは以下の価値に至った。

プロセスやツールよりも@<b>{個人と対話}を、
包括的なドキュメントよりも@<b>{動くソフトウェア}を、
契約交渉よりも@<b>{顧客との協調}を、
計画に従うことよりも@<b>{変化への対応}を、

価値とする。すなわち、左記のことがらに価値があることを
認めながらも、私たちは右記のことがらにより価値をおく。

Kent Beck
Mike Beedle
Arie van Bennekum
Alistair Cockburn
Ward Cunningham
Martin Fowler
James Grenning
Jim Highsmith
Andrew Hunt
Ron Jeffries
Jon Kern
Brian Marick
Robert C. Martin
Steve Mellor
Ken Schwaber
Jeff Sutherland
Dave Thomas

© 2001, 上記の著者たち
この宣言は、この注意書きも含めた形で全文を含めることを条件に
自由にコピーしてよい。
//}

=== アジャイル宣言の背後にある12の原則
また、アジャイル開発宣言に併せて、@<b>{12の原則}も公表されました。これは次のようなものです。

https://agilemanifesto.org/iso/ja/principles.html
※これも同じく日本語版

//quote{
12の原則

私たちは以下の原則に従う:

(1)顧客満足を最優先し、
価値のあるソフトウェアを早く継続的に提供します。

(2)要求の変更はたとえ開発の後期であっても歓迎します。
変化を味方につけることによって、お客様の競争力を引き上げます。

(3)動くソフトウェアを、2-3週間から2-3ヶ月という
できるだけ短い時間間隔でリリースします。

(4)ビジネス側の人と開発者は、プロジェクトを通して
日々一緒に働かなければなりません。

(5)意欲に満ちた人々を集めてプロジェクトを構成します。
環境と支援を与え仕事が無事終わるまで彼らを信頼します。

(6)情報を伝えるもっとも効率的で効果的な方法は
フェイス・トゥ・フェイスで話をすることです。

(7)動くソフトウェアこそが進捗の最も重要な尺度です。

(8)アジャイル･プロセスは持続可能な開発を促進します。
一定のペースを継続的に維持できるようにしなければなりません。

(9)技術的卓越性と優れた設計に対する
不断の注意が機敏さを高めます。

(10)シンプルさ（ムダなく作れる量を最大限にすること）が本質です。

(11)最良のアーキテクチャ・要求・設計は、
自己組織的なチームから生み出されます。

(12)チームがもっと効率を高めることができるかを定期的に振り返り、
それに基づいて自分たちのやり方を最適に調整します。

//}

前述のアジャイル開発宣言の4つの価値と12の原則を対応・紐づけると次のようになります。

※なお、この対応は筆者の独断と偏見によるものです


プロセスやツールよりも@<b>{個人と対話}を、：(4)(5)(6)(11)(12)

包括的なドキュメントよりも@<b>{動くソフトウェア}を、：(1)(3)(7)(10)

契約交渉よりも@<b>{顧客との協調}を、：(1)(2)(4)(5)(6)(12)

計画に従うことよりも@<b>{変化への対応}を、：(2)(3)(6)(8)(9)(10)

このように、あくまで1:1で対応しているのではなく、宣言と原則が相互に作用し合っていることがわかります。

こういったアジャイルの価値と原則を大事にしつつ、現在もアジャイルは世界中で推進されています。

== 国内でのアジャイルの興り

さて、海外の話ばかりでもなんなので、最後にアジャイルに関する国内事情がどうだったのかも見てみましょう。

海外で産まれた歴史は「スクラム」→「XP」の順でしたが、日本で広まっていった順序的には実は逆で、@<b>{「XP」がまず有名になり、その後「スクラム」が浸透していった}という歴史があります。

XPについては、2001年頃から情報処理学会の刊行物(会誌、論文誌)で情報が出始め、2002年3月@<fn>{xpreport1}、4月の会誌@<fn>{xpreport2}でXPについてのまとまった記事が掲載されたことが契機のようです。

//footnote[xpreport1][平鍋健児, XP：EXtreme Programming：ソフトウェア開発プロセスの新潮流 -前編：XP概要とその周辺-, 情報処理　Vol43(2002) No3,235-241 http://id.nii.ac.jp/1001/00064473/]
//footnote[xpreport2][平鍋健児, XP：EXtreme Programming：ソフトウェア開発プロセスの新潮流 -後編：XP実践事例の紹介-, 情報処理　Vol43(2002) No4,427-434 http://id.nii.ac.jp/1001/00064181/]

また、スクラムについては2004年にはじめて、情報処理学会の研究報告@<fn>{scrumreport}が上がっています。

//footnote[scrumreport][藤井 拓,鶴原谷 雅幸,大津 尚史, 普通のプロジェクトへの適用を目指したアジャイルな開発手法の構築と適用結果,情報処理学会研究報告ソフトウエア工学{SE},2004, Vol87(2004-SE-145),15-21, http://id.nii.ac.jp/1001/00021293/]


また当時の雑誌媒体についても2誌で情報を調べてみました。おおよそこの歴史を裏付ける内容で、情報が出てきたのも同様の順でした。

 * @<b>{XP}

Software Design誌(2005/08 号)

2002年8月号からエクストリームプログラミングについての記載が出始め、200209 antの記事　「これでわかった！ＸＰの使い方」で一般的な記事が出た

WebDBPress誌(2001/11/15) Vol.5 のPHPこども電話相談室　が最初@<fn>{WebDBPress}

//footnote[WebDBPress][ただしUnit Test（単体テスト）の為のクラス PhpUnitを取り上げたものであり、あんまりガッツリした記事はしばらくない]

 * @<b>{スクラム}

Software Design誌(2005/08 号)

「緊急レポート！　最新ソフトウェア開発手法事情　繰り返し型開発の落とし穴　失敗から学ぶ効果的運用　chapter4」が最初（とはいえあまりガッツリした内容ではないが）

WebDBPress誌(2008/5/25) vol.44

//noindent
ということで、日本でのアジャイルの興りは2002~3年頃に来た、XPブームがおそらく最初の大きな波であったことがわかりました。

====[column]XPがやってて来た(黒船がやってきたのノリで)
実際、XPは革新的であった。というよりは革新的すぎて、国内でも話題になった時は大きな衝撃を伴うものでした。

XPが話題になった当時、筆者は大手のSIerでシステム開発に従事していました。その時に、「言ってる事はわかるけど社内でコレ適用できんの？」みたいな話題で盛り上がった事を今でも鮮明に覚えています。

なお、SIerが当時一般的に行っていた受諾開発とXPは基本的に食い合わせが悪く、筆者は結局その会社ではアジャイル的なプロジェクトに従事する事は無かったのでした。

結局XPは当時(2002～3年ぐらい)としてはあまりに先進的すぎたため、色々なアプローチがバズワード化してしまったり……と、それはそれで当時はネタにもされたものではあった（特にSIなんかだと）

「何故か2人で1つのPC使ってコード書くらしいで」
「テストから先に書くの？」
「めちゃくちゃ小さい粒度でプログラム書くらしいで」
「ユーザーも設計開発に参加すんの？」

みたいな。

国内的な事情
としては、アメリカの企業は基本的に自社システムは社内でシステムを内製するが、日本の企業はSIer(システムインテグレーター)にシステムを外注する　という業務システムに対する開発体制の大きな差があり、こういった差をXPでは埋められなかった的な話はありそうだな……と思っています。

====[/column]

== アジャイルといっても色々ある
最後に、現在一般的となっているアジャイルプロセスや、国産のアジャイルプロセスと呼べるものについて、原情報を中心に紹介しておきます。

=== SCRUM

前述の契機となった話のあと、Jeff Sutherlandはこれらを整理・構築し2011年に、「スクラムガイド」をまとめ上げます。

最新のスクラムガイドは以下に掲載されており、誰でも読めるようになっています。

https://scrumguides.org/

また、邦訳版も同様に掲載され、公開されています。

https://scrumguides.org/docs/scrumguide/v2020/2020-Scrum-Guide-Japanese.pdf

=== XP(eXtreme Programing)

XPに触れる場合、まず原情報であるXP本を参照するのが良いでしょう。

XP本は、オーム社から日本語版で第２版が出ています。

https://www.ohmsha.co.jp/book/9784274217623/

=== 国産のアジャイルについても触れてみよう

また、国産のアジャイル的なアプローチについてもいくつか紹介しておきましょう。

１つは、IPA(情報処理推進機構)が出している「SPINA3CH(スピナッチキューブ)」です。

これは開発者自らがモデルベースアプローチにより自律的に改善を行うためのメソッドで、アジャイル的に開発現場で開発の課題を解決していくためのもので、現在はISO/IEC TR 29110-3-4(ソフトウェア開発における自律改善手法) として国際規格にもなっています。

PDFは無償DLできるのでぜひ読んでみましょう。 https://www.ipa.go.jp/archive/publish/qv6pgp00000010et-att/000027628.pdf

もう１つは、サイボウズ株式会社が出しているkintone SIGNPOSTです。

https://kintone.cybozu.co.jp/kintone-signpost/

概要については、ページからそのまま引用します。
//quote{

「kintone SIGNPOST(キントーンサインポスト)」は「kintoneで継続的な業務改善をするための道しるべ」として、kintone経験者の考え方やコツを体系的・網羅的にまとめたコンテンツです。

https://kintone.cybozu.co.jp/kintone-signpost/about.html

//}

簡単に言うと、ノーコードツールを現場で継続的に改善しながら業務にフィットさせて使っていくためのコツやノウハウ、考え方をパターンとしてまとめ、共有知としたものです。
※またkintoneでの開発・運用は上の様な形を目指すため、アジャイル開発になります。

== おわりに

ここまで、アジャイルに至る歴史やその背景、興りについて学んできましたがどうだったでしょうか？

さて、次のページからは具体的な「みんなのアジャイル」の話に移っていきます。

ぜひ、いろんな章から「みんなのアジャイル」を取り込んで、自分のアジャイルに活かしていってくださいね！
