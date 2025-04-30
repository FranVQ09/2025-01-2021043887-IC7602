FROM node:20

WORKDIR /app
COPY ../../dns_ui /app

RUN npm install && npm run build

EXPOSE 3000

CMD ["npm", "start"]
