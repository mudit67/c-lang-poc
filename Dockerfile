FROM alpine:3.8

RUN apk add --no-cache mpc1-dev

WORKDIR /code
COPY . .



CMD ["tail","-F","README.md"]