# Algo - 競技プログラミング練習用リポジトリ

C++を使用した競技プログラミングの問題解答集です。主にAtCoderの問題を扱っています。

## ディレクトリ構造

```dir
.
├── src/
│   ├── AtCoder/
│   │   ├── contests/     # コンテスト参加時の解答
│   │   ├── samples/      # サンプル問題の解答
│   │   └── study/        # 学習用の問題
│   └── book/             # 書籍の問題
├── include/
│   └── bits/
│       └── stdc++.h      # プリコンパイル済みヘッダー
├── bin/                  # コンパイル済み実行ファイル (gitignore対象)
└── .vscode/              # VSCode設定
```

## 環境構築

### 必要なツール

- MinGW-w64 (g++)
- Visual Studio Code
- cppcheck (静的解析ツール)
- 推奨拡張機能: C/C++, Code Runner, c-cpp-flylint

### コンパイラパス

```path
C:/Program Files (x86)/mingw64/bin/g++.exe
```

### cppcheckの設定

c-cpp-flylint拡張機能を使用して、リアルタイムでコード品質チェックを行います。

**必要な設定:**

- cppcheckのインストール: `choco install cppcheck` または公式サイトからダウンロード
- VSCode設定でcppcheckのパスを指定（必要に応じて）

c-cpp-flylintは以下をチェックします:

- メモリリーク
- 未使用変数
- 配列の範囲外アクセス
- その他の潜在的なバグ

## 使い方

### 方法1: Code Runnerを使用

VSCodeで任意の`.cpp`ファイルを開き、右上の▶ボタンをクリックするか、`Ctrl+Alt+N`でコンパイル・実行されます。

実行ファイルは自動的に`bin/`ディレクトリに生成されます。

### 方法2: PowerShellスクリプトを使用

```powershell
powershell -ExecutionPolicy Bypass -File "run_cpp.ps1" -file "src/path/to/file.cpp"
```

## コンパイルオプション

- 標準: C++23 (GNU++23)
- 最適化: `-O2`
- 警告: `-Wall -Wextra`
- オンラインジャッジモード: `-DONLINE_JUDGE`

## 解答済み問題

### AtCoder サンプル問題

- [At_samples_105_A-BichromeCells.cpp](src/AtCoder/samples/At_samples_105_A-BichromeCells.cpp) - N×Nマス目の塗り分け
- [At_samples_105_A-NewYear.cpp](src/AtCoder/samples/At_samples_105_A-NewYear.cpp) - 年末までの時間計算
- [At_samples_105_A-RatingGoal.cpp](src/AtCoder/samples/At_samples_105_A-RatingGoal.cpp) - レーティング計算

### AtCoder コンテスト (2025/01/11)

- [At_contests_260111_A.cpp](src/AtCoder/contests/260111/At_contests_260111_A.cpp)
- [At_contests_260111_B.cpp](src/AtCoder/contests/260111/At_contests_260111_B.cpp)
- [At_contests_260111_C.cpp](src/AtCoder/contests/260111/At_contests_260111_C.cpp)

### 学習用

- [At_study_ex2.cpp](src/AtCoder/study/At_study_ex2.cpp)
- [At_study_ex3.cpp](src/AtCoder/study/At_study_ex3.cpp)
- [At_study_ex4.cpp](src/AtCoder/study/At_study_ex4.cpp)
- [At_study_ex5.cpp](src/AtCoder/study/At_study_ex5.cpp)

## .gitignore設定

以下のファイル/ディレクトリはGit管理対象外です:

- `*.exe` - 実行ファイル
- `bin/` - ビルド出力ディレクトリ

## ライセンス

個人学習用
