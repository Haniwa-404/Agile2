= 関係の質を改善させるためにやってよかった12のこと

//flushright{
小糸　悠平 （@koito）
//}

== はじめに
筆者は長年受託アジャイル（最近では共創アジャイルと呼ぶことも多いですが）のプロジェクトに携わってきました。共創アジャイルを実践してきたなかで、アジャイル開発において組織・チーム・人との関係性がプロダクトの成功に極めて重要であるということに気づきました。

Daniel Kim氏によって提唱された成功循環モデル@<fn>{theory-of-success}では、
最初から成果（@<strong>{結果の質}）を求めようとするとチームが直接的な数字作りに走り、チーム内に摩擦や対立が生まれ（@<strong>{関係の質}の悪化）、
心理的安全性が確保されず（@<strong>{思考の質}の悪化）、行動が消極的になり（@<strong>{行動の質}の悪化）、さらに結果が悪くなる（@<strong>{結果の質}の悪化）
という「@<strong>{失敗の循環}」が生まれると述べられています。

反対に、「@<strong>{成功の循環}」として、チームの関係性がよくなることから着手する（@<strong>{関係の質}の向上）と、
考え方が前向きになることで多くのメンバーによる気づきが生まれ（@<strong>{思考の質}の向上）、
チームの積極的・自律的な行動につながり（@<strong>{行動の質}の向上）、成果が生まれる（@<strong>{結果の質}の向上）。
成果が生まれることでますます関係性がよくなる（@<strong>{関係の質}の更なる向上）と述べられています。

//footnote[theory-of-success][成功の循環：https://www.humanvalue.co.jp/keywords/theory-of-success/]

プロダクトを成功に導くために、前述のように多くの関係が必要となります。
顧客と開発チームが密接に連携し、透明性とコミュニケーションを重視することで、よりよい製品を迅速に提供することが可能となります。
また、チーム内外の信頼関係と協力体制はプロダクトの成功に不可欠です。
フィードバックを受け入れ改善を続けることで組織全体が成長し、より高い成果を生み出すことができるでしょう。

//image[seikou][成功の循環][scale=0.6]

 * 顧客と一緒に本当に必要とするものについて考えられる関係
 * 開発者が顧客に必要なものを正しく理解できる関係
 * 開発したものに対し顧客にフィードバックをもらえる関係
 * チームの活動をサポートし、モチベーションを高められる関係
 * 問題が発生したときにオープンに話し合い、迅速に解決できる関係
 * チームメンバー同士が信頼し合い、協力して課題に取り組む関係
 * 継続的な改善を追求し、成長し続ける関係



〓本節〓では、筆者が実際に取り組んで効果のあった関係性向上の手法を、チーム内およびチーム外の2つの視点から紹介します。すべての組織に適用できるわけではありませんので、各組織の状況に応じて判断していただければと思います。

== チーム内のよい関係性の作り方
チーム内の関係性を改善するために実施した取り組みについて解説します。

==== やってよかったこと1：スクラムの勉強会を定期開催する

 * やったこと

 チーム立上げ直後に、1スプリントに1時間くらいかけて、スクラムについての勉強会を実施しました。

 一部メンバーからは、そんなことよりさっさと開発を進めたいと言う声も出ましたが、必要コストと割り切って開催することにしました。

 * 過去に取り上げたテーマ
 ** 直近のスプリントで発生した事象に対するケーススタディ
 ** スクラム関連書籍の読書会
 ** スクラム関連イベントの動画鑑賞
 ** ワークショップの実施

 * 効果：
 ** チームのスクラムへの理解度が一定の水準となる
 ** 理解レベルを合わせる時間が減り、本質に集中できる
 ** メンバーが学習することでエンゲージメント向上に繋がる

 * 実践のコツ：

 勉強会の準備に時間がかからないものを選ぶようにしました。

 以前のチームで準備を持ち回りにしたところ「準備の負荷が高い」という理由で
 エンゲージメントが逆に下がってしまうことがありました。
 日頃から多くの勉強会テーマのストックを用意して、準備に時間をかけずに開催できるようにします。 


