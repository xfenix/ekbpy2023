FROM python:3.10

ENV WORKDIR /tortuecell/

RUN pip install mypy nuitka
RUN git clone https://github.com/Omyyyy/pycom.git
RUN cd pycom && pip install .
# RUN git clone https://github.com/APrioriInvestments/typed_python.git
# RUN cd typed_python && pip install .
# RUN apt-get update -y
# RUN apt-get install -y python-dev

COPY . $WORKDIR
WORKDIR $WORKDIR
