FROM alpine:3.8

RUN apk add --no-cache build-base

WORKDIR /code
COPY . .



CMD ["tail","-F","README.md"]