==== やってよかったこと2：競合システムの勉強会を開催する
 * やったこと

 チームが開発するプロダクトに競合製品がある場合は、
 その製品をみんなで触って意見を交換する時間を設けました。
 さらに、その中で皆で画面を操作し気付いたことを言い合い、自分たちのプロダクトの価値向上に繋がるものは
 PBIに追加するなどとして、プロダクトへの理解を深めるようにしました。

 * 効果：
 ** POとチームが対等な立場で意見を交換でき距離が縮まる
 ** 皆で意見を共有することでチームの一体感が強くなる
 ** POがプロダクトへの思いを伝えることができる
 ** サービスへの理解が深まりチーム内の認識齟齬が減る

==== やってよかったこと3：PBIをチームみんなで作る
 * やったこと

 あるチームでは立上げ時こそユーザストーリーマッピングを皆で検討しましたが、
 それ以降は何となくPOがユーザストーリーを考える人、
 開発者が開発する人と徐々に役割が決められてしまっていました。
 POと開発者の関係が遠くなっていくのを感じたので、
 POにはPBIの完成度の低い(エピック単位までしか検討していない)状態で
 バックログリファインメントに挑んでもらうことにしました。

 またバックログリファインメントの中で、チーム全員でエピック単位のユーザストーリーマッピングを作成するワークを行いました。

 * 効果：
 ** チームでワークをすることで一体感が強くなる
 ** POの負荷が下がり、プロダクトの価値追求に時間を割ける
 ** PO、開発者の信頼関係が強くなる

==== やってよかったこと4：(早く小さく)失敗してみる
 * やったこと：

 スプリントゴールを意図的に高く設定し、失敗を経験・体験するようにしました。
 チームの状況にもよりますが、4スプリントに1回くらいの頻度で実施しました。

 * 効果：
 ** 失敗した場合の周囲の反応を体験できる
 ** (大抵の場合)失敗しても責められることはなく、失敗を恐れず挑戦する雰囲気が生まれる
 ** ふりかえりの議論が活性化する
 ** ステークホルダーがチームの状況により関心を持つようになる

 * 実践のコツ

 スプリントゴールが明らかに高すぎると、チームメンバーが最初から諦めてしまうので、
 ラインの見極めは経験を積んで慣れていきます。
 
 また、失敗した時の振る舞いも重要です。
 ふりかえりでネガティブな雰囲気にならないよう良い雰囲気を作り、
 前向きな議論が進められるようにします。

==== やってよかったこと5：エンドユーザがサービスを使ってもらっているところを見る
 * やったこと：
 
 サービスイン後実際にエンドユーザがサービスを使っているところを、関係者と見学し
 プロダクトの価値向上のためのワークを行いました。

 アジャイル開発を実践している現場でも、サービス利用している所を見ていない関係者は意外と多くおり、
 関係性を高めること以外にも、見学することによる学びはかなり多く得られます。

 * 効果：
 ** ステークホルダとチームの距離が縮まる
 ** プロダクトへの思いが強くなり関係者の一体感が生まれる

==== やってよかったこと6：メンバーが順番にイベントを欠席する
 * やったこと：

 チームメンバーが後からJoinした場合や、ベテランと若手など開発経験に差がある場合などは、
 チーム内に知識差が生まれてしまうケースがあります。

  この状態が続くと質問する人/される人が固定化され、上下関係が生まれてしまいます。
 そこで、チームメンバー(特に有識者)がスクラムイベントを欠席することで、
 特定の個人が全てを把握している状態を強制的に無くし、
 お互いに質問しながら開発を進めるチームを作り上げることができます。

 * 効果：
 ** お互いに質問して開発を進めるように変化する
 ** チームメンバー全員が自分の知識から意見を発信するようになる
 ** 欠席したメンバーに伝えることで会話の量が増える

 * 実践のコツ

 チームが軌道に乗る前にやってしまうと混乱しか残らないので、
 チームの成熟度を見極めて実践します。

