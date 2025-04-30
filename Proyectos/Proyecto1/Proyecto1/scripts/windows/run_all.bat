@echo off
cd ..\helm
echo [*] Desplegando proyecto con Helm...
helm upgrade --install dns-project . --create-namespace --namespace dns-project
