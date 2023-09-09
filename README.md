# develop

- C++でいろんなことをする(何を作るかは未定)

- docker command
```
docker build -t develop .
docker container run -it -v C:\\Users\\81805\\share\\develop:/develop --name develop develop
```

- コンテナに入るには
```
- docker start develop
- docker container exec -it develop /bin/bash
```

- git bashを使わずにcmdからコンテナに入る
   - なぜかgit bashのコマンドラインではコンテナ内に入れない為