==== やってよかったこと7：毎スプリント小さな変化を入れる
 * やったこと：
 
 変化のない環境でスプリントを進めていくと、安定はする一方でマンネリ化しまうので
 スプリントごとにチームに少しずつ変化を与えるようにしました。

 * これまでやってみた内容
 ** メンバーの入れ替え(SM⇆開発者の入替、複数チームであればチーム間でSMの入替)
 ** スクラムマスターがスクラムイベントに参加しない
 ** スクラムイベントにゲストを招く

 * 効果：
 ** 変化に適応するためにメンバー間の会話が増える
 ** 変化に強い結束の取れたチームが出来上がる

== チーム外（ステークホルダー）とのよい関係性の作り方
プロダクトの成功には、チームを支える顧客やステークホルダーとの良好な関係が欠かせません。
ステークホルダーとの関係性は会社や組織の状況による差異が大きいため、抽象的な表現になりますがご理解ください。

==== やってよかったこと8：ステークホルダーそれぞれの関心事を明確にする
 * やったこと：
ステークホルダーの関心事を一覧化し、可視化しました。

 ステークホルダーと一口に言っても、開発部門長、事業部門長、企画、セールス、
 カスタマーサポートなど多岐にわたります。
 それぞれがプロダクト、チームに対して異なる期待や関心を持っています。
 誰が何に興味を持っているのかを整理し、その関心内容に応じてをチームから適切な関係性を築いて行くことが重要です。
 例えば、以下のイメージのように一覧に整理します。


//image[image1][ステークホルダーの関心整理][scale=0.6]

 * 効果：
 ** ステークホルダーの関心事、責務が誰からも明確になる
 ** ステークホルダーとの効果的なコミュニケーションが可能になる

 * 実践のコツ

 ステークホルダーや、各ステークホルダーの関心事は時間と共に変化していきます。
 同じ事業部門長というポジションであっても、人が変わると責務、関心事も変わってくるので、
 一度作って終わりではなく定期的に見直すように心がけます。

==== やってよかったこと9：ステークホルダーとどのように関わるかを決定する
 * やったこと：

ステークホルダーの関心事を整理した後、ステークホルダーどう関わっていくかを決定します。
 
 以下がイベント参加のイメージです。
 スクラムを用いる場合、スクラムイベントに当てはめたくなるところですが、
 ステークホルダーの関心事を満たす適切なスクラムイベントがない場合は
 無理やり当てはめるよりも、別の場を設けた方が良いです。
 スプリントレビューの参加者はスプリントプランニングの時点で参加者を決定し、
 ステークホルダーに伝えることで早めに予定を確定させていました。


//image[image2][ステークホルダーの必要十分なイベントを設定する][scale=0.6]

 * 効果：
 ** ステークホルダーにとって必要な情報だけを入手できる
 ** 関連するイベントのみの参加により、発言数が増加しプロダクト・チームへの関心が高まる
 ** イベント参加率が向上する

 * 実践のコツ：

 参加者に不足がないようにと考えると、どうしても多くの参加者を招いてしまいがちです。
 人数が多いと一人一人の発言機会も減ってしまうので、
 最初は最低限の参加者を招き、足りなかったら追加するようにすることがおすすめです。

 私の過去の失敗例として、スプリントレビューに多くの参加者を招きすぎた結果、
 役職が上位の方が多く話すことになり、ユーザーにより近い現場の方が
 フィードバックを出しにくくなる経験をした。
 それ以降は初期はあえて参加者を絞ることで、より質の高いフィードバックを貰うようにします。

