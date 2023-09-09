FROM ubuntu:22.04

RUN apt update

RUN apt update && apt install -y wget \
    curl \
    vim \
    git \
    net-tools \
    cmake \
    clang \
    libeigen3-dev \
    nlohmann-json3-dev


# RUN apt update && \
#     apt install -y libzmq3-dev && \
#     wget https://github.com/zeromq/libzmq && \
#     unzip master.zip && \
#     rm master.zip && \
#     cd cppzmq-master && \
#     mkdir build && \
#     cd build && \
#     cmake .. && \
#     make -j4 install


CMD ["/bin/bash"]
