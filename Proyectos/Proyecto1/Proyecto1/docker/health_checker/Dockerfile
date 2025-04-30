FROM gcc:12

WORKDIR /app
COPY ../../health_checker /app

RUN make

CMD ["./health_checker"]
