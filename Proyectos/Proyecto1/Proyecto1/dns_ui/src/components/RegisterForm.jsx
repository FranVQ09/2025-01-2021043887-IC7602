import React, { useState } from "react";
import axios from "axios";

export default function RegisterForm() {
  const [domain, setDomain] = useState("");
  const [type, setType] = useState("single");
  const [value, setValue] = useState("");

  const handleSubmit = async (e) => {
    e.preventDefault();
    await axios.post("/api/register", {
      domain,
      type,
      value,
    });
    alert("Registro creado");
  };

  return (
    <form onSubmit={handleSubmit}>
      <input
        type="text"
        placeholder="Dominio"
        value={domain}
        onChange={(e) => setDomain(e.target.value)}
        required
      />
      <select value={type} onChange={(e) => setType(e.target.value)}>
        <option value="single">Single</option>
        <option value="multi">Multi</option>
        <option value="round-trip">Round Trip</option>
        <option value="weight">Weight</option>
        <option value="geo">Geo</option>
      </select>
      <input
        type="text"
        placeholder="Valor"
        value={value}
        onChange={(e) => setValue(e.target.value)}
        required
      />
      <button type="submit">Guardar</button>
    </form>
  );
}
