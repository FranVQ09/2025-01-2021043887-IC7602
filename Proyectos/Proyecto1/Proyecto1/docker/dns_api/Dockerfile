FROM python:3.11

WORKDIR /app
COPY ../../dns_api /app

RUN pip install --no-cache-dir -r requirements.txt

EXPOSE 8000

CMD ["python", "app/main.py"]
