# MiniStudentDB

A simple student management system using C++ and SQLite.

## Build

```
make
```

## Run

```
./studentdb
```

## git 日志

```
commit 9e068e1029ec0eb11429da74794cb5339290f129 (HEAD -> master, origin/master)
Author: bxwang <billy5902@outlook.com>
Date:   Fri Feb 27 21:28:09 2026 +0800

    implement student CRUD operations

commit 54976219fcd482b10b59b6939e5afe898bfa83d8
Author: bxwang <billy5902@outlook.com>
Date:   Fri Feb 27 21:27:38 2026 +0800

    fixed a bug

commit 0d7092c877ab09a8fddf271535c681dfa1ffc47a
Author: bxwang <billy5902@outlook.com>
Date:   Fri Feb 27 20:52:00 2026 +0800

    add SQLite database wrapper

commit 44a97429280c5c4344c278de84f81cc93a22a07c
Author: bxwang <billy5902@outlook.com>
Date:   Fri Feb 27 20:11:47 2026 +0800

    implement Student class

commit 7e13d6bc22e0d37b74d90cb6e71d8ccb200a231f
Author: bxwang <billy5902@outlook.com>
Date:   Fri Feb 27 16:54:01 2026 +0800

    add main menu framework

commit dbbbe0aeb40ee42043f0c266f111855b5483c640
Author: bxwang <billy5902@outlook.com>
Date:   Fri Feb 27 16:37:55 2026 +0800

    init project structure
```

## 截图和示例

### sqlite 部分

ssh 登录 & 查看系统版本

![](./pic/截屏2026-02-27%2016.04.53.png)

安装 sqlite

![](./pic/截屏2026-02-27%2016.05.47.png)

查看版本

![](./pic/截屏2026-02-27%2016.06.18.png)

创建数据库

![](./pic/截屏2026-02-27%2016.07.29.png)

创建表

![](./pic/截屏2026-02-27%2022.10.13.png)

添加数据并查看

![](./pic/截屏2026-02-27%2022.10.37.png)

ORDER BY 按成绩排序

![](./pic/截屏2026-02-27%2016.18.24.png)

WHERE + ORDER BY

![](./pic/截屏2026-02-27%2016.19.41.png)

GROUP BY

人数统计

![](./pic/截屏2026-02-27%2016.20.57.png)

平均分

![](./pic/截屏2026-02-27%2016.21.42.png)

### C++ 部分

Student DB 程序

添加

![](./pic/截屏2026-02-27%2021.47.16.png)

更新

![](./pic/截屏2026-02-27%2021.47.31.png)

删除 & 退出

![](./pic/截屏2026-02-27%2021.48.15.png)
