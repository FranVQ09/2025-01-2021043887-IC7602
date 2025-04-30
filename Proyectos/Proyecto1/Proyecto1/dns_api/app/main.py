from fastapi import FastAPI, Request
from .resolver import resolve_dns_packet
from app.firebase_client import check_domain_exists
import base64
from fastapi.exceptions import HTTPException

app = FastAPI()

@app.post("/api/dns_resolver")
async def dns_resolver(request: Request):
    data = await request.json()
    packet_b64 = data.get("data")

    if not packet_b64:
        raise HTTPException(status_code=400, detail="Missing 'data' field in request body")
    
    try:
        packet = base64.b64decode(packet_b64)
    except Exception:
        raise HTTPException(status_code=400, detail="Invalid base64 encoding")
    
    response = resolve_dns_packet(packet)
    return {
        "response": base64.b64encode(response).decode(),
        "status": "success"
    }

@app.get("/api/exists")
async def exists(domain: str):
    exists = check_domain_exists(domain)
    return {"exists": exists}
