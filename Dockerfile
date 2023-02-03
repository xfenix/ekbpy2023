FROM python:3.10

ENV WORKDIR /tortuecell/

RUN pip install mypy nuitka

COPY . $WORKDIR
WORKDIR $WORKDIR
