import firebase_admin
from firebase_admin import credentials, db

# Solo se inicializa una vez
if not firebase_admin._apps:
    cred = credentials.Certificate("/Users/franvq09/Documents/TEC/Semestre9/Redes/ProyectoOpcional/2025-01-2018093451-IC7602/Proyecto1/firebase/firebase-adminsdk.json")
    firebase_admin.initialize_app(cred, {
        'databaseURL': 'https://dns-proyecto-cce46-default-rtdb.firebaseio.com/'
    })

def check_domain_exists(domain: str) -> bool:
    # Modificación del dominio: Reemplazamos '.' por '_'
    domain_key = domain.replace('.', '_')
    
    # Hacemos la referencia a la base de datos Firebase
    ref = db.reference(f"/dns_records/{domain_key}")
    
    # Comprobamos si el dominio existe
    domain_data = ref.get()
    if domain_data is not None:
        return True
    return False
