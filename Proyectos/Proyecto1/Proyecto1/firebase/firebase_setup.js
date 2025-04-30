const axios = require("axios");
const baseURL = "https://<tu-proyecto>.firebaseio.com"; // Reemplazar con el real
const dnsRecordsPath = "/dns_records.json";
const ipToCountryPath = "/ip_to_country.json";

// Registros DNS de ejemplo
const dnsRecords = {
  "ejemplo.com": {
    type: "single",
    value: "192.168.1.10",
    healthy: true
  },
  "round.ejemplo.com": {
    type: "round-trip",
    values: {
      "1": { ip: "10.0.0.1", location: "CR", healthy: true },
      "2": { ip: "10.0.0.2", location: "US", healthy: true }
    }
  }
};

// Base de datos IP-to-Country (simulada)
const ipToCountry = {
  "200.91.100.1": "CR",
  "8.8.8.8": "US",
  "81.2.69.160": "GB"
};

async function seedFirebase() {
  try {
    console.log("[*] Sembrando registros DNS...");
    await axios.put(`${baseURL}${dnsRecordsPath}`, dnsRecords);

    console.log("[*] Sembrando base IP-to-Country...");
    await axios.put(`${baseURL}${ipToCountryPath}`, ipToCountry);

    console.log("[✔] Firebase inicializado correctamente.");
  } catch (err) {
    console.error("Error sembrando datos:", err.message);
  }
}

seedFirebase();
