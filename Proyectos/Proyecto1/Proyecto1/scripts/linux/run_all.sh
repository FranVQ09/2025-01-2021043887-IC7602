#!/bin/bash

echo "[*] Aplicando Helm Chart..."
cd ../helm
helm upgrade --install dns-project . --create-namespace --namespace dns-project
