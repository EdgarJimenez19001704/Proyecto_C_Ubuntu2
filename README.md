Nombre del proyecto: Proyecto en C
Descripción: pide un monto, luego pregunta que tipo de las 3 monedas es (quetzales, dolares estaunidenses o euros) y luego muestra el monto en las otras monedas
Prerrequisitos (tecnologías a instalar)
php: lenguaje interpretado
C: lenguaje compilado


Preparar programas para el curso:

Ubuntu:
1. sudo apt install git
2. sudo apt install php
3. sudo apt install apache2 ;;;y;;; sudo service apache2 restart  ;;;y;;; confirmación: sudo service apache2 status
4. sudo apt install build-essential (este es C)

Conectar terminar Ubuntu con VSC Windows:

VirtualBox, machine, setting, Network, Bridged adapter
1. Ubuntu: sudo apt install ssh
2. Ubuntu: ifconfig (ver la ip)
1. CMD: ssh arturo@192.11... (opcional)
1. VSC: extensión, remote ssh
2. VSC: TV, SSH, la tuerca, la primera opción (C:\Users\R2_dll\.ssh\config)
3. Host aquíElNombreQueSeDeseeInventar
	HostName 192.168...
	User NombreEnUbuntuDeUsuario(arturo)
4. Refrescar
5. Abrir el servidor creado
6. pass
7. :)
8. explorer -> abrir carpeta -> home/usuario(arturo)


PHP:
-VSC: abrir var/www/html
-En el buscador (windows o Ubuntu) colocar la ip ubuntu
ejemplo: 192.168.0.132/hola.php
-Empezar a usar php o html


C:
-VSC terminal: entrar a la carpeta del archivo .c
-VSC terminal compilar (crear binario): gcc nombre.c -o proyecto_compilado
- ./proyecto_compilado    (para ejecutar) 





algunos comandos para navegar:
cd .. (para regresar entre carpetas)
cd home (entra al home, o la carpeta que se desee)
ls (para mostrar que hay en la carpeta)
cat nombre.extensión (para abrir archivos)
mkdir nombre (crea carpetas)

Si una carpeta no deja crear archivos se debe:
ls -l  (si dice root significa que el propietario es el administrador y hay que cambiarlo), entonces
En la terminal te ubicas en la carpeta www (eje)
sudo chown arturo:www-data html -R




Crear Proyecto en GitHub:
1. Crear repositorio sin Readme.md
2. Si ya se tiene el código en la máquina: 
"...our push an existing repository from the command line"
3. git init en terminal vsc dentro de la respectiva carpeta de lo que se subirá
4. copiar primera linea y pegarla    XXXXXXXXX
5. NOOcopiar segunda linea y pegarla (git branch -M main)
6. NOOgit push -u origin main
7. NOOgit push
8. NOOgit push --set-upstream origin main
9. git add .       XXXXX
10. git commit -m "test"       XXXXXXX
11. git push      XXXXXXX
12. git push --set-upstream origin main
13. Ir a "Code" y ahí estará lo subido.

Datos del autor (Edgar Arturo Jiménez Centeno, 19001704@galileo.edu, 19001704)