==== やってよかったこと10：スタートダッシュを成功させる
 * やったこと：
 スタートダッシュを成功させるには、結果を見せることが一番の近道です。

 ステークホルダーの中にはアジャイル開発に懐疑的な方やネガティブな感情を持つ方もいます。
 開発がスタートし、早い段階から動くプロダクトが見せれないと、
 「アジャイルって言っても早くないじゃん」と、ネガティブな印象が払拭されず、
 そこから関係性を作っていくのは非常に難しいものとなります。
 キックオフから最初の1ヶ月で、そこで動くプロダクトを見せられるかどうかが
 ポイントかなと私は考えており、1ヶ月で動くプロダクトを見せられるようベストを尽くします。

 * 効果：
 ** ステークホルダーがチーム、プロダクトに対してポジティブな感情になる
 ** 上記の結果、チームの活動に協力的になり以降の開発がし易くなる

 * 実践のコツ：

 キックオフより前でも出来ることは進めておきます。
 キックオフ前にステークホルダーや開発者を雑談（おやつ神社など）に連れ出し、
 そこで関係者同士の顔合わせや、どういった方針で進めて行くかなど、
 スタートダッシュを決める状態を作り上げていきます。

==== やってよかったこと11：スプリントレビューを好きになってもらう
 * やったこと：

 スプリントレビューはプロダクトの検査と適応を行う場。
 より質の高いフィードバックを得るために、まずはステークホルダーに
 スプリントレビューを好きになってもらうよう工夫をした。
 
 * ワクワクするシナリオの検討
 ** ユーザの実利用シーンに沿ったシナリオでレビューを実施
 * プロダクトに直接触れる状態にする
 ** レビュー時にただ動作を見るだけはなく、直接プロダクトを触れる形式
 * フィードバックがすぐに実装される経験
 ** POと相談しステークホルダーからのフィードバックを優先的に提供する

 * 効果：
 ** ステークホルダーのチーム・プロダクトへの関心が高まる
 ** レビュー時間以外でもプロダクトに対する気付きを共有するようになる

 * 実践のコツ：

 私の過去の失敗談です。
 主催するチームから見てもあまり楽しくないスプリントレビューを続けていたら
 ステークホルダーの中でスプリントレビュー参加より他の打合せを優先し、欠席することが増えてしまいました。
 ですから、ステークホルダーにレビューに参加する価値がある、そもそも参加自体が楽しいと思ってもらえるよう
 出来る工夫をしていくことが大切です。。

==== やってよかったこと12：上手くいってない状態を早期に曝け出す
 * やったこと：

 「やってよかったこと10 スタートダッシュを成功させる」と反対の話になるが、
 上手くいっていない状態も積極的に共有することでステークホルダーに味方になってもらい
 関係性を良くすることができる。
 開発が順調に行ってない場合、その事実を隠したくなる気持ちも分かるが、
 逆に関係性を強めるチャンスと考え、積極的に開示します。
 スプリントゴールの未達や、リリースバーンダウンの芳しくない状況、
 チームが抱えている課題などの透明性を高めるだけでなく、
 それに対して議論する場を作りチームと一緒に考えられる環境を作っていきます。

 * 効果： 
 ** 一緒に解決策を考える中で、チームとの対話の機会が増える
 ** チームへの関心が高まる

 * 実践のコツ：
 
 勇気を持って報告します！
 アジャイルは小さく失敗することで成功に近づくものなので、
 あまり深刻にならずにポジティブな雰囲気で報告することで
 受け取る側もポジティブな反応が返ります。

== まとめ
結果を出し続けられるチームを作るためには、チーム内/外、両方の関係の質をあげていく必要があります。

今回、12のアイデアを紹介しましたが、みなさんのチームで実行している関係の質を向上させるためのアイデアについて
情報交換させていただき、よりよいチーム作りにつなげていければいいなと思っております。

　
-----------------------

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-koito/koito_photo.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        \begin{verbatim}
        小糸 悠平（Yuhei Koito） https://twitter.com/koito_yuhei
        \end{verbatim}
        \end{minipage}
    \hspace{1ex}
//}

KDDIアジャイル開発センター株式会社でアプリやWebサイト開発のスクラムマスターをやりながら、
社内スクラムコミュニティを運営し組織内にスクラムを広げる活動中。

モットーは、「自分と自分の周りの人が幸せでい続けられるように行動する」。